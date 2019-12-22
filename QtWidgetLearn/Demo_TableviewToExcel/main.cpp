#include <QApplication>
#include "mainwindow.h"
//test to support Chinese
//#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // test to support Chinese
    //QTextCodec::setCodecForTr( QTextCodec::codecForName("GB18030") );
    MainWindow w;
    w.show();
    return a.exec();
}
