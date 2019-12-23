#include "tcpserver.h"
#include "ui_tcpserver.h"
#include <QHostAddress>

TcpServer::TcpServer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TcpServer),
    mTcpServer(NULL),
    mTcpSocket(NULL)
{
    ui->setupUi(this);
}

TcpServer::~TcpServer()
{
    delete ui;
}

void TcpServer::on_pushButton_clicked()
{
    mTcpServer = new QTcpServer(this);
    mTcpServer->listen(QHostAddress::Any,8888);
    connect(mTcpServer,&QTcpServer::newConnection,this,&TcpServer::slotNewConnection);
}
void TcpServer::slotNewConnection()
{
    if(mTcpSocket==NULL){
        mTcpSocket = mTcpServer->nextPendingConnection();
        mTcpSocket->write("已经连上服务器");
        connect(mTcpSocket,&QTcpSocket::readyRead,this,&TcpServer::slotReadyRead);
    }
}

void TcpServer::slotReadyRead()
{
    QByteArray byteArray=  mTcpSocket->readAll();
    ui->textEdit->append(byteArray);
}
