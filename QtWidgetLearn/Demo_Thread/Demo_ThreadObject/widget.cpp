#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    opensThread();
}

void Widget::on_pushButton_2_clicked()
{
    closeThread();
}

void Widget::opensThread()
{
    qDebug()<<tr("开启线程");
    firstThread = new QThread;                                                      //线程容器
    myObjectThread = new MyThread;

    myObjectThread->moveToThread(firstThread);                                      //将创建的对象移到线程容器中

    connect(firstThread,SIGNAL(finished()),firstThread,SLOT(deleteLater()));        //终止线程时要调用deleteLater槽函数

    connect(firstThread,SIGNAL(started()),myObjectThread,SLOT(startThreadSlot()));  //开启线程槽函数

    connect(firstThread,SIGNAL(finished()),this,SLOT(finishedThread()));
    firstThread->start();                                                           //开启多线程槽函数
    qDebug()<<"mainWidget QThread::currentThreadId()=="<<QThread::currentThreadId();
}

void Widget::closeThread()
{
    qDebug()<<tr("关闭线程");
        if(firstThread->isRunning())
        {
            myObjectThread->closeThread();  //关闭线程槽函数
            firstThread->quit();            //退出事件循环
            firstThread->wait();            //释放线程槽函数资源
        }
}
void Widget::finishedThread()
{
    qDebug()<<tr("多线程触发了finished信号123");
}
