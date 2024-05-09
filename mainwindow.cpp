#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "roomController.h"
#include <QTimer>
#include <iostream>
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
    ui->PuzzleButton->hide();
    ui->objectDescription->hide();
    ui->characterClue->hide();
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
    ui->PuzzleButton->show();
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



void MainWindow::on_PuzzleButton_clicked()
{
    room r = rc->getCurrentRoom();
    if (r.getPageNumber() != 2){
        puzzle* p = r.getPuzzle();
        object* pAsObject = dynamic_cast<object*>(p);
        if (pAsObject->getInteract() == 1){

            ui->question->setText(QString::fromStdString(p->getQuestion()));
            ui->aAnswer->setText(QString::fromStdString(p->getAnswers()[0]));
            ui->bAnswer->setText(QString::fromStdString(p->getAnswers()[1]));
            ui->cAnswer->setText(QString::fromStdString(p->getAnswers()[2]));
            ui->gameOverview->setText(QString::fromStdString(p->displayGameOverview()));
            ui->correctness->hide();
            ui->stackedWidget->setCurrentIndex(8);

        }
    }

}


void MainWindow::on_aButton_clicked()
{
    string userChoice = ui->aAnswer->text().toStdString();
    correctnessCheck(userChoice);

}

void MainWindow::on_bButton_clicked()
{
    string userChoice = ui->bAnswer->text().toStdString();
    correctnessCheck(userChoice);
}

void MainWindow::on_cButton_clicked()
{
    string userChoice = ui->cAnswer->text().toStdString();
    correctnessCheck(userChoice);
}

void MainWindow::correctnessCheck(string uc){
    room r = rc->getCurrentRoom();
    puzzle* p = r.getPuzzle();
    Character* c = r.getCharacter();
    string correctAnswer = p->getCorrectAnswer();
    object* pAsObject = dynamic_cast<object*>(p);
    if (uc == correctAnswer){
        ui->correctness->setText(QString::fromStdString("Correct"));
        ui->correctness->setStyleSheet("color: rgb(3, 252, 44);	font: 900 32pt 'Segoe UI Black';qproperty-alignment: AlignCenter; ");
        pAsObject->setInteract(false);
        c->setInteract(true);
    } else {
        ui->correctness->setText(QString::fromStdString("Incorrect"));
        ui->correctness->setStyleSheet("color: rgb(201, 8, 18); font: 900 32pt 'Segoe UI Black';qproperty-alignment: AlignCenter;");
    }
    ui->correctness->show();
    QTimer::singleShot(1000, this, [=]() {
        ui->stackedWidget->setCurrentIndex(r.getPageNumber());
    });
}






void MainWindow::on_PuzzleButton_pressed()
{

    room r = rc->getCurrentRoom();
    if (r.getPageNumber() != 2){
    puzzle* p = r.getPuzzle();
    object* pAsObject = dynamic_cast<object*>(p);
    string od = pAsObject->displayObjectDescription();
    ui->objectDescription->setText(QString::fromStdString(od));
    ui->objectDescription->show();
    }
}


void MainWindow::on_PuzzleButton_released()
{
    ui->objectDescription->hide();
}


void MainWindow::on_theWife_clicked()
{
  displayCharacterDialogue();
}


void MainWindow::on_theGhost_clicked()
{
    displayCharacterDialogue();
}

void MainWindow::displayCharacterDialogue(){
    room r = rc->getCurrentRoom();
    Character* c = r.getCharacter();
    string clue = c->getDialogue();
    ui->characterClue->setText(QString::fromStdString(clue));
    ui->characterClue->show();
    QTimer::singleShot(2000, this, [=]() {
        ui->characterClue->hide();
    });
}

void MainWindow::on_pushButton_clicked()
{
    displayCharacterDialogue();
}


void MainWindow::on_theChef_clicked()
{
    displayCharacterDialogue();
}


void MainWindow::on_theDog_clicked()
{
    displayCharacterDialogue();
}


void MainWindow::on_theGardener_clicked()
{
    displayCharacterDialogue();
}

