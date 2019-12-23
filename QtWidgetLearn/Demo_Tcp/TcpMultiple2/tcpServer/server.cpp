#include "server.h"
#include <QHostAddress>

Server::Server(QObject *parent, int port):QTcpServer(parent)
{
    listen(QHostAddress::Any, port); //监听
}

void Server::incomingConnection(int socketDescriptor)
{
    TcpClientSocket *tcpclientsocket = new TcpClientSocket(this);//只要有新的连接就生成一个新的通信套接字
    //将新创建的通信套接字描述符指定为参数socketdescriptor
    tcpclientsocket->setSocketDescriptor(socketDescriptor);

    //将这个套接字加入客户端套接字列表中
    tcpclientsocketlist.append(tcpclientsocket);


    //接收到tcpclientsocket发送过来的更新界面的信号
    connect(tcpclientsocket, &TcpClientSocket::updateserver, this, &Server::sliotupdateserver);
    connect(tcpclientsocket, &TcpClientSocket::clientdisconnected, this, &Server::slotclientdisconnect);

}

void Server::sliotupdateserver(char* msg, int length)
{
    //将这个信号发送给界面
    emit updateserver(msg, length);

    //将收到的信息发送给每个客户端,从套接字列表中找到需要接收的套接字
    for(int i = 0; i < tcpclientsocketlist.count(); i++)
    {
        QTcpSocket *item = tcpclientsocketlist.at(i);
//        if(item->write((char*)msg.toUtf8().data(), length) != length)
//        {
//            continue;
//        }
        item->write(msg,sizeof(Info));
    }

}

void Server::slotclientdisconnect(int descriptor)
{
    for(int i = 0; i < tcpclientsocketlist.count(); i++)
    {
        QTcpSocket *item = tcpclientsocketlist.at(i);
        if(item->socketDescriptor() == descriptor)
        {
            tcpclientsocketlist.removeAt(i);//如果有客户端断开连接， 就将列表中的套接字删除
            return;
        }
    }
    return;
}
