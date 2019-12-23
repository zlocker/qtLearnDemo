#include "tcpserver.h"
#include <QApplication>
#include "tcpclient.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TcpServer w;
    w.show();
    TcpClient f;
    f.show();
    TcpClient g;
    g.show();
    return a.exec();
}
