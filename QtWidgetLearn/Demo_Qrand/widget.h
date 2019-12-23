#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
private slots:
    void updateValue();
    void on_pushButton_3_clicked();

private:
    Ui::Widget *ui;
    int s;
    uint u;
    QTimer *timer;
};

#endif // WIDGET_H
