#include "widget.h"
#include "ui_widget.h"
#include "frameless_helper.h"       //可使无边框可拖动
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);  //无边框不可拖动
    FramelessHelper *pHelper = new FramelessHelper(this);
    pHelper->activateOn(this);  //激活当前窗体
    pHelper->setTitleHeight(ui->titleWidget->height());  //设置窗体的标题栏高度
    pHelper->setWidgetMovable(true);  //设置窗体可移动
    pHelper->setWidgetResizable(true);  //设置窗体可缩放
    pHelper->setRubberBandOnMove(true);  //设置橡皮筋效果-可移动
    pHelper->setRubberBandOnResize(true);  //设置橡皮筋效果-可缩放

    ui->titleWidget->installEventFilter(this);
    showMax = false;
}

Widget::~Widget()
{
    delete ui;
}

bool Widget::eventFilter(QObject *watched, QEvent *event)
{
    if(watched==ui->titleWidget)
    {
        if(event->type()==QMouseEvent::MouseButtonPress)
        {
            QMouseEvent *mouseEvent=(QMouseEvent*)event;
            if(mouseEvent->button()==Qt::LeftButton)
            {
                m_bPressed = true;
                m_point = mouseEvent->pos();
            }
        }
        else if(event->type()==QEvent::MouseMove)
        {
            QMouseEvent *mouseEvent=(QMouseEvent*)event;
            if (m_bPressed)
                move(mouseEvent->pos() - m_point + pos());
        }
        else if(event->type()==QEvent::MouseButtonRelease)
        {
            QMouseEvent *mouseEvent=(QMouseEvent*)event;
            Q_UNUSED(mouseEvent);
            m_bPressed = false;
        }
        else if(event->type()==QEvent::MouseButtonDblClick)
        {
            this->on_max_restorePBtn_clicked();
        }
        return true;
    }
    return QWidget::eventFilter(watched, event);
}

void Widget::resizeEvent(QResizeEvent *event)
{


}

void Widget::on_max_restorePBtn_clicked()
{
    QWidget *curWindow = this->window();
    if(!showMax){
        curWindow->showMaximized();
        ui->pushButton_2->setToolTip("最大化");
        showMax = true;
    }
    else{
        curWindow->showNormal();
        ui->pushButton_2->setToolTip("还原");
        showMax = false;
    }
}

void Widget::on_pushButton_clicked()
{
    QWidget *curWindow = this->window();
    curWindow->showMinimized();
}

void Widget::on_pushButton_4_clicked()
{
    this->close();
}
