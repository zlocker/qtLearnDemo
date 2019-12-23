#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    port = 5050;
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    server = new TcpServerContro(this,port);
//    connect(server, &TcpServerContro::updateForm(char*),this, &Widget::displayForm(char*));
//    connect(server,&TcpServerContro::socketListInfo(QString),this,&Widget::displayForm(QString));
    connect(server,SIGNAL(updateForm(char*)),this,SLOT(displayForm(char*)));
    connect(ui->pushButton_3,SIGNAL(clicked(bool)),server,SLOT(getAllSocket()));
    connect(server,SIGNAL(socketListInfo(QString)),this,SLOT(displayForm(QString)));
    connect(this,SIGNAL(m_Order(char*,QString,QString)),server,SLOT(sendOrderInfo(char*,QString,QString)));
}

void Widget::displayForm(char *msg)
{
    Info b;
    memcpy((char*)&b,msg,sizeof(Info));
    ui->textEdit->append(QString(b.name));
    ui->textEdit->append(QString::number(b.a));
}

void Widget::displayForm(QString str)
{
    ui->textEdit->append(str);
}

void Widget::on_pushButton_2_clicked()
{
    Info b;
    b.a = ui->lineEdit_2->text().toInt();
    strcpy(b.name,ui->lineEdit->text().toUtf8().data());
    QString ip = ui->lineEdit_3->text();
    QString port = ui->lineEdit->text();
    emit m_Order((char*)&b,ip,port);

}
