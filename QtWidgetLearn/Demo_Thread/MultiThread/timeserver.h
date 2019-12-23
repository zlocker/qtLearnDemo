#ifndef TIMESERVER_H
#define TIMESERVER_H

#include <QTcpServer>
class Dialog;                         //服务器端的声明
class TimeServer : public QTcpServer
{
    Q_OBJECT
public:
    TimeServer(QObject *parent=0);
protected:
    void incomingConnection(int socketDescriptor);//TCP有连接时被调用
private:
    Dialog *dlg;        //记录TCP服务器的父类，为窗口指针
};

#endif // TIMESERVER_H
