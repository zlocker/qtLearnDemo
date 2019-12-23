#include "widget.h"
#include "ui_widget.h"
#include "iconhelper.h"
#define iconSize    50
#define iconWidth   100
#define iconHeight  70
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    IconHelper::Instance()->SetIcon(ui->pushButton, QChar(0xf0ca), 12);
    ui->pushButton->setToolTip("菜单栏");
    IconHelper::Instance()->SetIcon(ui->pushButton_2, QChar(0xf068), 12);
    ui->pushButton_2->setToolTip("最小化");

    QList<QString> listColorBg;
    listColorBg << "#1570A5" << "#16A085" << "#C0392B" << "#047058" << "#9B59BB" << "#34495E"<<"#082E54"<<"#00C78C";
    QList<QString> listColorText;
    listColorText << "#FEFEFE" << "#FEFEFE" << "#FEFEFE" << "#FEFEFE" << "#FEFEFE" << "#FEFEFE" << "#FEFEFE" << "#FEFEFE";

    QList<QChar> listChar;
    listChar << 0xf108 << 0xf06e << 0xf0ec << 0xf0e8 << 0xf06a <<0xf016<< 0xf1c0<<0xf085;
    QList<QString> listText;
    listText << "充电监控" << "配电监控" << "换电监控" << "邻站查询"<<"故障查询" << "工作历史" << "计费历史"<<"网络管理";


    btns << ui->toolButton << ui->toolButton_2 << ui->toolButton_3 << ui->toolButton_4
         << ui->toolButton_5 << ui->toolButton_6<<ui->toolButton_7<<ui->toolButton_8;

    for (int i = 0; i < btns.count(); i++) {

        QToolButton *btn = btns.at(i);
        btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btn->setIconSize(QSize(iconWidth, iconHeight));

        QPixmap pix = IconHelper::Instance()->getPixmap(listColorText.at(i), listChar.at(i), iconSize, iconWidth, iconHeight);
        btn->setIcon(QIcon(pix));
        btn->setText(listText.at(i));

        QStringList list;
        list.append(QString("QToolButton{font:%1px;background:%2;color:%3}").arg(iconSize / 3).arg(listColorBg.at(i)).arg(listColorText.at(i)));
        list.append(QString("QToolButton{border:none;border-radius:8px;padding:30px;}"));
        list.append(QString("QToolButton:pressed{background:%1;}").arg("#737A97"));
        btn->setStyleSheet(list.join(""));
        if(i>=0&&i<8)
        connect(btn, SIGNAL(clicked(bool)), this, SLOT(buttonClicked()));
    }
}

Widget::~Widget()
{
    delete ui;
}

void Widget::buttonClicked()
{
    QToolButton *btn = (QToolButton *)sender();
    int btnNum = btns.indexOf(btn);
    switch (btnNum) {
        case 0:
            qDebug()<<"1";
            break;
        case 1:
            qDebug()<<"2";
            break;
        case 2:
            qDebug()<<"3";
            break;
        case 3:
            qDebug()<<"4";
            break;
        case 4:
            qDebug()<<"5";
            break;
        case 5:
            qDebug()<<"6";
            break;
        case 6:
            qDebug()<<"7";
            break;
        case 7:
            qDebug()<<"8";
            break;
        default:
            break;
    }
}
