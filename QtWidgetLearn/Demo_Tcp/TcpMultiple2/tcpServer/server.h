#ifndef SERVER_H
#define SERVER_H

#include <QTcpServer>
#include <QObject>
#include <QList>
#include "tcpclientsocket.h"

class Server : public QTcpServer
{
    Q_OBJECT //为了实现信号和槽的通信
public:
    Server(QObject *parent = 0, int port = 0);
    QList<TcpClientSocket*> tcpclientsocketlist;
protected:
    void incomingConnection(int socketDescriptor);//只要出现一个新的连接，就会自动调用这个函数
protected slots:
    void sliotupdateserver(char *, int);//用来处理tcpclient发过来的信号
    void slotclientdisconnect(int);

signals:
    void updateserver(char*, int);//发送信号给界面，让界面更新信息

};

#endif // SERVER_H
