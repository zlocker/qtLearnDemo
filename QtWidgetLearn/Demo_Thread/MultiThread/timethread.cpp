#include "timethread.h"
#include <QDateTime>
#include <QByteArray>
#include <QDataStream>

TimeThread::TimeThread(int socketDescriptor,QObject *parent)
    :QThread(parent),socketDescriptor(socketDescriptor)
{
}

void TimeThread::run()
{
    QTcpSocket tcpSocket;                                   //创建QTcpSocket
    if(!tcpSocket.setSocketDescriptor(socketDescriptor))    //将以上创建的QTCpSocket从构造函数中传入套接字描述符
    {
        emit error(tcpSocket.error());      //出错发送error信号
        return;
    }
    QByteArray block;
    QDataStream out(&block,QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_3);

    uint time2u = QDateTime::currentDateTime().toTime_t();
    out<<time2u;

    tcpSocket.write(block);             //发送数据
    tcpSocket.disconnectFromHost();     //断开连接
    tcpSocket.waitForDisconnected();    //等待返回
}
