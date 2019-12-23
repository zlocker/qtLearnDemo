#ifndef TIMETHREAD_H
#define TIMETHREAD_H

#include <QThread>
#include <QtNetwork>
#include <QTcpSocket>

class TimeThread : public QThread
{
    Q_OBJECT
public:
    TimeThread(int socketDescriptor,QObject *parent=0);
    void run();                         //多线程执行函数需重写
signals:
    void error(QTcpSocket::SocketError socketError);//出错信号
private:
    int socketDescriptor;               //套接字描述符
};

#endif // TIMETHREAD_H
