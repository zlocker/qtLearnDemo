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

private slots:
    void on_pushButton_clicked();
    void processPendingDatagram();

private:
    Ui::Widget *ui;
    QUdpSocket *sender;
};

#endif // WIDGET_H
