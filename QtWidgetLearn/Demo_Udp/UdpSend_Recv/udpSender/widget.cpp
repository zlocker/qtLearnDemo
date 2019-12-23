#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    sender = new QUdpSocket(this);
    sender->bind(45455,QUdpSocket::ShareAddress);
    connect(sender,SIGNAL(readyRead()),
    this,SLOT(processPendingDatagram()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    QByteArray datagram = "hello world!";
    sender->writeDatagram(datagram.data(),datagram.size(),
                             QHostAddress::Broadcast,45454);
}
void Widget::processPendingDatagram() //处理等待的数据报
{
    while(sender->hasPendingDatagrams())  //拥有等待的数据报
    {
       QByteArray datagram; //拥于存放接收的数据报
//让datagram的大小为等待处理的数据报的大小，这样才能接收到完整的数据
       datagram.resize(sender->pendingDatagramSize());
       //接收数据报，将其存放到datagram中
       sender->readDatagram(datagram.data(),datagram.size());
       Buffer Dev[10];
       memcpy(Dev,datagram.data(),datagram.size());
       //将数据报内容显示出来
       char* a = (char*)Dev[8].name;
       ui->label->setText(QString(a));
    }
}
