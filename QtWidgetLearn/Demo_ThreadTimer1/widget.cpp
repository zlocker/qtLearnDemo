#include "widget.h"
#include "ui_widget.h"
#include "mythread.h"
#include <QDebug>
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
    qDebug()<<Worker::a;
    Worker::a +=10;
}
