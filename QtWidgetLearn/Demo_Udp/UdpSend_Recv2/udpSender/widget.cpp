#include "widget.h"
#include "ui_widget.h"
#pragma execution_character_set("utf-8")
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
    state data;
    data.order=1;
    data.speed=50;
    data.longitude=120.34;
    data.latitude=36.89;
    QString name1 = "wangda";
    QString name2 = "王达";
    strcpy(data.name,name1.toStdString().data());
    strcpy(data.name_,name2.toStdString().data());
    sender->writeDatagram((char*)&data,sizeof(data),
                                 QHostAddress::Broadcast,45454);


//    QByteArray datagram = "hello world!";
//    sender->writeDatagram(datagram.data(),datagram.size(),
//                             QHostAddress::Broadcast,45454);
}
void Widget::processPendingDatagram() //处理等待的数据报
{
    while(sender->hasPendingDatagrams())  //拥有等待的数据报
    {
        QHostAddress client_address;
        quint16 recPort = 0;
       QByteArray datagram; //拥于存放接收的数据报
//让datagram的大小为等待处理的数据报的大小，这样才能接收到完整的数据
       datagram.resize(sender->pendingDatagramSize());
       //接收数据报，将其存放到datagram中
       sender->readDatagram(datagram.data(),datagram.size(),&client_address,&recPort);
       //将数据报内容显示出来
       client_address.toIPv4Address();
       ui->label->setText(datagram);
       ui->label_2->setText(client_address.toString());
       ui->label_3->setText(QString::number(recPort));
       qDebug()<<client_address.toString()<<recPort;
    }
}
