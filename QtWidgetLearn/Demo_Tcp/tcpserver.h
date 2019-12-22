#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>
namespace Ui {
class TcpServer;
}

class TcpServer : public QWidget
{
    Q_OBJECT

public:
    explicit TcpServer(QWidget *parent = 0);
    ~TcpServer();

private slots:
    void on_pushButton_clicked();
    void slotNewConnection();
    void slotReadyRead();
private:
    Ui::TcpServer *ui;
    QTcpServer *mTcpServer;
    QTcpSocket *mTcpSocket;
};

#endif // TCPSERVER_H
