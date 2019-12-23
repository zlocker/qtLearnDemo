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

void MainWindow::slotupdateserver(QString msg, int length)
{
    ui->textEdit->append(msg);
}



void MainWindow::on_pushButtonCreateChattingRoom_clicked()
{
    server  = new Server(this, port);
    connect(server, &Server::updateserver, this, &MainWindow::slotupdateserver);
    ui->pushButtonCreateChattingRoom->setEnabled(false);
}
