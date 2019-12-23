#include "tcpclientsocket.h"

TcpClientSocket::TcpClientSocket(QObject *parent)
{
    connect(this,SIGNAL(readyRead()),this,SLOT(dataReceived()));
    connect(this,SIGNAL(disconnected(int)),this,SLOT(slotDisconnected()));
}

void TcpClientSocket::dataReceived()
{

    QByteArray array = readAll();

    QString msg = QString::fromLocal8Bit(array);
    emit updateClients(msg,array.size());

}
void TcpClientSocket::slotDisconnected()
{
    emit disconnected(this->socketDescriptor());
}

