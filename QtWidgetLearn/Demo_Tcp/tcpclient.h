#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QWidget>
#include <QTcpSocket>
namespace Ui {
class TcpClient;
}

class TcpClient : public QWidget
{
    Q_OBJECT

public:
    explicit TcpClient(QWidget *parent = 0);
    ~TcpClient();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void slotReadyRead();

private:
    Ui::TcpClient *ui;
    QTcpSocket *mTcpSocket;
};

#endif // TCPCLIENT_H
