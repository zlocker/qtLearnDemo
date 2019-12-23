#include "widget.h"
#include "ui_widget.h"
#include "QDebug"
//float转int
int float_to_int(float f){
    int i;
    float ferror;
    i=(int)f;
    ferror=f-(float)i;
    if(fabs(ferror)<0.99){ //有“1误差”，校正
        if(f<0)	 i++;
    }
    else i--;
    return(i);
}



Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QString pattern("(192\.168\.137\.)([1-2]{0-2}+)([0-9]{1})");

    QRegExp rx1("(192.168.137.)([0-9]{0,3})");
    QRegExp rx(pattern);
    bool match=rx.exactMatch("192.168.137.825");
     bool match1=rx1.exactMatch("192.168.137.180");
//    	/^([a-z0-9_\.-]+)@([\da-z\.-]+)\.([a-z\.]{2,6})$/
    qDebug()<<match<<match1;
    float a = 17.1;
    uint b = float_to_int(a*10)%256;
    qDebug()<<b;

}

Widget::~Widget()
{
    delete ui;
}
