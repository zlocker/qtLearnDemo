#include "widget.h"
#include "ui_widget.h"
#pragma execution_character_set("utf-8")
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    receiver = new QUdpSocket(this);
    receiver->bind(45454,QUdpSocket::ShareAddress);
    connect(receiver,SIGNAL(readyRead()),
    this,SLOT(processPendingDatagram()));
}

Widget::~Widget()
{
    delete ui;
}
void Widget::processPendingDatagram() //处理等待的数据报
{
    while(receiver->hasPendingDatagrams())  //拥有等待的数据报
    {
//       QByteArray datagram; //拥于存放接收的数据报
////让datagram的大小为等待处理的数据报的大小，这样才能接收到完整的数据
//       datagram.resize(receiver->pendingDatagramSize());
//       //接收数据报，将其存放到datagram中
//       receiver->readDatagram(datagram.data(),datagram.size());
//       //将数据报内容显示出来
//       ui->label->setText(datagram);
       QHostAddress client_address;
       quint16 recPort = 0;
       state datagram;
       receiver->readDatagram((char *)&datagram,sizeof(datagram),&client_address, &recPort);
       ui->label->setText(datagram.name);
       client_address.toIPv4Address();
       QString address = client_address.toString();
        address = address.mid(7);
       ui->label_2->setText(address);
       ui->label_3->setText(QString::number(recPort));
       qDebug()<<client_address.toString()<<recPort;
//       ui->label->setText(datagram.name);
    }
}

void Widget::on_pushButton_clicked()
{
    QByteArray datagram = "hello guys!";
    receiver->writeDatagram(datagram.data(),datagram.size(),
                             QHostAddress::Broadcast,45455);
}
