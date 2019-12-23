/********************************************************************************
** Form generated from reading UI file 'basictransceiver.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASICTRANSCEIVER_H
#define UI_BASICTRANSCEIVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BasicTransceiver
{
public:
    QAction *SPSAction;
    QAction *actionWrite_data;
    QAction *aboutAction;
    QAction *actionRead_data;
    QAction *actionChoose_file;
    QAction *actionExit;
    QAction *actionAbout;
    QAction *exitAction;
    QAction *actionAlways_show;
    QWidget *centralWin;
    QTextBrowser *receiveTextBrowser;
    QGroupBox *senderGB_1;
    QGridLayout *gridLayout;
    QHBoxLayout *SBLayout_1;
    QRadioButton *hexRB_1;
    QRadioButton *chrRB_1;
    QCheckBox *autoSendCB_1;
    QLabel *intervalLabel_1;
    QSpinBox *intervalSB_1;
    QPushButton *sendButton_1;
    QTextEdit *senderTextEdit_1;
    QGroupBox *senderGB_2;
    QGridLayout *gridLayout_2;
    QPushButton *sendButton_2;
    QHBoxLayout *SBLayout_2;
    QRadioButton *hexRB_2;
    QRadioButton *chrRB_2;
    QCheckBox *autoSendCB_2;
    QLabel *intervalLabel_2;
    QSpinBox *intervalSB_2;
    QTextEdit *senderTextEdit_2;
    QGroupBox *senderGB_4;
    QGridLayout *gridLayout_4;
    QHBoxLayout *SBLayout_4;
    QRadioButton *hexRB_4;
    QRadioButton *chrRB_4;
    QCheckBox *autoSendCB_4;
    QLabel *intervalLabel_4;
    QSpinBox *intervalSB_4;
    QPushButton *sendButton_4;
    QTextEdit *senderTextEdit_4;
    QGroupBox *senderGB_3;
    QGridLayout *gridLayout_3;
    QHBoxLayout *SBLayout_3;
    QRadioButton *hexRB_3;
    QRadioButton *chrRB_3;
    QCheckBox *autoSendCB_3;
    QLabel *intervalLabel_3;
    QSpinBox *intervalSB_3;
    QPushButton *sendButton_3;
    QTextEdit *senderTextEdit_3;
    QGroupBox *senderGB_5;
    QGridLayout *gridLayout_5;
    QPushButton *sendButton_5;
    QHBoxLayout *SBLayout_5;
    QRadioButton *hexRB_5;
    QRadioButton *chrRB_5;
    QCheckBox *autoSendCB_5;
    QLabel *intervalLabel_5;
    QSpinBox *intervalSB_5;
    QTextEdit *senderTextEdit_5;
    QGroupBox *bottomGB;
    QHBoxLayout *bottomLayout;
    QLabel *comLabel;
    QLabel *baudLabel;
    QSpacerItem *spacer;
    QPushButton *exitButton;
    QGroupBox *groupBox;
    QRadioButton *hexReceive;
    QRadioButton *chrReceive;
    QLCDNumber *TxLCD;
    QLCDNumber *RxLCD;
    QLabel *RxLabel;
    QLabel *TxLabel;
    QCheckBox *autoClean;
    QGroupBox *PortSettingsGB;
    QComboBox *FlowCtrlCB;
    QLabel *FlowCtrlLabel;
    QLabel *StopBitsLabel;
    QComboBox *DataBitsCB;
    QComboBox *StopBitsCB;
    QLabel *DataBitsLabel;
    QLabel *ParityLabel;
    QComboBox *ParityCB;
    QComboBox *BAUDCB;
    QLabel *BaudLabel;
    QLabel *COMLabel;
    QComboBox *COMCB;
    QGroupBox *someButtonGB;
    QPushButton *resetCntButton;
    QPushButton *cleanButton;
    QPushButton *connectButton;
    QPushButton *checkAPButton;
    QMenuBar *menubar;
    QMenu *menu_About;
    QMenu *menu_File;
    QMenu *menu_Options;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BasicTransceiver)
    {
        if (BasicTransceiver->objectName().isEmpty())
            BasicTransceiver->setObjectName(QStringLiteral("BasicTransceiver"));
        BasicTransceiver->resize(1074, 627);
        BasicTransceiver->setMinimumSize(QSize(1074, 627));
        BasicTransceiver->setMaximumSize(QSize(1074, 627));
        QIcon icon;
        icon.addFile(QStringLiteral("images/win.png"), QSize(), QIcon::Normal, QIcon::Off);
        BasicTransceiver->setWindowIcon(icon);
        SPSAction = new QAction(BasicTransceiver);
        SPSAction->setObjectName(QStringLiteral("SPSAction"));
        actionWrite_data = new QAction(BasicTransceiver);
        actionWrite_data->setObjectName(QStringLiteral("actionWrite_data"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("images/write.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWrite_data->setIcon(icon1);
        aboutAction = new QAction(BasicTransceiver);
        aboutAction->setObjectName(QStringLiteral("aboutAction"));
        actionRead_data = new QAction(BasicTransceiver);
        actionRead_data->setObjectName(QStringLiteral("actionRead_data"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("images/read.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRead_data->setIcon(icon2);
        actionChoose_file = new QAction(BasicTransceiver);
        actionChoose_file->setObjectName(QStringLiteral("actionChoose_file"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("images/select_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionChoose_file->setIcon(icon3);
        actionExit = new QAction(BasicTransceiver);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon4);
        actionAbout = new QAction(BasicTransceiver);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("images/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon5);
        exitAction = new QAction(BasicTransceiver);
        exitAction->setObjectName(QStringLiteral("exitAction"));
        exitAction->setIcon(icon4);
        actionAlways_show = new QAction(BasicTransceiver);
        actionAlways_show->setObjectName(QStringLiteral("actionAlways_show"));
        actionAlways_show->setCheckable(true);
        actionAlways_show->setChecked(true);
        centralWin = new QWidget(BasicTransceiver);
        centralWin->setObjectName(QStringLiteral("centralWin"));
        receiveTextBrowser = new QTextBrowser(centralWin);
        receiveTextBrowser->setObjectName(QStringLiteral("receiveTextBrowser"));
        receiveTextBrowser->setGeometry(QRect(140, 0, 571, 521));
        receiveTextBrowser->setBaseSize(QSize(750, 640));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(9);
        receiveTextBrowser->setFont(font);
        receiveTextBrowser->setContextMenuPolicy(Qt::NoContextMenu);
        receiveTextBrowser->setMidLineWidth(0);
        receiveTextBrowser->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        senderGB_1 = new QGroupBox(centralWin);
        senderGB_1->setObjectName(QStringLiteral("senderGB_1"));
        senderGB_1->setGeometry(QRect(710, 0, 360, 105));
        senderGB_1->setMinimumSize(QSize(360, 105));
        senderGB_1->setMaximumSize(QSize(360, 105));
        gridLayout = new QGridLayout(senderGB_1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        SBLayout_1 = new QHBoxLayout();
        SBLayout_1->setObjectName(QStringLiteral("SBLayout_1"));
        hexRB_1 = new QRadioButton(senderGB_1);
        hexRB_1->setObjectName(QStringLiteral("hexRB_1"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        hexRB_1->setFont(font1);
        hexRB_1->setChecked(true);

        SBLayout_1->addWidget(hexRB_1);

        chrRB_1 = new QRadioButton(senderGB_1);
        chrRB_1->setObjectName(QStringLiteral("chrRB_1"));
        chrRB_1->setFont(font1);
        chrRB_1->setChecked(false);

        SBLayout_1->addWidget(chrRB_1);

        autoSendCB_1 = new QCheckBox(senderGB_1);
        autoSendCB_1->setObjectName(QStringLiteral("autoSendCB_1"));
        autoSendCB_1->setEnabled(false);

        SBLayout_1->addWidget(autoSendCB_1);

        intervalLabel_1 = new QLabel(senderGB_1);
        intervalLabel_1->setObjectName(QStringLiteral("intervalLabel_1"));

        SBLayout_1->addWidget(intervalLabel_1);

        intervalSB_1 = new QSpinBox(senderGB_1);
        intervalSB_1->setObjectName(QStringLiteral("intervalSB_1"));
        intervalSB_1->setMinimumSize(QSize(53, 20));
        intervalSB_1->setMaximumSize(QSize(53, 20));
        intervalSB_1->setMinimum(1);
        intervalSB_1->setMaximum(10000);
        intervalSB_1->setValue(100);

        SBLayout_1->addWidget(intervalSB_1);


        gridLayout->addLayout(SBLayout_1, 2, 0, 1, 1);

        sendButton_1 = new QPushButton(senderGB_1);
        sendButton_1->setObjectName(QStringLiteral("sendButton_1"));
        sendButton_1->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QStringLiteral("images/send.png"), QSize(), QIcon::Normal, QIcon::Off);
        sendButton_1->setIcon(icon6);

        gridLayout->addWidget(sendButton_1, 2, 1, 1, 1);

        senderTextEdit_1 = new QTextEdit(senderGB_1);
        senderTextEdit_1->setObjectName(QStringLiteral("senderTextEdit_1"));
        senderTextEdit_1->setMinimumSize(QSize(340, 44));
        senderTextEdit_1->setMaximumSize(QSize(340, 44));

        gridLayout->addWidget(senderTextEdit_1, 0, 0, 1, 1);

        senderGB_2 = new QGroupBox(centralWin);
        senderGB_2->setObjectName(QStringLiteral("senderGB_2"));
        senderGB_2->setGeometry(QRect(710, 104, 360, 105));
        senderGB_2->setMinimumSize(QSize(360, 105));
        senderGB_2->setMaximumSize(QSize(360, 105));
        gridLayout_2 = new QGridLayout(senderGB_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        sendButton_2 = new QPushButton(senderGB_2);
        sendButton_2->setObjectName(QStringLiteral("sendButton_2"));
        sendButton_2->setEnabled(false);
        sendButton_2->setIcon(icon6);

        gridLayout_2->addWidget(sendButton_2, 1, 1, 1, 1);

        SBLayout_2 = new QHBoxLayout();
        SBLayout_2->setObjectName(QStringLiteral("SBLayout_2"));
        hexRB_2 = new QRadioButton(senderGB_2);
        hexRB_2->setObjectName(QStringLiteral("hexRB_2"));
        hexRB_2->setFont(font1);
        hexRB_2->setChecked(true);

        SBLayout_2->addWidget(hexRB_2);

        chrRB_2 = new QRadioButton(senderGB_2);
        chrRB_2->setObjectName(QStringLiteral("chrRB_2"));
        chrRB_2->setFont(font1);
        chrRB_2->setChecked(false);

        SBLayout_2->addWidget(chrRB_2);

        autoSendCB_2 = new QCheckBox(senderGB_2);
        autoSendCB_2->setObjectName(QStringLiteral("autoSendCB_2"));
        autoSendCB_2->setEnabled(false);

        SBLayout_2->addWidget(autoSendCB_2);

        intervalLabel_2 = new QLabel(senderGB_2);
        intervalLabel_2->setObjectName(QStringLiteral("intervalLabel_2"));

        SBLayout_2->addWidget(intervalLabel_2);

        intervalSB_2 = new QSpinBox(senderGB_2);
        intervalSB_2->setObjectName(QStringLiteral("intervalSB_2"));
        intervalSB_2->setMinimumSize(QSize(53, 20));
        intervalSB_2->setMaximumSize(QSize(53, 20));
        intervalSB_2->setMinimum(1);
        intervalSB_2->setMaximum(10000);
        intervalSB_2->setValue(100);

        SBLayout_2->addWidget(intervalSB_2);


        gridLayout_2->addLayout(SBLayout_2, 1, 0, 1, 1);

        senderTextEdit_2 = new QTextEdit(senderGB_2);
        senderTextEdit_2->setObjectName(QStringLiteral("senderTextEdit_2"));
        senderTextEdit_2->setMinimumSize(QSize(340, 44));
        senderTextEdit_2->setMaximumSize(QSize(340, 44));

        gridLayout_2->addWidget(senderTextEdit_2, 0, 0, 1, 1);

        senderGB_4 = new QGroupBox(centralWin);
        senderGB_4->setObjectName(QStringLiteral("senderGB_4"));
        senderGB_4->setGeometry(QRect(710, 313, 360, 105));
        senderGB_4->setMinimumSize(QSize(360, 105));
        senderGB_4->setMaximumSize(QSize(360, 105));
        gridLayout_4 = new QGridLayout(senderGB_4);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        SBLayout_4 = new QHBoxLayout();
        SBLayout_4->setObjectName(QStringLiteral("SBLayout_4"));
        hexRB_4 = new QRadioButton(senderGB_4);
        hexRB_4->setObjectName(QStringLiteral("hexRB_4"));
        hexRB_4->setMinimumSize(QSize(41, 16));
        hexRB_4->setMaximumSize(QSize(41, 16));
        hexRB_4->setFont(font1);
        hexRB_4->setChecked(true);

        SBLayout_4->addWidget(hexRB_4);

        chrRB_4 = new QRadioButton(senderGB_4);
        chrRB_4->setObjectName(QStringLiteral("chrRB_4"));
        chrRB_4->setMinimumSize(QSize(41, 16));
        chrRB_4->setMaximumSize(QSize(41, 16));
        chrRB_4->setFont(font1);
        chrRB_4->setChecked(false);

        SBLayout_4->addWidget(chrRB_4);

        autoSendCB_4 = new QCheckBox(senderGB_4);
        autoSendCB_4->setObjectName(QStringLiteral("autoSendCB_4"));
        autoSendCB_4->setEnabled(false);
        autoSendCB_4->setMaximumSize(QSize(71, 16));

        SBLayout_4->addWidget(autoSendCB_4);

        intervalLabel_4 = new QLabel(senderGB_4);
        intervalLabel_4->setObjectName(QStringLiteral("intervalLabel_4"));
        intervalLabel_4->setMinimumSize(QSize(24, 21));
        intervalLabel_4->setMaximumSize(QSize(24, 21));

        SBLayout_4->addWidget(intervalLabel_4);

        intervalSB_4 = new QSpinBox(senderGB_4);
        intervalSB_4->setObjectName(QStringLiteral("intervalSB_4"));
        intervalSB_4->setMinimumSize(QSize(53, 20));
        intervalSB_4->setMaximumSize(QSize(53, 20));
        intervalSB_4->setMinimum(1);
        intervalSB_4->setMaximum(10000);
        intervalSB_4->setValue(100);

        SBLayout_4->addWidget(intervalSB_4);


        gridLayout_4->addLayout(SBLayout_4, 1, 0, 1, 1);

        sendButton_4 = new QPushButton(senderGB_4);
        sendButton_4->setObjectName(QStringLiteral("sendButton_4"));
        sendButton_4->setEnabled(false);
        sendButton_4->setIcon(icon6);

        gridLayout_4->addWidget(sendButton_4, 1, 1, 1, 1);

        senderTextEdit_4 = new QTextEdit(senderGB_4);
        senderTextEdit_4->setObjectName(QStringLiteral("senderTextEdit_4"));
        senderTextEdit_4->setMinimumSize(QSize(340, 44));
        senderTextEdit_4->setMaximumSize(QSize(340, 44));

        gridLayout_4->addWidget(senderTextEdit_4, 0, 0, 1, 1);

        senderGB_3 = new QGroupBox(centralWin);
        senderGB_3->setObjectName(QStringLiteral("senderGB_3"));
        senderGB_3->setGeometry(QRect(710, 208, 360, 105));
        senderGB_3->setMinimumSize(QSize(360, 105));
        senderGB_3->setMaximumSize(QSize(360, 105));
        gridLayout_3 = new QGridLayout(senderGB_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        SBLayout_3 = new QHBoxLayout();
        SBLayout_3->setObjectName(QStringLiteral("SBLayout_3"));
        hexRB_3 = new QRadioButton(senderGB_3);
        hexRB_3->setObjectName(QStringLiteral("hexRB_3"));
        hexRB_3->setFont(font1);
        hexRB_3->setChecked(true);

        SBLayout_3->addWidget(hexRB_3);

        chrRB_3 = new QRadioButton(senderGB_3);
        chrRB_3->setObjectName(QStringLiteral("chrRB_3"));
        chrRB_3->setFont(font1);
        chrRB_3->setChecked(false);

        SBLayout_3->addWidget(chrRB_3);

        autoSendCB_3 = new QCheckBox(senderGB_3);
        autoSendCB_3->setObjectName(QStringLiteral("autoSendCB_3"));
        autoSendCB_3->setEnabled(false);

        SBLayout_3->addWidget(autoSendCB_3);

        intervalLabel_3 = new QLabel(senderGB_3);
        intervalLabel_3->setObjectName(QStringLiteral("intervalLabel_3"));

        SBLayout_3->addWidget(intervalLabel_3);

        intervalSB_3 = new QSpinBox(senderGB_3);
        intervalSB_3->setObjectName(QStringLiteral("intervalSB_3"));
        intervalSB_3->setMinimumSize(QSize(53, 20));
        intervalSB_3->setMaximumSize(QSize(53, 20));
        intervalSB_3->setMinimum(1);
        intervalSB_3->setMaximum(10000);
        intervalSB_3->setValue(100);

        SBLayout_3->addWidget(intervalSB_3);


        gridLayout_3->addLayout(SBLayout_3, 1, 0, 1, 1);

        sendButton_3 = new QPushButton(senderGB_3);
        sendButton_3->setObjectName(QStringLiteral("sendButton_3"));
        sendButton_3->setEnabled(false);
        sendButton_3->setIcon(icon6);

        gridLayout_3->addWidget(sendButton_3, 1, 1, 1, 1);

        senderTextEdit_3 = new QTextEdit(senderGB_3);
        senderTextEdit_3->setObjectName(QStringLiteral("senderTextEdit_3"));
        senderTextEdit_3->setMinimumSize(QSize(340, 44));
        senderTextEdit_3->setMaximumSize(QSize(340, 44));

        gridLayout_3->addWidget(senderTextEdit_3, 0, 0, 1, 1);

        senderGB_5 = new QGroupBox(centralWin);
        senderGB_5->setObjectName(QStringLiteral("senderGB_5"));
        senderGB_5->setGeometry(QRect(710, 417, 360, 105));
        senderGB_5->setMinimumSize(QSize(360, 105));
        senderGB_5->setMaximumSize(QSize(360, 105));
        gridLayout_5 = new QGridLayout(senderGB_5);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        sendButton_5 = new QPushButton(senderGB_5);
        sendButton_5->setObjectName(QStringLiteral("sendButton_5"));
        sendButton_5->setEnabled(false);
        sendButton_5->setIcon(icon6);

        gridLayout_5->addWidget(sendButton_5, 1, 1, 1, 1);

        SBLayout_5 = new QHBoxLayout();
        SBLayout_5->setObjectName(QStringLiteral("SBLayout_5"));
        hexRB_5 = new QRadioButton(senderGB_5);
        hexRB_5->setObjectName(QStringLiteral("hexRB_5"));
        hexRB_5->setFont(font1);
        hexRB_5->setChecked(true);

        SBLayout_5->addWidget(hexRB_5);

        chrRB_5 = new QRadioButton(senderGB_5);
        chrRB_5->setObjectName(QStringLiteral("chrRB_5"));
        chrRB_5->setFont(font1);
        chrRB_5->setChecked(false);

        SBLayout_5->addWidget(chrRB_5);

        autoSendCB_5 = new QCheckBox(senderGB_5);
        autoSendCB_5->setObjectName(QStringLiteral("autoSendCB_5"));
        autoSendCB_5->setEnabled(false);

        SBLayout_5->addWidget(autoSendCB_5);

        intervalLabel_5 = new QLabel(senderGB_5);
        intervalLabel_5->setObjectName(QStringLiteral("intervalLabel_5"));

        SBLayout_5->addWidget(intervalLabel_5);

        intervalSB_5 = new QSpinBox(senderGB_5);
        intervalSB_5->setObjectName(QStringLiteral("intervalSB_5"));
        intervalSB_5->setMinimumSize(QSize(53, 20));
        intervalSB_5->setMaximumSize(QSize(53, 20));
        intervalSB_5->setMinimum(1);
        intervalSB_5->setMaximum(10000);
        intervalSB_5->setValue(100);

        SBLayout_5->addWidget(intervalSB_5);


        gridLayout_5->addLayout(SBLayout_5, 1, 0, 1, 1);

        senderTextEdit_5 = new QTextEdit(senderGB_5);
        senderTextEdit_5->setObjectName(QStringLiteral("senderTextEdit_5"));
        senderTextEdit_5->setMinimumSize(QSize(340, 44));
        senderTextEdit_5->setMaximumSize(QSize(340, 44));

        gridLayout_5->addWidget(senderTextEdit_5, 0, 0, 1, 1);

        bottomGB = new QGroupBox(centralWin);
        bottomGB->setObjectName(QStringLiteral("bottomGB"));
        bottomGB->setEnabled(true);
        bottomGB->setGeometry(QRect(710, 530, 361, 51));
        bottomGB->setMaximumSize(QSize(476, 51));
        bottomGB->setLayoutDirection(Qt::LeftToRight);
        bottomGB->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        bottomLayout = new QHBoxLayout(bottomGB);
        bottomLayout->setObjectName(QStringLiteral("bottomLayout"));
        comLabel = new QLabel(bottomGB);
        comLabel->setObjectName(QStringLiteral("comLabel"));
        comLabel->setMinimumSize(QSize(64, 29));
        comLabel->setMaximumSize(QSize(64, 29));
        comLabel->setBaseSize(QSize(64, 0));
        comLabel->setFont(font1);
        comLabel->setFrameShape(QFrame::StyledPanel);
        comLabel->setFrameShadow(QFrame::Sunken);

        bottomLayout->addWidget(comLabel);

        baudLabel = new QLabel(bottomGB);
        baudLabel->setObjectName(QStringLiteral("baudLabel"));
        baudLabel->setMinimumSize(QSize(64, 29));
        baudLabel->setMaximumSize(QSize(64, 29));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setWeight(50);
        baudLabel->setFont(font2);
        baudLabel->setFrameShape(QFrame::StyledPanel);
        baudLabel->setFrameShadow(QFrame::Sunken);
        baudLabel->setTextFormat(Qt::PlainText);

        bottomLayout->addWidget(baudLabel);

        spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        bottomLayout->addItem(spacer);

        exitButton = new QPushButton(bottomGB);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setMinimumSize(QSize(111, 29));
        exitButton->setMaximumSize(QSize(111, 29));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(12);
        exitButton->setFont(font3);
        exitButton->setIcon(icon4);

        bottomLayout->addWidget(exitButton);

        groupBox = new QGroupBox(centralWin);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(140, 530, 571, 51));
        groupBox->setMaximumSize(QSize(617, 51));
        QFont font4;
        font4.setFamily(QStringLiteral("Adobe Arabic"));
        font4.setPointSize(9);
        groupBox->setFont(font4);
        hexReceive = new QRadioButton(groupBox);
        hexReceive->setObjectName(QStringLiteral("hexReceive"));
        hexReceive->setGeometry(QRect(10, 11, 71, 31));
        hexReceive->setFont(font);
        hexReceive->setChecked(true);
        chrReceive = new QRadioButton(groupBox);
        chrReceive->setObjectName(QStringLiteral("chrReceive"));
        chrReceive->setGeometry(QRect(90, 11, 71, 31));
        chrReceive->setFont(font);
        chrReceive->setChecked(false);
        TxLCD = new QLCDNumber(groupBox);
        TxLCD->setObjectName(QStringLiteral("TxLCD"));
        TxLCD->setGeometry(QRect(290, 11, 121, 31));
        RxLCD = new QLCDNumber(groupBox);
        RxLCD->setObjectName(QStringLiteral("RxLCD"));
        RxLCD->setGeometry(QRect(440, 11, 121, 31));
        RxLabel = new QLabel(groupBox);
        RxLabel->setObjectName(QStringLiteral("RxLabel"));
        RxLabel->setGeometry(QRect(270, 11, 31, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font5.setPointSize(10);
        RxLabel->setFont(font5);
        TxLabel = new QLabel(groupBox);
        TxLabel->setObjectName(QStringLiteral("TxLabel"));
        TxLabel->setGeometry(QRect(420, 11, 31, 31));
        TxLabel->setFont(font5);
        autoClean = new QCheckBox(groupBox);
        autoClean->setObjectName(QStringLiteral("autoClean"));
        autoClean->setGeometry(QRect(170, 11, 101, 31));
        autoClean->setFont(font1);
        autoClean->setChecked(true);
        PortSettingsGB = new QGroupBox(centralWin);
        PortSettingsGB->setObjectName(QStringLiteral("PortSettingsGB"));
        PortSettingsGB->setGeometry(QRect(0, 0, 131, 391));
        PortSettingsGB->setFont(font1);
        FlowCtrlCB = new QComboBox(PortSettingsGB);
        FlowCtrlCB->setObjectName(QStringLiteral("FlowCtrlCB"));
        FlowCtrlCB->setGeometry(QRect(10, 350, 111, 21));
        FlowCtrlLabel = new QLabel(PortSettingsGB);
        FlowCtrlLabel->setObjectName(QStringLiteral("FlowCtrlLabel"));
        FlowCtrlLabel->setGeometry(QRect(10, 320, 54, 21));
        FlowCtrlLabel->setFont(font3);
        StopBitsLabel = new QLabel(PortSettingsGB);
        StopBitsLabel->setObjectName(QStringLiteral("StopBitsLabel"));
        StopBitsLabel->setGeometry(QRect(10, 260, 54, 21));
        StopBitsLabel->setFont(font3);
        DataBitsCB = new QComboBox(PortSettingsGB);
        DataBitsCB->setObjectName(QStringLiteral("DataBitsCB"));
        DataBitsCB->setGeometry(QRect(10, 230, 111, 21));
        StopBitsCB = new QComboBox(PortSettingsGB);
        StopBitsCB->setObjectName(QStringLiteral("StopBitsCB"));
        StopBitsCB->setGeometry(QRect(10, 290, 111, 21));
        DataBitsLabel = new QLabel(PortSettingsGB);
        DataBitsLabel->setObjectName(QStringLiteral("DataBitsLabel"));
        DataBitsLabel->setGeometry(QRect(10, 200, 54, 21));
        DataBitsLabel->setFont(font3);
        ParityLabel = new QLabel(PortSettingsGB);
        ParityLabel->setObjectName(QStringLiteral("ParityLabel"));
        ParityLabel->setGeometry(QRect(10, 140, 54, 21));
        ParityLabel->setFont(font3);
        ParityCB = new QComboBox(PortSettingsGB);
        ParityCB->setObjectName(QStringLiteral("ParityCB"));
        ParityCB->setGeometry(QRect(10, 170, 111, 21));
        BAUDCB = new QComboBox(PortSettingsGB);
        BAUDCB->setObjectName(QStringLiteral("BAUDCB"));
        BAUDCB->setGeometry(QRect(10, 110, 111, 21));
        BaudLabel = new QLabel(PortSettingsGB);
        BaudLabel->setObjectName(QStringLiteral("BaudLabel"));
        BaudLabel->setGeometry(QRect(10, 80, 54, 21));
        BaudLabel->setFont(font3);
        COMLabel = new QLabel(PortSettingsGB);
        COMLabel->setObjectName(QStringLiteral("COMLabel"));
        COMLabel->setGeometry(QRect(10, 20, 54, 21));
        COMLabel->setFont(font3);
        COMCB = new QComboBox(PortSettingsGB);
        COMCB->setObjectName(QStringLiteral("COMCB"));
        COMCB->setGeometry(QRect(10, 50, 111, 21));
        someButtonGB = new QGroupBox(centralWin);
        someButtonGB->setObjectName(QStringLiteral("someButtonGB"));
        someButtonGB->setGeometry(QRect(0, 399, 131, 181));
        resetCntButton = new QPushButton(someButtonGB);
        resetCntButton->setObjectName(QStringLiteral("resetCntButton"));
        resetCntButton->setGeometry(QRect(10, 60, 111, 29));
        resetCntButton->setFont(font3);
        QIcon icon7;
        icon7.addFile(QStringLiteral("images/to_zero.png"), QSize(), QIcon::Normal, QIcon::Off);
        resetCntButton->setIcon(icon7);
        cleanButton = new QPushButton(someButtonGB);
        cleanButton->setObjectName(QStringLiteral("cleanButton"));
        cleanButton->setGeometry(QRect(10, 100, 111, 29));
        cleanButton->setMinimumSize(QSize(111, 29));
        cleanButton->setMaximumSize(QSize(111, 29));
        cleanButton->setFont(font3);
        QIcon icon8;
        icon8.addFile(QStringLiteral("images/clean.png"), QSize(), QIcon::Normal, QIcon::Off);
        cleanButton->setIcon(icon8);
        connectButton = new QPushButton(someButtonGB);
        connectButton->setObjectName(QStringLiteral("connectButton"));
        connectButton->setGeometry(QRect(10, 140, 111, 29));
        connectButton->setMinimumSize(QSize(111, 29));
        connectButton->setMaximumSize(QSize(111, 29));
        connectButton->setBaseSize(QSize(92, 29));
        connectButton->setFont(font3);
        QIcon icon9;
        icon9.addFile(QStringLiteral("images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        connectButton->setIcon(icon9);
        connectButton->setCheckable(true);
        checkAPButton = new QPushButton(someButtonGB);
        checkAPButton->setObjectName(QStringLiteral("checkAPButton"));
        checkAPButton->setGeometry(QRect(10, 20, 111, 29));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font6.setPointSize(8);
        checkAPButton->setFont(font6);
        QIcon icon10;
        icon10.addFile(QStringLiteral("images/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        checkAPButton->setIcon(icon10);
        BasicTransceiver->setCentralWidget(centralWin);
        PortSettingsGB->raise();
        bottomGB->raise();
        receiveTextBrowser->raise();
        senderGB_1->raise();
        senderGB_2->raise();
        senderGB_4->raise();
        senderGB_3->raise();
        senderGB_5->raise();
        groupBox->raise();
        someButtonGB->raise();
        menubar = new QMenuBar(BasicTransceiver);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1074, 23));
        menu_About = new QMenu(menubar);
        menu_About->setObjectName(QStringLiteral("menu_About"));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menu_Options = new QMenu(menubar);
        menu_Options->setObjectName(QStringLiteral("menu_Options"));
        BasicTransceiver->setMenuBar(menubar);
        statusbar = new QStatusBar(BasicTransceiver);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        BasicTransceiver->setStatusBar(statusbar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Options->menuAction());
        menubar->addAction(menu_About->menuAction());
        menu_About->addAction(actionAbout);
        menu_File->addAction(actionWrite_data);
        menu_File->addAction(actionRead_data);
        menu_File->addAction(actionChoose_file);
        menu_File->addSeparator();
        menu_File->addAction(exitAction);
        menu_Options->addAction(actionAlways_show);

        retranslateUi(BasicTransceiver);

        QMetaObject::connectSlotsByName(BasicTransceiver);
    } // setupUi

    void retranslateUi(QMainWindow *BasicTransceiver)
    {
        BasicTransceiver->setWindowTitle(QApplication::translate("BasicTransceiver", "BasicTransceiver", 0));
        SPSAction->setText(QApplication::translate("BasicTransceiver", "Serial Port Setting", 0));
        actionWrite_data->setText(QApplication::translate("BasicTransceiver", "Save data", 0));
        actionWrite_data->setShortcut(QApplication::translate("BasicTransceiver", "Ctrl+S", 0));
        aboutAction->setText(QApplication::translate("BasicTransceiver", "&About", 0));
        actionRead_data->setText(QApplication::translate("BasicTransceiver", "Read data", 0));
        actionRead_data->setShortcut(QApplication::translate("BasicTransceiver", "Ctrl+R", 0));
        actionChoose_file->setText(QApplication::translate("BasicTransceiver", "&Choose file", 0));
        actionChoose_file->setShortcut(QApplication::translate("BasicTransceiver", "Ctrl+C", 0));
        actionExit->setText(QApplication::translate("BasicTransceiver", "&Exit", 0));
        actionExit->setShortcut(QApplication::translate("BasicTransceiver", "Ctrl+E", 0));
        actionAbout->setText(QApplication::translate("BasicTransceiver", "About", 0));
        exitAction->setText(QApplication::translate("BasicTransceiver", "Exit", 0));
#ifndef QT_NO_STATUSTIP
        exitAction->setStatusTip(QApplication::translate("BasicTransceiver", "Exit the application", 0));
#endif // QT_NO_STATUSTIP
        exitAction->setShortcut(QApplication::translate("BasicTransceiver", "Ctrl+Q", 0));
        actionAlways_show->setText(QApplication::translate("BasicTransceiver", "Always show ", 0));
        actionAlways_show->setIconText(QApplication::translate("BasicTransceiver", "Always show", 0));
        senderGB_1->setTitle(QApplication::translate("BasicTransceiver", "sender1", 0));
        hexRB_1->setText(QApplication::translate("BasicTransceiver", "Hex", 0));
        chrRB_1->setText(QApplication::translate("BasicTransceiver", "Chr", 0));
        autoSendCB_1->setText(QApplication::translate("BasicTransceiver", "\350\207\252\345\212\250\345\217\221\351\200\201", 0));
        intervalLabel_1->setText(QApplication::translate("BasicTransceiver", "\351\227\264\351\232\224", 0));
#ifndef QT_NO_STATUSTIP
        sendButton_1->setStatusTip(QApplication::translate("BasicTransceiver", "send", 0));
#endif // QT_NO_STATUSTIP
        sendButton_1->setText(QApplication::translate("BasicTransceiver", "\345\217\221\351\200\201", 0));
        senderGB_2->setTitle(QApplication::translate("BasicTransceiver", "sender2", 0));
#ifndef QT_NO_STATUSTIP
        sendButton_2->setStatusTip(QApplication::translate("BasicTransceiver", "send", 0));
#endif // QT_NO_STATUSTIP
        sendButton_2->setText(QApplication::translate("BasicTransceiver", "\345\217\221\351\200\201", 0));
        hexRB_2->setText(QApplication::translate("BasicTransceiver", "Hex", 0));
        chrRB_2->setText(QApplication::translate("BasicTransceiver", "Chr", 0));
        autoSendCB_2->setText(QApplication::translate("BasicTransceiver", "\350\207\252\345\212\250\345\217\221\351\200\201", 0));
        intervalLabel_2->setText(QApplication::translate("BasicTransceiver", "\351\227\264\351\232\224", 0));
        senderGB_4->setTitle(QApplication::translate("BasicTransceiver", "sender4", 0));
        hexRB_4->setText(QApplication::translate("BasicTransceiver", "Hex", 0));
        chrRB_4->setText(QApplication::translate("BasicTransceiver", "Chr", 0));
        autoSendCB_4->setText(QApplication::translate("BasicTransceiver", "\350\207\252\345\212\250\345\217\221\351\200\201", 0));
        intervalLabel_4->setText(QApplication::translate("BasicTransceiver", "\351\227\264\351\232\224", 0));
#ifndef QT_NO_STATUSTIP
        sendButton_4->setStatusTip(QApplication::translate("BasicTransceiver", "send", 0));
#endif // QT_NO_STATUSTIP
        sendButton_4->setText(QApplication::translate("BasicTransceiver", "\345\217\221\351\200\201", 0));
        senderGB_3->setTitle(QApplication::translate("BasicTransceiver", "sender3", 0));
        hexRB_3->setText(QApplication::translate("BasicTransceiver", "Hex", 0));
        chrRB_3->setText(QApplication::translate("BasicTransceiver", "Chr", 0));
        autoSendCB_3->setText(QApplication::translate("BasicTransceiver", "\350\207\252\345\212\250\345\217\221\351\200\201", 0));
        intervalLabel_3->setText(QApplication::translate("BasicTransceiver", "\351\227\264\351\232\224", 0));
#ifndef QT_NO_STATUSTIP
        sendButton_3->setStatusTip(QApplication::translate("BasicTransceiver", "send", 0));
#endif // QT_NO_STATUSTIP
        sendButton_3->setText(QApplication::translate("BasicTransceiver", "\345\217\221\351\200\201", 0));
        senderGB_5->setTitle(QApplication::translate("BasicTransceiver", "sender5", 0));
#ifndef QT_NO_STATUSTIP
        sendButton_5->setStatusTip(QApplication::translate("BasicTransceiver", "send ", 0));
#endif // QT_NO_STATUSTIP
        sendButton_5->setText(QApplication::translate("BasicTransceiver", "\345\217\221\351\200\201", 0));
        hexRB_5->setText(QApplication::translate("BasicTransceiver", "Hex", 0));
        chrRB_5->setText(QApplication::translate("BasicTransceiver", "Chr", 0));
        autoSendCB_5->setText(QApplication::translate("BasicTransceiver", "\350\207\252\345\212\250\345\217\221\351\200\201", 0));
        intervalLabel_5->setText(QApplication::translate("BasicTransceiver", "\351\227\264\351\232\224", 0));
        bottomGB->setTitle(QString());
        comLabel->setText(QApplication::translate("BasicTransceiver", "COM\357\274\232#", 0));
        baudLabel->setText(QApplication::translate("BasicTransceiver", "BOUD\357\274\232#", 0));
#ifndef QT_NO_STATUSTIP
        exitButton->setStatusTip(QApplication::translate("BasicTransceiver", "Exit the application", 0));
#endif // QT_NO_STATUSTIP
        exitButton->setText(QApplication::translate("BasicTransceiver", "\351\200\200\345\207\272\347\250\213\345\272\217", 0));
        groupBox->setTitle(QApplication::translate("BasicTransceiver", "\346\216\245\346\224\266\350\256\276\347\275\256", 0));
        hexReceive->setText(QApplication::translate("BasicTransceiver", "Hex\346\240\274\345\274\217", 0));
        chrReceive->setText(QApplication::translate("BasicTransceiver", "Chr\346\240\274\345\274\217", 0));
        RxLabel->setText(QApplication::translate("BasicTransceiver", "Rx:", 0));
        TxLabel->setText(QApplication::translate("BasicTransceiver", "Tx:", 0));
        autoClean->setText(QApplication::translate("BasicTransceiver", "\350\207\252\345\212\250\346\270\205\347\251\272", 0));
        PortSettingsGB->setTitle(QApplication::translate("BasicTransceiver", "\344\270\262\345\217\243\350\256\276\347\275\256", 0));
        FlowCtrlCB->clear();
        FlowCtrlCB->insertItems(0, QStringList()
         << QApplication::translate("BasicTransceiver", "off", 0)
         << QApplication::translate("BasicTransceiver", "hardware", 0)
         << QApplication::translate("BasicTransceiver", "xonxoff", 0)
        );
#ifndef QT_NO_STATUSTIP
        FlowCtrlCB->setStatusTip(QApplication::translate("BasicTransceiver", "Select flowctrl", 0));
#endif // QT_NO_STATUSTIP
        FlowCtrlLabel->setText(QApplication::translate("BasicTransceiver", "\346\265\201\346\216\247\345\210\266", 0));
        StopBitsLabel->setText(QApplication::translate("BasicTransceiver", "\345\201\234\346\255\242\344\275\215", 0));
        DataBitsCB->clear();
        DataBitsCB->insertItems(0, QStringList()
         << QApplication::translate("BasicTransceiver", "8", 0)
         << QApplication::translate("BasicTransceiver", "7", 0)
         << QApplication::translate("BasicTransceiver", "6", 0)
         << QApplication::translate("BasicTransceiver", "5", 0)
        );
#ifndef QT_NO_STATUSTIP
        DataBitsCB->setStatusTip(QApplication::translate("BasicTransceiver", "Select databits", 0));
#endif // QT_NO_STATUSTIP
        StopBitsCB->clear();
        StopBitsCB->insertItems(0, QStringList()
         << QApplication::translate("BasicTransceiver", "1", 0)
         << QApplication::translate("BasicTransceiver", "1.5", 0)
         << QApplication::translate("BasicTransceiver", "2", 0)
        );
#ifndef QT_NO_STATUSTIP
        StopBitsCB->setStatusTip(QApplication::translate("BasicTransceiver", "Select stopbits", 0));
#endif // QT_NO_STATUSTIP
        DataBitsLabel->setText(QApplication::translate("BasicTransceiver", "\346\225\260\346\215\256\344\275\215", 0));
        ParityLabel->setText(QApplication::translate("BasicTransceiver", "\346\240\241\351\252\214\344\275\215", 0));
        ParityCB->clear();
        ParityCB->insertItems(0, QStringList()
         << QApplication::translate("BasicTransceiver", "\346\227\240\346\240\241\351\252\214", 0)
         << QApplication::translate("BasicTransceiver", "\345\245\207\346\240\241\351\252\214", 0)
         << QApplication::translate("BasicTransceiver", "\345\201\266\346\240\241\351\252\214", 0)
        );
#ifndef QT_NO_STATUSTIP
        ParityCB->setStatusTip(QApplication::translate("BasicTransceiver", "Select parity", 0));
#endif // QT_NO_STATUSTIP
        BAUDCB->clear();
        BAUDCB->insertItems(0, QStringList()
         << QApplication::translate("BasicTransceiver", "115200", 0)
         << QApplication::translate("BasicTransceiver", "57600", 0)
         << QApplication::translate("BasicTransceiver", "38400", 0)
         << QApplication::translate("BasicTransceiver", "19200", 0)
         << QApplication::translate("BasicTransceiver", "9600", 0)
         << QApplication::translate("BasicTransceiver", "4800", 0)
         << QApplication::translate("BasicTransceiver", "2400", 0)
         << QApplication::translate("BasicTransceiver", "1200", 0)
        );
#ifndef QT_NO_STATUSTIP
        BAUDCB->setStatusTip(QApplication::translate("BasicTransceiver", "Select baudrate", 0));
#endif // QT_NO_STATUSTIP
        BaudLabel->setText(QApplication::translate("BasicTransceiver", "\346\263\242\347\211\271\347\216\207", 0));
        COMLabel->setText(QApplication::translate("BasicTransceiver", "\347\253\257\345\217\243\345\217\267", 0));
        COMCB->clear();
        COMCB->insertItems(0, QStringList()
         << QApplication::translate("BasicTransceiver", "COM0", 0)
         << QApplication::translate("BasicTransceiver", "COM1", 0)
         << QApplication::translate("BasicTransceiver", "COM2", 0)
         << QApplication::translate("BasicTransceiver", "COM3", 0)
         << QApplication::translate("BasicTransceiver", "COM4", 0)
         << QApplication::translate("BasicTransceiver", "COM5", 0)
         << QApplication::translate("BasicTransceiver", "COM6", 0)
         << QApplication::translate("BasicTransceiver", "COM7", 0)
         << QApplication::translate("BasicTransceiver", "COM8", 0)
         << QApplication::translate("BasicTransceiver", "COM9", 0)
         << QApplication::translate("BasicTransceiver", "COM10", 0)
         << QApplication::translate("BasicTransceiver", "COM11", 0)
         << QApplication::translate("BasicTransceiver", "COM12", 0)
         << QApplication::translate("BasicTransceiver", "COM13", 0)
         << QApplication::translate("BasicTransceiver", "COM14", 0)
         << QApplication::translate("BasicTransceiver", "COM15", 0)
         << QApplication::translate("BasicTransceiver", "COM16", 0)
         << QApplication::translate("BasicTransceiver", "COM17", 0)
         << QApplication::translate("BasicTransceiver", "COM18", 0)
         << QApplication::translate("BasicTransceiver", "COM19", 0)
         << QApplication::translate("BasicTransceiver", "COM20", 0)
         << QApplication::translate("BasicTransceiver", "COM21", 0)
         << QApplication::translate("BasicTransceiver", "COM22", 0)
         << QApplication::translate("BasicTransceiver", "COM23", 0)
         << QApplication::translate("BasicTransceiver", "COM24", 0)
         << QApplication::translate("BasicTransceiver", "COM25", 0)
         << QApplication::translate("BasicTransceiver", "COM26", 0)
         << QApplication::translate("BasicTransceiver", "COM27", 0)
         << QApplication::translate("BasicTransceiver", "COM28", 0)
         << QApplication::translate("BasicTransceiver", "COM29", 0)
         << QApplication::translate("BasicTransceiver", "COM30", 0)
         << QApplication::translate("BasicTransceiver", "COM31", 0)
         << QApplication::translate("BasicTransceiver", "COM32", 0)
         << QApplication::translate("BasicTransceiver", "COM33", 0)
         << QApplication::translate("BasicTransceiver", "COM34", 0)
         << QApplication::translate("BasicTransceiver", "COM35", 0)
         << QApplication::translate("BasicTransceiver", "COM36", 0)
         << QApplication::translate("BasicTransceiver", "COM37", 0)
         << QApplication::translate("BasicTransceiver", "COM38", 0)
         << QApplication::translate("BasicTransceiver", "COM39", 0)
         << QApplication::translate("BasicTransceiver", "COM40", 0)
         << QApplication::translate("BasicTransceiver", "COM41", 0)
         << QApplication::translate("BasicTransceiver", "COM42", 0)
         << QApplication::translate("BasicTransceiver", "COM43", 0)
         << QApplication::translate("BasicTransceiver", "COM44", 0)
         << QApplication::translate("BasicTransceiver", "COM45", 0)
         << QApplication::translate("BasicTransceiver", "COM46", 0)
         << QApplication::translate("BasicTransceiver", "COM47", 0)
         << QApplication::translate("BasicTransceiver", "COM48", 0)
         << QApplication::translate("BasicTransceiver", "COM49", 0)
         << QApplication::translate("BasicTransceiver", "COM50", 0)
         << QApplication::translate("BasicTransceiver", "COM51", 0)
         << QApplication::translate("BasicTransceiver", "COM52", 0)
         << QApplication::translate("BasicTransceiver", "COM53", 0)
         << QApplication::translate("BasicTransceiver", "COM54", 0)
         << QApplication::translate("BasicTransceiver", "COM55", 0)
         << QApplication::translate("BasicTransceiver", "COM56", 0)
         << QApplication::translate("BasicTransceiver", "COM57", 0)
         << QApplication::translate("BasicTransceiver", "COM58", 0)
         << QApplication::translate("BasicTransceiver", "COM59", 0)
         << QApplication::translate("BasicTransceiver", "COM60", 0)
         << QApplication::translate("BasicTransceiver", "COM61", 0)
         << QApplication::translate("BasicTransceiver", "COM62", 0)
         << QApplication::translate("BasicTransceiver", "COM63", 0)
         << QApplication::translate("BasicTransceiver", "COM64", 0)
         << QApplication::translate("BasicTransceiver", "COM65", 0)
         << QApplication::translate("BasicTransceiver", "COM66", 0)
         << QApplication::translate("BasicTransceiver", "COM67", 0)
         << QApplication::translate("BasicTransceiver", "COM68", 0)
         << QApplication::translate("BasicTransceiver", "COM69", 0)
         << QApplication::translate("BasicTransceiver", "COM70", 0)
         << QApplication::translate("BasicTransceiver", "COM71", 0)
         << QApplication::translate("BasicTransceiver", "COM72", 0)
         << QApplication::translate("BasicTransceiver", "COM73", 0)
         << QApplication::translate("BasicTransceiver", "COM74", 0)
         << QApplication::translate("BasicTransceiver", "COM75", 0)
         << QApplication::translate("BasicTransceiver", "COM76", 0)
         << QApplication::translate("BasicTransceiver", "COM77", 0)
         << QApplication::translate("BasicTransceiver", "COM78", 0)
         << QApplication::translate("BasicTransceiver", "COM79", 0)
         << QApplication::translate("BasicTransceiver", "COM80", 0)
         << QApplication::translate("BasicTransceiver", "COM81", 0)
         << QApplication::translate("BasicTransceiver", "COM82", 0)
         << QApplication::translate("BasicTransceiver", "COM83", 0)
         << QApplication::translate("BasicTransceiver", "COM84", 0)
         << QApplication::translate("BasicTransceiver", "COM85", 0)
         << QApplication::translate("BasicTransceiver", "COM86", 0)
         << QApplication::translate("BasicTransceiver", "COM87", 0)
         << QApplication::translate("BasicTransceiver", "COM88", 0)
         << QApplication::translate("BasicTransceiver", "COM89", 0)
         << QApplication::translate("BasicTransceiver", "COM90", 0)
         << QApplication::translate("BasicTransceiver", "COM91", 0)
         << QApplication::translate("BasicTransceiver", "COM92", 0)
         << QApplication::translate("BasicTransceiver", "COM93", 0)
         << QApplication::translate("BasicTransceiver", "COM93", 0)
         << QApplication::translate("BasicTransceiver", "COM95", 0)
         << QApplication::translate("BasicTransceiver", "COM96", 0)
         << QApplication::translate("BasicTransceiver", "COM97", 0)
         << QApplication::translate("BasicTransceiver", "COM98", 0)
         << QApplication::translate("BasicTransceiver", "COM99", 0)
         << QApplication::translate("BasicTransceiver", "COM100", 0)
         << QApplication::translate("BasicTransceiver", "COM101", 0)
         << QApplication::translate("BasicTransceiver", "COM102", 0)
         << QApplication::translate("BasicTransceiver", "COM103", 0)
         << QApplication::translate("BasicTransceiver", "COM104", 0)
         << QApplication::translate("BasicTransceiver", "COM105", 0)
         << QApplication::translate("BasicTransceiver", "COM106", 0)
         << QApplication::translate("BasicTransceiver", "COM107", 0)
         << QApplication::translate("BasicTransceiver", "COM108", 0)
         << QApplication::translate("BasicTransceiver", "COM109", 0)
         << QApplication::translate("BasicTransceiver", "COM110", 0)
         << QApplication::translate("BasicTransceiver", "COM111", 0)
         << QApplication::translate("BasicTransceiver", "COM112", 0)
         << QApplication::translate("BasicTransceiver", "COM113", 0)
         << QApplication::translate("BasicTransceiver", "COM114", 0)
         << QApplication::translate("BasicTransceiver", "COM115", 0)
         << QApplication::translate("BasicTransceiver", "COM116", 0)
         << QApplication::translate("BasicTransceiver", "COM116", 0)
         << QApplication::translate("BasicTransceiver", "COM117", 0)
         << QApplication::translate("BasicTransceiver", "COM118", 0)
         << QApplication::translate("BasicTransceiver", "COM119", 0)
         << QApplication::translate("BasicTransceiver", "COM120", 0)
         << QApplication::translate("BasicTransceiver", "COM121", 0)
         << QApplication::translate("BasicTransceiver", "COM122", 0)
         << QApplication::translate("BasicTransceiver", "COM123", 0)
         << QApplication::translate("BasicTransceiver", "COM124", 0)
         << QApplication::translate("BasicTransceiver", "COM125", 0)
         << QApplication::translate("BasicTransceiver", "COM126", 0)
         << QApplication::translate("BasicTransceiver", "COM127", 0)
         << QApplication::translate("BasicTransceiver", "COM128", 0)
         << QApplication::translate("BasicTransceiver", "COM129", 0)
         << QApplication::translate("BasicTransceiver", "COM130", 0)
         << QApplication::translate("BasicTransceiver", "COM131", 0)
         << QApplication::translate("BasicTransceiver", "COM132", 0)
         << QApplication::translate("BasicTransceiver", "COM133", 0)
         << QApplication::translate("BasicTransceiver", "COM134", 0)
         << QApplication::translate("BasicTransceiver", "COM135", 0)
         << QApplication::translate("BasicTransceiver", "COM136", 0)
         << QApplication::translate("BasicTransceiver", "COM137", 0)
         << QApplication::translate("BasicTransceiver", "COM138", 0)
         << QApplication::translate("BasicTransceiver", "COM139", 0)
         << QApplication::translate("BasicTransceiver", "COM140", 0)
         << QApplication::translate("BasicTransceiver", "COM141", 0)
         << QApplication::translate("BasicTransceiver", "COM142", 0)
         << QApplication::translate("BasicTransceiver", "COM143", 0)
         << QApplication::translate("BasicTransceiver", "COM144", 0)
         << QApplication::translate("BasicTransceiver", "COM145", 0)
         << QApplication::translate("BasicTransceiver", "COM146", 0)
         << QApplication::translate("BasicTransceiver", "COM147", 0)
         << QApplication::translate("BasicTransceiver", "COM148", 0)
         << QApplication::translate("BasicTransceiver", "COM149", 0)
         << QApplication::translate("BasicTransceiver", "COM150", 0)
         << QApplication::translate("BasicTransceiver", "COM151", 0)
         << QApplication::translate("BasicTransceiver", "COM152", 0)
         << QApplication::translate("BasicTransceiver", "COM153", 0)
         << QApplication::translate("BasicTransceiver", "COM154", 0)
         << QApplication::translate("BasicTransceiver", "COM155", 0)
         << QApplication::translate("BasicTransceiver", "COM156", 0)
         << QApplication::translate("BasicTransceiver", "COM157", 0)
         << QApplication::translate("BasicTransceiver", "COM158", 0)
         << QApplication::translate("BasicTransceiver", "COM159", 0)
         << QApplication::translate("BasicTransceiver", "COM160", 0)
         << QApplication::translate("BasicTransceiver", "COM161", 0)
         << QApplication::translate("BasicTransceiver", "COM162", 0)
         << QApplication::translate("BasicTransceiver", "COM163", 0)
         << QApplication::translate("BasicTransceiver", "COM164", 0)
         << QApplication::translate("BasicTransceiver", "COM165", 0)
         << QApplication::translate("BasicTransceiver", "COM166", 0)
         << QApplication::translate("BasicTransceiver", "COM167", 0)
         << QApplication::translate("BasicTransceiver", "COM168", 0)
         << QApplication::translate("BasicTransceiver", "COM169", 0)
         << QApplication::translate("BasicTransceiver", "COM170", 0)
         << QApplication::translate("BasicTransceiver", "COM171", 0)
         << QApplication::translate("BasicTransceiver", "COM172", 0)
         << QApplication::translate("BasicTransceiver", "COM173", 0)
         << QApplication::translate("BasicTransceiver", "COM174", 0)
         << QApplication::translate("BasicTransceiver", "COM175", 0)
         << QApplication::translate("BasicTransceiver", "COM176", 0)
         << QApplication::translate("BasicTransceiver", "COM177", 0)
         << QApplication::translate("BasicTransceiver", "COM178", 0)
         << QApplication::translate("BasicTransceiver", "COM179", 0)
         << QApplication::translate("BasicTransceiver", "COM180", 0)
         << QApplication::translate("BasicTransceiver", "COM181", 0)
         << QApplication::translate("BasicTransceiver", "COM182", 0)
         << QApplication::translate("BasicTransceiver", "COM183", 0)
         << QApplication::translate("BasicTransceiver", "COM185", 0)
         << QApplication::translate("BasicTransceiver", "COM186", 0)
         << QApplication::translate("BasicTransceiver", "COM187", 0)
         << QApplication::translate("BasicTransceiver", "COM189", 0)
         << QApplication::translate("BasicTransceiver", "COM190", 0)
         << QApplication::translate("BasicTransceiver", "COM191", 0)
         << QApplication::translate("BasicTransceiver", "COM192", 0)
         << QApplication::translate("BasicTransceiver", "COM193", 0)
         << QApplication::translate("BasicTransceiver", "COM194", 0)
         << QApplication::translate("BasicTransceiver", "COM195", 0)
         << QApplication::translate("BasicTransceiver", "COM196", 0)
         << QApplication::translate("BasicTransceiver", "COM197", 0)
         << QApplication::translate("BasicTransceiver", "COM198", 0)
         << QApplication::translate("BasicTransceiver", "COM199", 0)
         << QApplication::translate("BasicTransceiver", "COM200", 0)
         << QApplication::translate("BasicTransceiver", "COM201", 0)
         << QApplication::translate("BasicTransceiver", "COM202", 0)
         << QApplication::translate("BasicTransceiver", "COM203", 0)
         << QApplication::translate("BasicTransceiver", "COM204", 0)
         << QApplication::translate("BasicTransceiver", "COM205", 0)
         << QApplication::translate("BasicTransceiver", "COM206", 0)
         << QApplication::translate("BasicTransceiver", "COM207", 0)
         << QApplication::translate("BasicTransceiver", "COM208", 0)
         << QApplication::translate("BasicTransceiver", "COM209", 0)
         << QApplication::translate("BasicTransceiver", "COM210", 0)
         << QApplication::translate("BasicTransceiver", "COM211", 0)
         << QApplication::translate("BasicTransceiver", "COM212", 0)
         << QApplication::translate("BasicTransceiver", "COM213", 0)
         << QApplication::translate("BasicTransceiver", "COM214", 0)
         << QApplication::translate("BasicTransceiver", "COM215", 0)
         << QApplication::translate("BasicTransceiver", "COM216", 0)
         << QApplication::translate("BasicTransceiver", "COM217", 0)
         << QApplication::translate("BasicTransceiver", "COM218", 0)
         << QApplication::translate("BasicTransceiver", "COM219", 0)
         << QApplication::translate("BasicTransceiver", "COM220", 0)
         << QApplication::translate("BasicTransceiver", "COM221", 0)
         << QApplication::translate("BasicTransceiver", "COM222", 0)
         << QApplication::translate("BasicTransceiver", "COM223", 0)
         << QApplication::translate("BasicTransceiver", "COM224", 0)
         << QApplication::translate("BasicTransceiver", "COM225", 0)
         << QApplication::translate("BasicTransceiver", "COM226", 0)
         << QApplication::translate("BasicTransceiver", "COM227", 0)
         << QApplication::translate("BasicTransceiver", "COM228", 0)
         << QApplication::translate("BasicTransceiver", "COM229", 0)
         << QApplication::translate("BasicTransceiver", "COM230", 0)
         << QApplication::translate("BasicTransceiver", "COM231", 0)
         << QApplication::translate("BasicTransceiver", "COM232", 0)
         << QApplication::translate("BasicTransceiver", "COM233", 0)
         << QApplication::translate("BasicTransceiver", "COM234", 0)
         << QApplication::translate("BasicTransceiver", "COM235", 0)
         << QApplication::translate("BasicTransceiver", "COM236", 0)
         << QApplication::translate("BasicTransceiver", "COM237", 0)
         << QApplication::translate("BasicTransceiver", "COM238", 0)
         << QApplication::translate("BasicTransceiver", "COM239", 0)
         << QApplication::translate("BasicTransceiver", "COM240", 0)
         << QApplication::translate("BasicTransceiver", "COM241", 0)
         << QApplication::translate("BasicTransceiver", "COM242", 0)
         << QApplication::translate("BasicTransceiver", "COM243", 0)
         << QApplication::translate("BasicTransceiver", "COM244", 0)
         << QApplication::translate("BasicTransceiver", "COM245", 0)
         << QApplication::translate("BasicTransceiver", "COM246", 0)
         << QApplication::translate("BasicTransceiver", "COM247", 0)
         << QApplication::translate("BasicTransceiver", "COM248", 0)
         << QApplication::translate("BasicTransceiver", "COM249", 0)
         << QApplication::translate("BasicTransceiver", "COM250", 0)
         << QApplication::translate("BasicTransceiver", "COM251", 0)
         << QApplication::translate("BasicTransceiver", "COM252", 0)
         << QApplication::translate("BasicTransceiver", "COM253", 0)
         << QApplication::translate("BasicTransceiver", "COM254", 0)
         << QApplication::translate("BasicTransceiver", "COM255", 0)
        );
#ifndef QT_NO_STATUSTIP
        COMCB->setStatusTip(QApplication::translate("BasicTransceiver", "Select port ", 0));
#endif // QT_NO_STATUSTIP
        someButtonGB->setTitle(QString());
#ifndef QT_NO_STATUSTIP
        resetCntButton->setStatusTip(QApplication::translate("BasicTransceiver", "Reset the counting", 0));
#endif // QT_NO_STATUSTIP
        resetCntButton->setText(QApplication::translate("BasicTransceiver", "\350\256\241\346\225\260\346\270\205\351\233\266", 0));
#ifndef QT_NO_STATUSTIP
        cleanButton->setStatusTip(QApplication::translate("BasicTransceiver", "Clear the text browser", 0));
#endif // QT_NO_STATUSTIP
        cleanButton->setText(QApplication::translate("BasicTransceiver", "\346\270\205\347\251\272\346\230\276\347\244\272", 0));
#ifndef QT_NO_STATUSTIP
        connectButton->setStatusTip(QApplication::translate("BasicTransceiver", "Open a port", 0));
#endif // QT_NO_STATUSTIP
        connectButton->setText(QApplication::translate("BasicTransceiver", "\346\211\223\345\274\200\350\277\236\346\216\245", 0));
#ifndef QT_NO_STATUSTIP
        checkAPButton->setStatusTip(QApplication::translate("BasicTransceiver", "To find available ports", 0));
#endif // QT_NO_STATUSTIP
        checkAPButton->setText(QApplication::translate("BasicTransceiver", "\346\243\200\346\265\213\345\217\257\347\224\250\344\270\262\345\217\243", 0));
        menu_About->setTitle(QApplication::translate("BasicTransceiver", "&About", 0));
        menu_File->setTitle(QApplication::translate("BasicTransceiver", "&File", 0));
        menu_Options->setTitle(QApplication::translate("BasicTransceiver", "&Options", 0));
    } // retranslateUi

};

namespace Ui {
    class BasicTransceiver: public Ui_BasicTransceiver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASICTRANSCEIVER_H
