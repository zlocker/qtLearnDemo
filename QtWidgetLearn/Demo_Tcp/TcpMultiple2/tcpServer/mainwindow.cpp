#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    port = 8888;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotupdateserver(char* msg, int length)
{
    Info b;
    memcpy((char*)&b,msg,sizeof(Info));
    ui->textEdit->append(QString(b.name));
    ui->textEdit->append(QString::number(b.a));
}



void MainWindow::on_pushButtonCreateChattingRoom_clicked()
{
    server  = new Server(this, port);
    connect(server, &Server::updateserver, this, &MainWindow::slotupdateserver);
    ui->pushButtonCreateChattingRoom->setEnabled(false);
}
