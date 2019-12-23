#include "widget.h"
#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

//    QWidget w;
//    w.setWindowTitle("武汉理工大学");
//    QPushButton pushButton("你好",&w);
//    QObject::connect(&pushButton,&QPushButton::clicked,&a,&QApplication::quit);
//    QLabel label("Hello World!",&w);


//    QHBoxLayout *hLayout = new QHBoxLayout;
//    hLayout->addWidget(&pushButton);
//    hLayout->addWidget(&label);
//    w.setLayout(hLayout);

//    QVBoxLayout *vLayout = new QVBoxLayout;
//    vLayout->addWidget(&pushButton);
//    vLayout->addWidget(&label);

//    QPushButton pushButton1("同学",&w);
//    QLabel label1("Qt",&w);
//    QVBoxLayout *vLayout1 = new QVBoxLayout;
//    vLayout1->addWidget(&pushButton1);
//    vLayout1->addWidget(&label1);

//    QHBoxLayout *hLayout1 = new QHBoxLayout;
//    hLayout1->addLayout(vLayout);
//    hLayout1->addLayout(vLayout1);
//    w.setLayout(hLayout1);
//    w.show();
    return a.exec();
}
