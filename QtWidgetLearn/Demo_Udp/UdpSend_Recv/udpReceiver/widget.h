#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtNetwork>

namespace Ui {
class Widget;
}
typedef struct buffer
{
 uint sum;
 unsigned char name[10];
}Buffer;

    typedef struct CurrentDevData   //当前设备数据
    {
     unsigned char DevNum[10];      //设备编号
     unsigned char DevName[10];     //设备名称
     unsigned char DevType[10];     //设备类型
     unsigned int DevSation;        //设备工作区域
     unsigned int WorkInfo[12];     //设备工作信息
     unsigned char WarnType[20];    //故障类型
     unsigned char WorkState[10];   //设备故障状态
    }DevData;


class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
    QUdpSocket *receiver;
private slots:
    void processPendingDatagram();
    void on_pushButton_clicked();
};

#endif // WIDGET_H
