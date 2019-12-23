#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
typedef struct info{
    int a;
    uchar name;
}Info;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void on_pushButtonEnter_clicked();
    void slotconnectedsuccess();//用来处理连接成功的信号
    void slotreceive();//接收服务器传过来的信息
    void on_pushButtonSend_clicked();
    void slotdisconnected();//用来处理离开聊天室的信号
private:
    Ui::MainWindow *ui;
    bool status;//用来判断是否进入了聊天室
    int port;
    QHostAddress *serverIP;
    QString userName;
    QTcpSocket *tcpsocket;
};

#endif // MAINWINDOW_H
