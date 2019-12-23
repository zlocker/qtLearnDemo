#include "mythread.h"
#include <QDebug>

int Worker::a = 0;
int Worker::b = 0;

/*MWorker *mes = new MWorker; */ //需要New对象才能使用
MWorker *Message::self = 0;
MyThread::MyThread(QObject *parent) : QObject(parent)
{
    MWorker * a = Message::Instance();
    a->d = 50;
    a->e = "你是";
//    C->d = 0;
}

MyThread::~MyThread()
{
//    workerThread.quit();
//    workerThread.wait();
}

void MyThread::Start()
{
    worker = new Worker;
    workerThread = new QThread;
    worker->moveToThread(workerThread);

    connect(workerThread, &QThread::finished, worker, &QObject::deleteLater);   //线程停止，释放worker内存
    connect(workerThread,SIGNAL(started()),worker,SLOT(doWork()));  //开启线程槽函数
//    connect(this, &MyThread::operate, worker, &Worker::doWork);     //operate连接dowork

    //方法1：控制线程中采用定时器
    m_timer = new QTimer;
    connect(workerThread, &QThread::finished, m_timer, &QTimer::stop);  //线程停止，停止定时器
    connect(workerThread, &QThread::finished, m_timer, &QObject::deleteLater);  //线程停止，释放内存
    connect(m_timer,SIGNAL(timeout()),worker,SLOT(doTimeWork()),Qt::DirectConnection);  //定时器工作函数

    m_timer1 = new QTimer;
    connect(workerThread, &QThread::finished, m_timer1, &QTimer::stop);  //线程停止，停止定时器
    connect(workerThread, &QThread::finished, m_timer1, &QObject::deleteLater);  //线程停止，释放内存
    connect(m_timer1,SIGNAL(timeout()),worker,SLOT(doTimeWork()),Qt::DirectConnection);  //定时器工作函数





    workerThread->start();      //开始线程
    m_timer->start(3000);       //开始定时器
    m_timer1->start(5000);       //开始定时器
}

void MyThread::Close()
{
    qDebug()<<tr("关闭线程");
        if(workerThread->isRunning())
        {
            worker->closeThread();  //关闭线程槽函数
            workerThread->quit();            //退出事件循环，发出finished信号
            workerThread->wait();            //释放线程槽函数资源
        }
}


Worker::Worker()
{
    isstop=false;
    /*方法二：子线程新建线程将定时器移植
    timer1.moveToThread(&thread);
    timer1.setInterval(900);
    connect(&thread,SIGNAL(started()),&timer1,SLOT(start()));
    connect(&timer1,SIGNAL(timeout()),this,SLOT(doTimeWork()),Qt::DirectConnection);
    connect(&thread, &QThread::finished, &timer1, &QTimer::stop);  //线程停止，停止定时器
//    connect(&thread, &QThread::finished, &timer1, &QObject::deleteLater);  //线程停止，释放内存
    */
}

Worker::~Worker()
{

//    thread.quit();
//    thread.wait();
}

void Worker::doWork()
{
    MWorker * x;
    mes->d = 1000;
//    thread.start();
    while (1)
    {
        if(isstop)
            break;
        a++;
        b++;
//        C->d++;
        mes->d+= 100;
        qDebug()<<"MyThread::startThreadSlot QThread::currentThreadId()=="<<QThread::currentThreadId();
        qDebug()<<a;
        QThread::sleep(1);
        x = Message::getSelf();
        qDebug()<<x->d<<x->e;
    }
}
void Worker::closeThread()
{
    isstop=true;
}

void Worker::doTimeWork()
{
    qDebug()<<mes->d;
    //qDebug()<< b;
}

MWorker *Message::Instance()
{
    if (!self) {
        QMutex mutex;
        QMutexLocker locker(&mutex);
        if (!self) {
            self = new MWorker;
        }
    }

    return self;
}

MWorker *Message::getSelf()
{
    return self;
}

void Message::setSelf(MWorker *value)
{
    self = value;
}

