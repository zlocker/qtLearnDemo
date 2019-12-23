#include "mythread.h"
#include <QThread>
#include <QDebug>
#include <QMessageBox>
#include <QTimer>
#pragma execution_character_set("utf-8")
MyThread::MyThread(QObject *parent) : QObject(parent)
{
    isStop = false;
    mTimer = new QTimer(this);
    connect(mTimer,SIGNAL(timeout()),this,SLOT(dealTimer()));
    connect(this,&MyThread::destroyed,mTimer,&QTimer::deleteLater);
}

void MyThread::myTimeout()
{
    /*
    while( !isStop )
    {

        QThread::sleep(1);
        emit mySignal();
        //QMessageBox::aboutQt(NULL);
         qDebug() << "子线程号：" << QThread::currentThread();
         if(isStop)
         {
             break;
         }
    }
    */
}

void MyThread::startTimer()
{

    qDebug()<<"Timer";
    mTimer->start(1000);
}

void MyThread::setFlag(bool flag)
{
    isStop = flag;
}

void MyThread::dealMessage()
{
    qDebug()<<"处理信息";
}

void MyThread::dealMessage(int num)
{
    qDebug()<< num;
}

void MyThread::dealTimer()
{
    static int i = 1;
    i++;
    qDebug()<<i;
}

