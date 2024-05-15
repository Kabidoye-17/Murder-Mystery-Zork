#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "roomController.h"
#include <string>
#include "mathpuzzle.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void correctnessCheck(string uc);
    void displayCharacterDialogue();
    void removeFromInventory(string itemName);
    void addToInventory(string name);
    void guessHandler(bool b);
private slots:

    void on_playButton_clicked();

    void on_readyButton_clicked();

    void on_upButton_clicked();

    void on_downButton_clicked();

    void on_rightButton_clicked();

    void on_leftButton_clicked();

    void on_aButton_clicked();

    void on_bButton_clicked();

    void on_cButton_clicked();

    void on_PuzzleButton_pressed();

    void on_PuzzleButton_released();

    void on_theWife_clicked();

    void on_theGhost_clicked();

    void on_pushButton_clicked();

    void on_theChef_clicked();

    void on_theDog_clicked();

    void on_theGardener_clicked();

    void on_addToInventory_clicked();

    void on_giveItem_clicked();

    void on_PuzzleButton_clicked();

    void on_phone_clicked();

    void on_phone_pressed();

    void on_phone_released();

    void on_guessTheGhost_clicked();

    void on_guessTheDog_clicked();

    void on_guessTheChef_clicked();

    void on_guessTheWife_clicked();

    void on_guessTheGardener_clicked();

    void on_winExit_clicked();

    void on_loserExit_clicked();

private:
    Ui::MainWindow *ui;
    roomController *rc;
};
#endif // MAINWINDOW_H
