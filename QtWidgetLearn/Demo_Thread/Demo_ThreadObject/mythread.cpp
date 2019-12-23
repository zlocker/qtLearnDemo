#include "mythread.h"
#include <QThread>
#include <QDebug>
MyThread::MyThread(QObject *parent) : QObject(parent)
{
    isstop = false;
}

void MyThread::closeThread()
{
    isstop=true;
}
 int MyThread::a = 0;
void MyThread::startThreadSlot()
{

    while (1)
    {
        if(isstop)
            break;
        a++;
        qDebug()<<"MyThread::startThreadSlot QThread::currentThreadId()=="<<QThread::currentThreadId();
//        qDebug()<<a;
        QThread::sleep(1);
    }
    qDebug()<<a;

}

void MyThread::timerWork()
{
     qDebug()<<a;
}
