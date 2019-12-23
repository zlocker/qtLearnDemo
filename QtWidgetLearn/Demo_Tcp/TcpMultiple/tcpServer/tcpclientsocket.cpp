#include "tcpclientsocket.h"

TcpClientSocket::TcpClientSocket(QObject *parent)
{
    //客户端发送数据过来就会触发readyRead信号
    connect(this, &TcpClientSocket::readyRead, this, &TcpClientSocket::receivedata);
    connect(this, &TcpClientSocket::disconnected, this, &TcpClientSocket::slotclientdisconnected);
}

void TcpClientSocket::receivedata()
{
//    while(bytesAvailable() > 0)
//    {
//        int length = bytesAvailable();
//        char buf[1024]; //用来存放获取的数据
//        read(buf, length);
//        QString msg = buf;
//        //发信号给界面，让界面显示登录者的信息
//        emit updateserver(msg, length);

//    }
    int length = 10;
    QByteArray array = readAll();
    qDebug()<<sizeof(array);
    QString msg = array;
    emit updateserver(msg, length);
}

void TcpClientSocket::slotclientdisconnected()
{
    emit clientdisconnected(this->socketDescriptor());
}
