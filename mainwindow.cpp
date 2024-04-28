#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(2);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_playButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}



