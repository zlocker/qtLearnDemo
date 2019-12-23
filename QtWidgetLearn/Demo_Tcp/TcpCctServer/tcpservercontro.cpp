#include "tcpservercontro.h"


TcpClientSocket::TcpClientSocket(QObject *parent)
{
    //客户端发送数据过来就会触发readyRead信号
    connect(this, &TcpClientSocket::readyRead, this, &TcpClientSocket::receivedata);
    connect(this, &TcpClientSocket::disconnected, this, &TcpClientSocket::clientdisconnected);
}


void TcpClientSocket::receivedata()
{
    Info a;
    int b = this->read((char*)&a,1024);
    qDebug()<<b;
    emit updateserver((char*)&a);
}

void TcpClientSocket::clientdisconnected()
{
    emit clientdisconnected1(this->socketDescriptor());
}




TcpServerContro::TcpServerContro(QObject *parent, int port):QTcpServer(parent)
{
    listen(QHostAddress::Any, 5050); //监听
}

void TcpServerContro::incomingConnection(int socketDescriptor)
{
    TcpClientSocket *tcpclientsocket = new TcpClientSocket(this);//只要有新的连接就生成一个新的通信套接字
    //将新创建的通信套接字描述符指定为参数socketdescriptor
    tcpclientsocket->setSocketDescriptor(socketDescriptor);

    //将这个套接字加入客户端套接字列表中
    tcpClientSocketList.append(tcpclientsocket);


    //接收到tcpClient发送过来的更新界面的信号
    connect(tcpclientsocket, &TcpClientSocket::updateserver, this, &TcpServerContro::serverReadDate);
    connect(tcpclientsocket, &TcpClientSocket::clientdisconnected1, this, &TcpServerContro::clientDisconnect);
}

void TcpServerContro::clientDisconnect(int descriptor)
{
    for(int i = 0; i < tcpClientSocketList.count(); i++)
    {
        QTcpSocket *item = tcpClientSocketList.at(i);
        if(item->socketDescriptor() == descriptor)
        {
            tcpClientSocketList.removeAt(i);//如果有客户端断开连接， 就将列表中的套接字删除
            return;
        }
    }
    return;
}

void TcpServerContro::serverReadDate(char*a)
{
    emit updateForm(a);
}

void TcpServerContro::getAllSocket()
{
    QString str;
    for(int i = 0; i < tcpClientSocketList.count(); i++)
    {
        QTcpSocket *item = tcpClientSocketList.at(i);
        str += item->peerAddress().toString();
        str.push_back("\n");
        str += QString::number(item->peerPort());
        str.push_back("\n");
    }
    emit socketListInfo(str);
}

void TcpServerContro::sendOrderInfo(char *a, QString b, QString c)
{
    QHostAddress serverIP;
    if(!serverIP.setAddress(b))//用这个函数判断IP地址是否可以被正确解析
    {
        //不能被正确解析就弹出一个警告窗口
        QMessageBox::warning((QWidget*)this->parent(), "错误", "IP地址不正确");
        return;
    }
    for(int i = 0; i < tcpClientSocketList.count(); i++)
    {
        QTcpSocket *item = tcpClientSocketList.at(i);
        if(item->peerAddress() == QHostAddress(b))
        {
            item->write(a,sizeof(Info));
            return;
        }
    }
        QMessageBox::warning((QWidget*)this->parent(), "错误", "没有此地址连接");


}
