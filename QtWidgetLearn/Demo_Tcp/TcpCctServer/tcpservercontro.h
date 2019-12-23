#ifndef TCPSERVERCONTRO_H
#define TCPSERVERCONTRO_H
#include <QTcpServer>
#include <QTcpSocket>
#include <QMessageBox>
typedef struct info{
    int a;
    char name[50];
}Info;


class TcpClientSocket: public QTcpSocket
{
    Q_OBJECT
public:
    TcpClientSocket(QObject *parent = 0);
protected slots:
    void receivedata();//处理readyRead信号读取数据
    void clientdisconnected();//客户端断开连接触发disconnected信号，这个槽函数用来处理这个信号

signals:
    void updateserver(char *);//用来告诉tcpserver需要跟新界面的显示
    void clientdisconnected1(int); //告诉server有客户端断开连接
};






class TcpServerContro: public QTcpServer
{
    Q_OBJECT
public:
    TcpServerContro(QObject *parent = 0, int port = 0);
    QList<TcpClientSocket*> tcpClientSocketList;
protected:
    void incomingConnection(int socketDescriptor);
private slots:
    void clientDisconnect(int);
    void serverReadDate(char*);
    void getAllSocket();
    void sendOrderInfo(char*,QString,QString);
signals:
    void updateForm(char*);
    void socketListInfo(QString);
};

#endif // TCPSERVERCONTRO_H
