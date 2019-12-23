#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QHostAddress>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    status = false;
    //端口为8888
    port = 8888;
    ui->lineEditServerPort->setText(QString::number(port));//界面中端口默认显示8888

    serverIP = new QHostAddress();

    //未进入聊天室内不能发送信息
    ui->pushButtonSend->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//进入聊天室
void MainWindow::on_pushButtonEnter_clicked()
{
    //首先判断这个用户是不是在聊天室中
    if(status == false)
    {
        //不在聊天室中就和服务器进行连接
        QString ip = ui->lineEditServerIp->text();//从界面获取ip地址
        if(!serverIP->setAddress(ip))//用这个函数判断IP地址是否可以被正确解析
        {
            //不能被正确解析就弹出一个警告窗口
            QMessageBox::warning(this, "错误", "IP地址不正确");
            return;
        }
        if(ui->lineEditUserName->text() == "")
        {
            //用户名不能为空
            QMessageBox::warning(this, "错误", "用户名不能为空");
            return;
        }

        //从界面获取用户名
        userName = ui->lineEditUserName->text();
        //创建一个通信套接字，用来和服务器进行通信
        tcpsocket = new QTcpSocket(this);

        //和服务器进行连接
        tcpsocket->connectToHost(*serverIP, port);

        //和服务器连接成功能会触发connected信号
        connect(tcpsocket, &QTcpSocket::connected, this, &MainWindow::slotconnectedsuccess);
        //接收到服务器的信息就会触发readyRead信号
        connect(tcpsocket, &QTcpSocket::readyRead, this, &MainWindow::slotreceive);



        //将进入聊天室的标志位置为true；
        status = true;
    }
    else//已经进入了聊天室
    {
        int length = 0;
        QString msg = userName + ":Leave Chat Room";
//        if((length = tcpsocket->write((char*)msg.toUtf8().data(), msg.length())) != msg.length())
//        {
//            return;
//        }

        tcpsocket->write(msg.toUtf8().data());
        tcpsocket->disconnectFromHost();
        status = false;
        //离开聊天室就会触发disconnected信号
        connect(tcpsocket, &QTcpSocket::disconnected, this, &MainWindow::slotdisconnected);
    }
}

//用来处理连接成功的信号
void MainWindow::slotconnectedsuccess()
{
    //进入聊天室可以发送信息了
    ui->pushButtonSend->setEnabled(true);
    //将进入聊天的按钮改为离开聊天室
    ui->pushButtonEnter->setText("离开聊天室");

    int length = 0;
    //将用户名发送给服务器
    QString msg= userName + " :Enter Chat Room";
    //定义结构体数组传递
//    Info m_info;
//    m_info.a = 5;
//    m_info.name = "你是";
//    QByteArray xiaoxi;
//    xiaoxi.append((char*)&m_info,sizeof(m_info));
//    tcpsocket->write(xiaoxi);
//    if((length = tcpsocket->write((char*)msg.toUtf8().data(), msg.length())) != msg.length())
//    {
//        return;
//    }
    qDebug()<<tcpsocket->readBufferSize();
    tcpsocket->write(msg.toUtf8().data());
}


void MainWindow::slotreceive()
{
//    while(tcpsocket->bytesAvailable() > 0 )
//    {
//        QByteArray datagram;
//        datagram.resize(tcpsocket->bytesAvailable());
//        tcpsocket->read(datagram.data(), datagram.size());
//        QString msg = datagram.data();
//        ui->textEdit->append(msg.left(datagram.size()));
//    }
    QByteArray array = tcpsocket->readAll();
    ui->textEdit->append(array);
}

void MainWindow::on_pushButtonSend_clicked()
{
    if(ui->lineEditSend->text() == "")
    {
        return;
    }
    QString msg = userName + ":" + ui->lineEditSend->text();
   // tcpsocket->write((char*)msg.toUtf8().data(), msg.length());
    tcpsocket->write(msg.toUtf8().data());
    ui->lineEditSend->clear();
}

void MainWindow::slotdisconnected()
{
    ui->pushButtonSend->setEnabled(false);
    ui->pushButtonEnter->setText("进入聊天室");
}


