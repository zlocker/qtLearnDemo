#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtNetwork>
typedef struct buffer
{
 uint sum;
 unsigned char name[10];
}Buffer;
namespace Ui {
class Widget;
}

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
