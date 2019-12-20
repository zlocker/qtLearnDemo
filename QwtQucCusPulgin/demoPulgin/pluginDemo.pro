#-------------------------------------------------
#
# Project created by QtCreator 2019-04-01T21:46:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pluginDemo     #可执行程序文件名
TEMPLATE = app          #文件类型


# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS
#库文件MSVC是lib和dll,mingw是a和dll
#动态链接
LIBS += -L$$PWD/ -llibqwbatteryplugind  #此命令将读取lib文件夹中的libqwbatteryplugind.a文件
INCLUDEPATH += $$PWD/include
#动态链接时必须将dll文件包含进入，且dll文件可以放两个地方，其一为exe文件运行目录，其二为lib文件目录（即dll文件和lib文件放置在一起）
#在本项目中 均放置在工程目录下


#静态链接MSVC----------注意debug和release的库文件要分开
#1QWT
#DEFINES += QT_DLL QWT_DLL
#LIBS += -L"D:\Qt\Qt5.9.1\5.9.1\msvc2015\lib" -lqwtd
#LIBS += -L"D:\Qt\Qt5.9.1\5.9.1\msvc2015\lib" -lqwt
#INCLUDEPATH += D:\Qt\Qt5.9.1\5.9.1\msvc2015\include\qwt
# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
#2QUC
#DEFINES += QT_DLL QUC_DLL
#LIBS += -L"D:\Qt\Qt5.9.6\5.9.6\msvc2015\lib" -lqucd
#LIBS += -L"D:\Qt\Qt5.9.1\5.9.1\msvc2015\lib" -lquc
#INCLUDEPATH += D:\Qt\Qt5.9.6\5.9.6\msvc2015\include\quc

#静态链接mingw----------注意debug和release的库文件要分开
#1QWT
DEFINES += QT_DLL QWT_DLL
LIBS += -L"D:\Qt\Qt5.9.6\5.9.6\mingw53_32\lib" -llibqwtd    #debug编译
#LIBS += -L"D:\Qt\Qt5.9.1\5.9.1\mingw53_32\lib" -llibqwt    #release编译
INCLUDEPATH += D:\Qt\Qt5.9.6\5.9.6\mingw53_32\include\qwt   #包含QWT头文件
#2QUC
DEFINES += QT_DLL QUC_DLL
LIBS += -L"D:\Qt\Qt5.9.6\5.9.6\mingw53_32\lib" -llibqucd    #debug编译
#LIBS += -L"D:\Qt\Qt5.9.1\5.9.1\mingw53_32\lib" -llibquc    #release编译
INCLUDEPATH += D:\Qt\Qt5.9.6\5.9.6\mingw53_32\include\quc   #包含QUC头文件

SOURCES += \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        mainwindow.h

FORMS += \
        mainwindow.ui
