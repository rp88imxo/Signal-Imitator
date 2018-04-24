#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Инициализируем наш виджет с радио
    radioWindow = new RadioWindow();
    //Добавляем виджет на текущий слой окна
    ui->gridLayout->addWidget(radioWindow);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    radioWindow->connectingLine->timer->start(16);
}

void MainWindow::on_pushButton_2_clicked()
{
    radioWindow->connectingLine->timer->stop();
    radioWindow->connectingLine->setToStart();
}
