#include "tcpclient.h"
#include "ui_tcpclient.h"
#include <QHostAddress>

TcpClient::TcpClient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TcpClient)
{
    ui->setupUi(this);
}

TcpClient::~TcpClient()
{
    delete ui;
}

void TcpClient::on_pushButton_clicked()
{
    QString msg = ui->lineEdit->text();
    mTcpSocket->write(msg.toUtf8());
    ui->lineEdit->clear();
}

void TcpClient::on_pushButton_2_clicked()
{
    mTcpSocket = new QTcpSocket(this);
    mTcpSocket->connectToHost(QHostAddress("127.0.0.1"),8888);
    connect(mTcpSocket,&QTcpSocket::readyRead,this,&TcpClient::slotReadyRead);
}

void TcpClient::slotReadyRead()
{
    QByteArray byteArray = mTcpSocket->readAll();
    ui->textEdit->append(byteArray);
}
