#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "roomController.h"
using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->rc = new roomController;
    ui->stackedWidget->setCurrentIndex(0);
    ui->upButton->hide();
    ui->downButton->hide();
    ui->leftButton->hide();
    ui->rightButton->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_playButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_readyButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->upButton->show();
    ui->downButton->show();
    ui->leftButton->show();
    ui->rightButton->show();
}

void MainWindow::on_upButton_clicked()
{
    string direction = "North";
    int nextPage = rc->switchRoom(&direction);
    ui->stackedWidget->setCurrentIndex(nextPage);
}


void MainWindow::on_downButton_clicked()
{
    string direction = "South";
    int nextPage = rc->switchRoom(&direction);
    ui->stackedWidget->setCurrentIndex(nextPage);
}


void MainWindow::on_rightButton_clicked()
{
    string direction = "East";
    int nextPage = rc->switchRoom(&direction);
    ui->stackedWidget->setCurrentIndex(nextPage);
}


void MainWindow::on_leftButton_clicked()
{
    string direction = "West";
    int nextPage = rc->switchRoom(&direction);
    ui->stackedWidget->setCurrentIndex(nextPage);
}

