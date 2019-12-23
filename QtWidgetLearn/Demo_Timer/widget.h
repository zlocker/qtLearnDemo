#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

protected:
    void timerEvent(QTimerEvent *event);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
    void rgbColor();
private:
    Ui::Widget *ui;
    QTimer m_timer;     //方式1
    int timerID;        //方式2
};

#endif // WIDGET_H
