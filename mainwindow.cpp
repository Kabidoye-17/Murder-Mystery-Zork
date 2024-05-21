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
    ui->giveItem->hide();
    ui->phoneDescription->hide();
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
    ui->giveItem->show();
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
    room* r = rc->getCurrentRoom();
    MathPuzzle* p = r->getPuzzle();
    string correctAnswer = p->getCorrectAnswer();

    if (uc == correctAnswer){
        ui->correctness->setText(QString::fromStdString("Correct"));
        ui->correctness->setStyleSheet("color: rgb(3, 252, 44);	font: 900 32pt 'Segoe UI Black';qproperty-alignment: AlignCenter; ");
        ui->correctness->show();
        ui->stackedWidget->setCurrentIndex(9);
        ui->itemWon->setText(QString::fromStdString("The " + r->getRoomItem().getName()));
        rc->addToCharacterInventory(r->getRoomItem());
        incrementClues();
        cout << gs.clues << endl;
        if (checkClues() == 1){
            rc->getGuessPhone()->setInteract(1);
        }
        p->setInteract(false);



    } else {
        ui->correctness->setText(QString::fromStdString("Incorrect"));
        ui->correctness->setStyleSheet("color: rgb(201, 8, 18); font: 900 32pt 'Segoe UI Black';qproperty-alignment: AlignCenter;");
        ui->correctness->show();
        QTimer::singleShot(1000, this, [=]() {
            ui->stackedWidget->setCurrentIndex(r->getPageNumber());
        });
    }


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
    room* r = rc->getCurrentRoom();
    Character* c = r->getCharacter();
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



void MainWindow::addToInventory(string name){
    ui->inventoryList->addItem(QString::fromStdString(name));

}

void MainWindow::removeFromInventory(string itemName){
    QList<QListWidgetItem *> items = ui->inventoryList->findItems(QString::fromStdString(itemName), Qt::MatchExactly);
    if (!items.isEmpty()) {
        QListWidgetItem *item = items.first(); // Get the first item from the list of found items
        ui->inventoryList->removeItemWidget(item);// Remove the item from the list
        delete item; // If you allocated QListWidgetItem dynamically, you should delete it after taking it from the list
    }
}

void MainWindow::on_addToInventory_clicked()
{
 room* r = rc->getCurrentRoom();
addToInventory(r->getRoomItem().getName());
 ui->stackedWidget->setCurrentIndex(r->getPageNumber());
}


void MainWindow::on_giveItem_clicked()
{
    room* r = rc->getCurrentRoom();
    player* pl = rc->getPlayer();
    MathPuzzle* p = r->getPuzzle();
    Character* c = r->getCharacter();
    cout<< 2<< endl;
    // if we are not in the main wall
    if (r->getPageNumber() != 2) {
        cout << 3 << endl;
        // puzzle isnt interactable
        if (p->getInteract() == 0) {
            cout << 4 << endl;
            // if the item is in player inventory
            Item* neededItemPtr = pl->getItem(r->getRoomItem().getName());
            if (neededItemPtr) {
                Item& neededItem = *neededItemPtr;
                // Print the item's name
                cout << "Item Name: " << neededItem.getName() << endl;
            } else {
                // Handle the case where neededItemPtr is null
                cout << "Item is null" << endl;
            }
            Item& neededItem = *neededItemPtr;
            cout<< "print 1" << endl;
            cout<< r->getRoomItem().getName() << endl;
            cout<< "print 2" << endl;
            cout << neededItem.getName()<< endl;
            if (!neededItem.getName().compare("")) {
                    cout << 6 << endl;
                removeFromInventory(r->getRoomItem().getName());
                    cout << 7 << endl;
                rc->removeFromCharacterInventory(neededItem); // Pass the object, not the pointer
                    cout << 8 << endl;
                    c->setInteract(1);
                }
            }
        }


}

void MainWindow::on_PuzzleButton_pressed()
{

    room* r = rc->getCurrentRoom();
    if (r->getPageNumber() != 2){
        MathPuzzle* p= r->getPuzzle();
        string od = p->displayObjectDescription();
        ui->objectDescription->setText(QString::fromStdString(od));
        ui->objectDescription->show();
    }
}


void MainWindow::on_PuzzleButton_released()
{
    ui->objectDescription->hide();
}


void MainWindow::on_PuzzleButton_clicked()
{
    cout << "puzzle button accessed " << endl;
    room* r = rc->getCurrentRoom();
    cout << "room gotten" << endl;
    if (r->getPageNumber() != 2){
        cout << "not in the hall" << endl;
        bool status = r->getPuzzle()->getInteract();
        MathPuzzle* p = r->getPuzzle();
        cout << "puzzle accquired" << endl;
        if (status == 1){
            cout << "you can interact!"<< endl;
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


void MainWindow::on_phone_clicked()
{
    // if you can interract
    if (rc->getGuessPhone()->getInteract()){
    gs.guesses = 3;
    ui->stackedWidget->setCurrentIndex(10);
    ui->guessCounter->setText(QString::fromStdString(to_string(checkGuessesLeft())));
    ui->leftButton->hide();
    ui->rightButton->hide();
    ui->upButton->hide();
    ui->downButton->hide();
    }
}


void MainWindow::on_phone_pressed()
{

    ui->phoneDescription->setText(QString::fromStdString(rc->getGuessPhone()->displayObjectDescription()));
    ui->phoneDescription->show();
}


void MainWindow::on_phone_released()
{
    ui->phoneDescription->hide();
}


void MainWindow::on_guessTheGhost_clicked()
{
    bool innocence = rc->getGuessPhone()->getInnocenceStatus("Ella's ghost");
    guessHandler(innocence);
}



void MainWindow::on_guessTheDog_clicked()
{

    bool innocence = rc->getGuessPhone()->getInnocenceStatus("the dog");
    guessHandler(innocence);
}


void MainWindow::on_guessTheChef_clicked()
{

    bool innocence = rc->getGuessPhone()->getInnocenceStatus("the chef");
    guessHandler(innocence);
}


void MainWindow::on_guessTheWife_clicked()
{

    bool innocence = rc->getGuessPhone()->getInnocenceStatus("the wife");
    guessHandler(innocence);
}


void MainWindow::on_guessTheGardener_clicked()
{

    bool innocence = rc->getGuessPhone()->getInnocenceStatus("the gardener");
    guessHandler(innocence);
}

void MainWindow::guessHandler(bool b){
    if (b== true){
        decreaseGuesses();
        int temp = checkGuessesLeft();
        if (temp <= 0){
            ui->murdererLabel->setText(QString::fromStdString(rc->getGuessPhone()->getMurderer()));
            ui->stackedWidget->setCurrentIndex(12);
        }else {
            ui->guessCounter->setText(QString::fromStdString(to_string(checkGuessesLeft())));
        }
    }else if (b == false){
        ui->murdererLabel_2->setText(QString::fromStdString(rc->getGuessPhone()->getMurderer()));
        ui->stackedWidget->setCurrentIndex(11);
    }

}

void MainWindow::on_winExit_clicked()
{
    QApplication::quit();
}


void MainWindow::on_loserExit_clicked()
{
    QApplication::quit();
}


