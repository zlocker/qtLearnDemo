#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include "qdatetime.h"
#include "qtimer.h"
typedef struct SAFE_ISLAND
{
    int     num;                    //安全岛编号
    char    StationID[24];          //站情况
    bool    IsServe;                //是否具备工作条件
    char    VehicleID[24];          //车辆ID(有--车牌号，无--0)
    bool    CarPrepare;              //车辆就位情况
    bool    IsPrepare;              //是否准备就绪(综合情况，由安全人员进行调控0--不可进行工作1--可下达换电指令)

}SAFE_ISLAND;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    SAFE_ISLAND a[5];
    SAFE_ISLAND *b = new SAFE_ISLAND[6];
     SAFE_ISLAND *c = new SAFE_ISLAND;
     QTime t = QTime::currentTime();
     qsrand(t.msec() + t.second() * 1000);

     timer = new QTimer(this);
     timer->setInterval(2000);
     connect(timer, SIGNAL(timeout()), this, SLOT(updateValue()));
     updateValue();

      s = 0xff;
      u = 0xff;

//    qDebug()<<a.num<<a.CarPrepare<<a.IsPrepare<<a.IsServe<<a.VehicleID<<a.StationID;
//    QString str = "00015301";
//    int x = 0x00015301;
//    uchar b = x;
//    char s[4];
//    itoa(x,s,8);
//    char c[4];
//    memcpy(c,str.toLocal8Bit().data(),sizeof(c));
    qDebug()<<sizeof(a)<<sizeof(b)<<sizeof(c);
        ui->waveBar->setValue(15);
}
void Widget::updateValue()
{
    u = u^(1<<2);
    ui->waveBar->setValue(qrand() % 100);
    ui->curveChart->addData(qrand() % 100);
    s = s^ (1<<2);
    qDebug()<< u<<s;
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_3_clicked()
{
    timer->start();
}
