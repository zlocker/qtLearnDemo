#include "tcpserver.h"
#include "tcpclient.h"
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TcpServer w;
    w.show();

    TcpClient c;
    c.show();

    return a.exec();
}
