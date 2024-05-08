#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "roomController.h"
#include <string>

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


private slots:

    void on_playButton_clicked();

    void on_readyButton_clicked();

    void on_upButton_clicked();

    void on_downButton_clicked();

    void on_rightButton_clicked();

    void on_leftButton_clicked();

    void on_atticPuzzle_clicked();

    void on_PuzzleButton_clicked();

    void on_aButton_clicked();

    void on_bButton_clicked();

    void on_cButton_clicked();

private:
    Ui::MainWindow *ui;
    roomController *rc;
};
#endif // MAINWINDOW_H
