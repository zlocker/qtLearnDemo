#include "widget.h"
#include "ui_widget.h"
#include "mythread.h"
#include <QDebug>

MWorker *mes = new MWorker;
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    m1 = new MyThread(this);
    ui->setupUi(this);
//    connect(ui->pushButton,SIGNAL(clicked(bool)),m1,SIGNAL(operate()));
    connect(ui->pushButton,SIGNAL(clicked(bool)),m1,SLOT(Start()));

    connect(ui->pushButton_2,SIGNAL(clicked(bool)),m1,SLOT(Close()));
}

Widget::~Widget()
{
    delete ui;
    delete m1;
}
//开始
void Widget::on_pushButton_clicked()
{

}
//退出析构
void Widget::on_pushButton_2_clicked()
{

}
//暂停
void Widget::on_pushButton_3_clicked()
{
//    qDebug()<<Worker::a;
//    Worker::a +=10;
//    MWorker *A = Message::Instance();
//    A->e = "我";
//    qDebug()<< A->e;
//    mes->d +=1;
//    qDebug()<<mes->d;
//    char a[24] = "19950625 10:10:10.1234";
//    QString str = QString(a);
    uchar a = 100;
    qDebug()<<a<<sizeof(a);
}
