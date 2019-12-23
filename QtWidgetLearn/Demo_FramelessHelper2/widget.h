#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMouseEvent>
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
    bool eventFilter(QObject *watched, QEvent *event);
    void resizeEvent(QResizeEvent *event);
private slots:
    void on_max_restorePBtn_clicked();
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Widget *ui;
    bool showMax;
    bool m_bPressed;
    QPoint m_point;
};

#endif // WIDGET_H
