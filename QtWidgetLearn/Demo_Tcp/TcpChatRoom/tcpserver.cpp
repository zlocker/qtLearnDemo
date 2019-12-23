#include "tcpserver.h"
#include "ui_tcpserver.h"

Server::Server(QObject *parent, int port)
{
    listen(QHostAddress::Any,port);
}

void Server::updateClients(QString msg, int length)
{
    emit updateServer(msg,length);
    for(int i = 0;i < tcpClientSocketList.count();i++){
        QTcpSocket *item = tcpClientSocketList.at(i);
        if(item->write(msg.toLocal8Bit(),length)!=length)
        {
            continue;
        }
    }
}

void Server::slotDisconnected(int descriptor)
{
    for(int i = 0;i < tcpClientSocketList.count();i++){
        QTcpSocket *item = tcpClientSocketList.at(i);
        if(item->socketDescriptor()==descriptor)
        {
            tcpClientSocketList.removeAt(i);
            return;
        }
    }
    return;
}

void Server::incomingConnection(int socketDescriptor)
{
    TcpClientSocket *tcpClientSocket = new TcpClientSocket(this);
    connect(tcpClientSocket,SIGNAL(updateClients(QString,int)),this,SLOT(updateClients(QString,int)));
    connect(tcpClientSocket,SIGNAL(disconnected(int)),this,SLOT(slotDisconnected(int)));
    tcpClientSocket->setSocketDescriptor(socketDescriptor);
    tcpClientSocketList.append(tcpClientSocket);
}


TcpServer::TcpServer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TcpServer)
{
    ui->setupUi(this);
    setWindowTitle("TCP服务器");
    port = 8010;
    ui->lEdtPort->setText(QString::number(port));

}

TcpServer::~TcpServer()
{
    delete ui;
}

void TcpServer::updateServer(QString msg, int length)
{
    ui->listWidget->addItem(msg);
}

void TcpServer::on_pBtnCreate_clicked()
{
    server = new Server(this,port);
    connect(server,SIGNAL(updateServer(QString,int)),this,SLOT(updateServer(QString,int)));
    ui->pBtnCreate->setEnabled(false);
}
