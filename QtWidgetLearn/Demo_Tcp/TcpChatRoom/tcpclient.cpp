#include "tcpclient.h"
#include "ui_tcpclient.h"
#include <QMessageBox>
#include <QHostInfo>

TcpClient::TcpClient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TcpClient)
{
    ui->setupUi(this);
    status = false;
    port = 8010;
    ui->lEdtPort->setText(QString::number(port));
    serverIP = new QHostAddress();
    connect(ui->pBtnEnter,&QPushButton::clicked,this,&TcpClient::slotEnter);
    connect(ui->pBtnSend,&QPushButton::clicked,this,&TcpClient::slotSend);
    ui->pBtnSend->setEnabled(false);
}

TcpClient::~TcpClient()
{
    delete ui;
}

void TcpClient::slotEnter()
{
    if(!status){
        QString ip = ui->lEdtAddress->text();
        if(!serverIP->setAddress(ip)){
            QMessageBox::information(this,"error","服务器IP错误");
            return;
        }
        if(ui->lEdtUserName->text()==""){
            QMessageBox::information(this,"error","用户名错误");
            return;
        }
        userName = ui->lEdtUserName->text();
        tcpSocket = new QTcpSocket(this);
        connect(tcpSocket,&QTcpSocket::connected,this,&TcpClient::slotConnected);
        connect(tcpSocket,&QTcpSocket::disconnected,this,&TcpClient::slotDisconnected);
        connect(tcpSocket,&QTcpSocket::readyRead,this,&TcpClient::dataReceived);
        tcpSocket->connectToHost(*serverIP,port);
        status = true;
        ui->pBtnEnter->setText("离开");
    }
    else{
        int length = 0;
        QString msg = userName+"leave Chat Room";
        tcpSocket->write(msg.toLocal8Bit());
        tcpSocket->disconnectFromHost();
        status = false;
    }
}

void TcpClient::slotConnected()
{
    ui->pBtnSend->setEnabled(true);
    ui->pBtnEnter->setText("离开");
    QString msg = userName + ":Enter Chat Room";
    tcpSocket->write(msg.toLocal8Bit());

}

void TcpClient::slotDisconnected()
{
    ui->pBtnSend->setEnabled(false);
    ui->pBtnEnter->setText("进入聊天室");
}

void TcpClient::dataReceived()
{
    QByteArray array;
    array =  tcpSocket->readAll();
    QString msg = QString::fromLocal8Bit(array.data());
    ui->textEdit->append(msg);
}

void TcpClient::slotSend()
{
    if(ui->lEdtMsg->text()==""){
        return;
    }
    QString msg = userName+":"+ui->lEdtMsg->text();
    tcpSocket->write(msg.toLocal8Bit());
    ui->lEdtMsg->clear();
}
