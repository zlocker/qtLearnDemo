#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtNetwork>

namespace Ui {
class Widget;
}
#pragma pack(1)
struct state{
    int order;
    int speed;
    double longitude;
    double latitude;
    char name[10];
    char name_[10];

};

#pragma pack()
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
