#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QWidget>
#include <QTcpServer>
#include "tcpclientsocket.h"
namespace Ui {
class TcpServer;
}

class Server : public QTcpServer
{
    Q_OBJECT
public:
    Server(QObject *parent = NULL,int port = 0);
    QList<TcpClientSocket*> tcpClientSocketList;
signals:
    void updateServer(QString,int);
public slots:
    void updateClients(QString,int);
    void slotDisconnected(int);
protected:
    void incomingConnection(int socketDescriptor);
};












class TcpServer : public QWidget
{
    Q_OBJECT

public:
    explicit TcpServer(QWidget *parent = 0);
    ~TcpServer();
public slots:

    void updateServer(QString,int);
private slots:
    void on_pBtnCreate_clicked();

private:
    Ui::TcpServer *ui;
    int port;
    Server *server;
};

#endif // TCPSERVER_H
