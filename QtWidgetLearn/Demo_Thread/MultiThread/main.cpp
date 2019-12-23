#include "timeclient.h"
#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TimeClient w1;
    w1.show();
    TimeClient w2;
    w2.show();
    Dialog b;
    b.show();

    return a.exec();
}
