#include "timeserver.h"
#include "timethread.h"
#include "dialog.h"

TimeServer::TimeServer(QObject *parent)
    :QTcpServer(parent)
{
    dlg =(Dialog *)parent;
}

void TimeServer::incomingConnection(int socketDescriptor)//TCP有连接时被调用
{
    TimeThread *thread = new TimeThread(socketDescriptor,0);

    connect(thread,SIGNAL(finished()),dlg,SLOT(slotShow()));   //显示连接计数
    connect(thread,SIGNAL(finished()),thread,SLOT(deleteLater()),Qt::DirectConnection);

    thread->start();
}
