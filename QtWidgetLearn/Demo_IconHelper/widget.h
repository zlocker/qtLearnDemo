#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}
class QToolButton;
class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
private slots:
    void buttonClicked();
private:
    Ui::Widget *ui;
    QList<QToolButton *> btns;
};

#endif // WIDGET_H
