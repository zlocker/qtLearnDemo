/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QComboBox *accountComboBox;
    QLineEdit *passwordEdit;
    QCheckBox *rememberPsd;
    QCheckBox *autoLogin;
    QPushButton *loginButton;
    QPushButton *moreAccountLogin;
    QPushButton *loginState;
    QPushButton *pButtonRegistAccount;
    QPushButton *pButtonForgetPassword;
    QLabel *userHead;
    QPushButton *pButtongFlicker;
    QPushButton *pButtonArrow;

    void setupUi(QDialog *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QStringLiteral("LoginWindow"));
        LoginWindow->resize(430, 330);
        LoginWindow->setMinimumSize(QSize(430, 330));
        LoginWindow->setMaximumSize(QSize(430, 330));
        LoginWindow->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        accountComboBox = new QComboBox(LoginWindow);
        accountComboBox->setObjectName(QStringLiteral("accountComboBox"));
        accountComboBox->setGeometry(QRect(130, 190, 190, 30));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(accountComboBox->sizePolicy().hasHeightForWidth());
        accountComboBox->setSizePolicy(sizePolicy);
        accountComboBox->setMinimumSize(QSize(190, 30));
        accountComboBox->setMaximumSize(QSize(190, 30));
        accountComboBox->setFocusPolicy(Qt::WheelFocus);
        accountComboBox->setContextMenuPolicy(Qt::NoContextMenu);
        accountComboBox->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        accountComboBox->setEditable(false);
        accountComboBox->setInsertPolicy(QComboBox::NoInsert);
        passwordEdit = new QLineEdit(LoginWindow);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));
        passwordEdit->setGeometry(QRect(130, 220, 190, 30));
        sizePolicy.setHeightForWidth(passwordEdit->sizePolicy().hasHeightForWidth());
        passwordEdit->setSizePolicy(sizePolicy);
        passwordEdit->setMinimumSize(QSize(190, 30));
        passwordEdit->setMaximumSize(QSize(190, 30));
        passwordEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        passwordEdit->setEchoMode(QLineEdit::Password);
        rememberPsd = new QCheckBox(LoginWindow);
        rememberPsd->setObjectName(QStringLiteral("rememberPsd"));
        rememberPsd->setGeometry(QRect(130, 258, 71, 16));
        autoLogin = new QCheckBox(LoginWindow);
        autoLogin->setObjectName(QStringLiteral("autoLogin"));
        autoLogin->setGeometry(QRect(256, 258, 71, 16));
        loginButton = new QPushButton(LoginWindow);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(130, 284, 194, 30));
        loginButton->setMinimumSize(QSize(194, 30));
        loginButton->setMaximumSize(QSize(194, 30));
        loginButton->setFocusPolicy(Qt::NoFocus);
        moreAccountLogin = new QPushButton(LoginWindow);
        moreAccountLogin->setObjectName(QStringLiteral("moreAccountLogin"));
        moreAccountLogin->setGeometry(QRect(14, 300, 23, 19));
        moreAccountLogin->setMinimumSize(QSize(23, 19));
        moreAccountLogin->setMaximumSize(QSize(23, 19));
        loginState = new QPushButton(LoginWindow);
        loginState->setObjectName(QStringLiteral("loginState"));
        loginState->setGeometry(QRect(105, 254, 17, 17));
        loginState->setMinimumSize(QSize(17, 17));
        loginState->setMaximumSize(QSize(17, 17));
        loginState->setIconSize(QSize(18, 18));
        pButtonRegistAccount = new QPushButton(LoginWindow);
        pButtonRegistAccount->setObjectName(QStringLiteral("pButtonRegistAccount"));
        pButtonRegistAccount->setGeometry(QRect(326, 193, 63, 23));
        pButtonForgetPassword = new QPushButton(LoginWindow);
        pButtonForgetPassword->setObjectName(QStringLiteral("pButtonForgetPassword"));
        pButtonForgetPassword->setGeometry(QRect(326, 220, 63, 23));
        userHead = new QLabel(LoginWindow);
        userHead->setObjectName(QStringLiteral("userHead"));
        userHead->setGeometry(QRect(40, 190, 80, 80));
        userHead->setMinimumSize(QSize(80, 80));
        userHead->setMaximumSize(QSize(80, 80));
        pButtongFlicker = new QPushButton(LoginWindow);
        pButtongFlicker->setObjectName(QStringLiteral("pButtongFlicker"));
        pButtongFlicker->setGeometry(QRect(395, 300, 22, 22));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pButtongFlicker->sizePolicy().hasHeightForWidth());
        pButtongFlicker->setSizePolicy(sizePolicy1);
        pButtongFlicker->setMinimumSize(QSize(22, 22));
        pButtongFlicker->setMaximumSize(QSize(22, 22));
        pButtonArrow = new QPushButton(LoginWindow);
        pButtonArrow->setObjectName(QStringLiteral("pButtonArrow"));
        pButtonArrow->setGeometry(QRect(340, 0, 30, 30));
        sizePolicy1.setHeightForWidth(pButtonArrow->sizePolicy().hasHeightForWidth());
        pButtonArrow->setSizePolicy(sizePolicy1);
        pButtonArrow->setMinimumSize(QSize(30, 30));
        pButtonArrow->setMaximumSize(QSize(30, 30));
        userHead->raise();
        loginState->raise();
        accountComboBox->raise();
        passwordEdit->raise();
        rememberPsd->raise();
        autoLogin->raise();
        loginButton->raise();
        moreAccountLogin->raise();
        pButtonRegistAccount->raise();
        pButtonForgetPassword->raise();
        pButtongFlicker->raise();
        pButtonArrow->raise();

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QDialog *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "Dialog", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        accountComboBox->setAccessibleName(QApplication::translate("LoginWindow", "login_username", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        rememberPsd->setText(QApplication::translate("LoginWindow", "\350\256\260\344\275\217\345\257\206\347\240\201", Q_NULLPTR));
        autoLogin->setText(QApplication::translate("LoginWindow", "\350\207\252\345\212\250\347\231\273\345\275\225", Q_NULLPTR));
        loginButton->setText(QApplication::translate("LoginWindow", "\347\231\273  \345\275\225", Q_NULLPTR));
        moreAccountLogin->setText(QString());
        loginState->setText(QString());
        pButtonRegistAccount->setText(QApplication::translate("LoginWindow", "\346\263\250\345\206\214\345\270\220\345\217\267", Q_NULLPTR));
        pButtonForgetPassword->setText(QApplication::translate("LoginWindow", "\346\211\276\345\233\236\345\257\206\347\240\201", Q_NULLPTR));
        userHead->setText(QString());
        pButtongFlicker->setText(QString());
        pButtonArrow->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
