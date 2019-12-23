#include "basictransceiver.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BasicTransceiver w;
    w.show();
    return a.exec();
}
