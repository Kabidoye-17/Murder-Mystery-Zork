/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *titlescreen;
    QLabel *bgImage;
    QPushButton *playButton;
    QWidget *howToPlay;
    QLabel *roombg;
    QPushButton *readyButton;
    QWidget *mainHall;
    QLabel *mainHallbg;
    QPushButton *phone;
    QWidget *sittingRoom;
    QLabel *sittingRoombg;
    QLabel *theDog;
    QLabel *dogCharLabel;
    QWidget *bedroom;
    QLabel *bedroombg;
    QPushButton *theWife;
    QLabel *wifeCharLabel;
    QWidget *Attic;
    QLabel *Atticbg;
    QLabel *theGhost;
    QLabel *ghostCharLabel;
    QWidget *Kitchen;
    QLabel *kitchenbg;
    QLabel *theChef;
    QLabel *chefCharLabel;
    QWidget *Garden;
    QLabel *gardenbg;
    QLabel *theGardener;
    QLabel *gardenerCharLabel;
    QWidget *questionPage;
    QPushButton *aButton;
    QPushButton *bButton;
    QPushButton *cButton;
    QLabel *heading;
    QLabel *gameOverview;
    QLabel *question;
    QLabel *aAnswer;
    QLabel *bAnswer;
    QLabel *cAnswer;
    QLabel *correctness;
    QPushButton *upButton;
    QPushButton *downButton;
    QPushButton *rightButton;
    QPushButton *leftButton;
    QPushButton *PuzzleButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1151, 641);
        MainWindow->setMaximumSize(QSize(1151, 641));
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow#MainWindow{\n"
"border-image: url(:/images/running.png);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget#centralwidget{\n"
"border-image: url(:/images/running.png);\n"
"}"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(90, 80, 971, 421));
        stackedWidget->setMaximumSize(QSize(1151, 641));
        titlescreen = new QWidget();
        titlescreen->setObjectName("titlescreen");
        titlescreen->setMaximumSize(QSize(1151, 641));
        titlescreen->setAutoFillBackground(false);
        bgImage = new QLabel(titlescreen);
        bgImage->setObjectName("bgImage");
        bgImage->setGeometry(QRect(0, 0, 971, 421));
        bgImage->setStyleSheet(QString::fromUtf8("QLabel#bgImage{\n"
"border-image: url(:/images/main.png); \n"
"border: none;             \n"
"padding: 0;                \n"
"margin: 0;   \n"
"}"));
        playButton = new QPushButton(titlescreen);
        playButton->setObjectName("playButton");
        playButton->setGeometry(QRect(390, 240, 201, 61));
        playButton->setStyleSheet(QString::fromUtf8("QPushButton#playButton{\n"
"	background-color: rgb(255, 140, 253);\n"
"	color: rgb(0, 0, 0);\n"
"	font: 700 12pt \"8514oem\";\n"
"}"));
        stackedWidget->addWidget(titlescreen);
        howToPlay = new QWidget();
        howToPlay->setObjectName("howToPlay");
        howToPlay->setMaximumSize(QSize(1151, 641));
        howToPlay->setAutoFillBackground(false);
        roombg = new QLabel(howToPlay);
        roombg->setObjectName("roombg");
        roombg->setGeometry(QRect(0, 0, 971, 421));
        roombg->setStyleSheet(QString::fromUtf8("QLabel#roombg{\n"
"border-image: url(:/images/howToPlay.png);\n"
"border: none;             \n"
"padding: 0;                \n"
"margin: 0;   \n"
"}\n"
""));
        readyButton = new QPushButton(howToPlay);
        readyButton->setObjectName("readyButton");
        readyButton->setGeometry(QRect(380, 340, 201, 61));
        readyButton->setStyleSheet(QString::fromUtf8("QPushButton#readyButton{\n"
"	background-color: rgb(255, 140, 253);\n"
"	color: rgb(0, 0, 0);\n"
"	font: 700 12pt \"8514oem\";\n"
"}"));
        stackedWidget->addWidget(howToPlay);
        mainHall = new QWidget();
        mainHall->setObjectName("mainHall");
        mainHallbg = new QLabel(mainHall);
        mainHallbg->setObjectName("mainHallbg");
        mainHallbg->setGeometry(QRect(0, 0, 971, 421));
        mainHallbg->setStyleSheet(QString::fromUtf8("border-image: url(:/images/mainHall.png);"));
        phone = new QPushButton(mainHall);
        phone->setObjectName("phone");
        phone->setGeometry(QRect(420, 130, 131, 81));
        phone->setStyleSheet(QString::fromUtf8("QPushButton#phone{\n"
"	border-image: url(:/images/GuessingPhone.png);\n"
"\n"
"}"));
        stackedWidget->addWidget(mainHall);
        sittingRoom = new QWidget();
        sittingRoom->setObjectName("sittingRoom");
        sittingRoombg = new QLabel(sittingRoom);
        sittingRoombg->setObjectName("sittingRoombg");
        sittingRoombg->setGeometry(QRect(0, 0, 971, 421));
        sittingRoombg->setStyleSheet(QString::fromUtf8("border-image: url(:/images/sittingRoom.png);"));
        theDog = new QLabel(sittingRoom);
        theDog->setObjectName("theDog");
        theDog->setGeometry(QRect(50, 180, 251, 201));
        theDog->setStyleSheet(QString::fromUtf8("QLabel#theDog{\n"
"	border-image: url(:/images/doggo.png);\n"
"}"));
        dogCharLabel = new QLabel(sittingRoom);
        dogCharLabel->setObjectName("dogCharLabel");
        dogCharLabel->setGeometry(QRect(100, 380, 91, 20));
        dogCharLabel->setStyleSheet(QString::fromUtf8("QLabel#dogCharLabel{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 9pt \"8514oem\";\n"
"}"));
        stackedWidget->addWidget(sittingRoom);
        bedroom = new QWidget();
        bedroom->setObjectName("bedroom");
        bedroombg = new QLabel(bedroom);
        bedroombg->setObjectName("bedroombg");
        bedroombg->setGeometry(QRect(0, 0, 971, 421));
        bedroombg->setStyleSheet(QString::fromUtf8("QLabel#bedroombg{\n"
"	border-image: url(:/images/bedroom.png);\n"
"}"));
        theWife = new QPushButton(bedroom);
        theWife->setObjectName("theWife");
        theWife->setGeometry(QRect(140, 100, 131, 191));
        theWife->setStyleSheet(QString::fromUtf8("QPushButton#theWife{\n"
"	border-image: url(:/images/theWife.png);\n"
"}"));
        wifeCharLabel = new QLabel(bedroom);
        wifeCharLabel->setObjectName("wifeCharLabel");
        wifeCharLabel->setGeometry(QRect(170, 290, 91, 20));
        wifeCharLabel->setStyleSheet(QString::fromUtf8("QLabel#wifeCharLabel{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 9pt \"8514oem\";\n"
"}"));
        stackedWidget->addWidget(bedroom);
        Attic = new QWidget();
        Attic->setObjectName("Attic");
        Atticbg = new QLabel(Attic);
        Atticbg->setObjectName("Atticbg");
        Atticbg->setGeometry(QRect(0, 0, 971, 421));
        Atticbg->setStyleSheet(QString::fromUtf8("border-image: url(:/images/attic.png);"));
        theGhost = new QLabel(Attic);
        theGhost->setObjectName("theGhost");
        theGhost->setGeometry(QRect(460, 210, 101, 131));
        theGhost->setStyleSheet(QString::fromUtf8("QLabel#theGhost{\n"
"	border-image: url(:/images/theGhost.png);\n"
"}"));
        ghostCharLabel = new QLabel(Attic);
        ghostCharLabel->setObjectName("ghostCharLabel");
        ghostCharLabel->setGeometry(QRect(440, 350, 131, 20));
        ghostCharLabel->setStyleSheet(QString::fromUtf8("QLabel#ghostCharLabel{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 9pt \"8514oem\";\n"
"}"));
        stackedWidget->addWidget(Attic);
        Kitchen = new QWidget();
        Kitchen->setObjectName("Kitchen");
        kitchenbg = new QLabel(Kitchen);
        kitchenbg->setObjectName("kitchenbg");
        kitchenbg->setGeometry(QRect(0, 0, 971, 421));
        kitchenbg->setStyleSheet(QString::fromUtf8("border-image: url(:/images/kitchen.png);"));
        theChef = new QLabel(Kitchen);
        theChef->setObjectName("theChef");
        theChef->setGeometry(QRect(100, 130, 101, 181));
        theChef->setStyleSheet(QString::fromUtf8("QLabel#theChef{\n"
"border-image: url(:/images/theChef.gif);\n"
"}\n"
""));
        chefCharLabel = new QLabel(Kitchen);
        chefCharLabel->setObjectName("chefCharLabel");
        chefCharLabel->setGeometry(QRect(110, 320, 91, 20));
        chefCharLabel->setStyleSheet(QString::fromUtf8("QLabel#chefCharLabel{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 9pt \"8514oem\";\n"
"}"));
        stackedWidget->addWidget(Kitchen);
        Garden = new QWidget();
        Garden->setObjectName("Garden");
        gardenbg = new QLabel(Garden);
        gardenbg->setObjectName("gardenbg");
        gardenbg->setGeometry(QRect(0, 0, 971, 421));
        gardenbg->setStyleSheet(QString::fromUtf8("border-image: url(:/images/garden.png);"));
        theGardener = new QLabel(Garden);
        theGardener->setObjectName("theGardener");
        theGardener->setGeometry(QRect(220, 80, 251, 291));
        theGardener->setStyleSheet(QString::fromUtf8("QLabel#theGardener{\n"
"	border-image: url(:/images/theGardener.png);\n"
"}"));
        gardenerCharLabel = new QLabel(Garden);
        gardenerCharLabel->setObjectName("gardenerCharLabel");
        gardenerCharLabel->setGeometry(QRect(290, 340, 131, 20));
        gardenerCharLabel->setStyleSheet(QString::fromUtf8("QLabel#gardenerCharLabel{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 9pt \"8514oem\";\n"
"}"));
        stackedWidget->addWidget(Garden);
        questionPage = new QWidget();
        questionPage->setObjectName("questionPage");
        questionPage->setStyleSheet(QString::fromUtf8("QWidget#questionPage{\n"
"	background-color: rgb(255, 160, 239);\n"
"}"));
        aButton = new QPushButton(questionPage);
        aButton->setObjectName("aButton");
        aButton->setGeometry(QRect(100, 300, 171, 41));
        aButton->setStyleSheet(QString::fromUtf8("QPushButton#aButton{\n"
"background-color:rgb(255, 0, 136);\n"
"font: 700 12pt \"8514oem\";\n"
"}"));
        bButton = new QPushButton(questionPage);
        bButton->setObjectName("bButton");
        bButton->setGeometry(QRect(410, 300, 171, 41));
        bButton->setStyleSheet(QString::fromUtf8("QPushButton#bButton{\n"
"background-color:rgb(255, 0, 136);\n"
"font: 700 12pt \"8514oem\";\n"
"}"));
        cButton = new QPushButton(questionPage);
        cButton->setObjectName("cButton");
        cButton->setGeometry(QRect(710, 300, 171, 41));
        cButton->setStyleSheet(QString::fromUtf8("QPushButton#cButton{\n"
"background-color:rgb(255, 0, 136);\n"
"font: 700 12pt \"8514oem\";\n"
"}"));
        heading = new QLabel(questionPage);
        heading->setObjectName("heading");
        heading->setGeometry(QRect(270, 0, 501, 91));
        heading->setStyleSheet(QString::fromUtf8("QLabel#heading{\n"
"	color: rgb(255, 8, 160);\n"
"	font: 900 48pt \"Segoe UI Black\";\n"
"}"));
        gameOverview = new QLabel(questionPage);
        gameOverview->setObjectName("gameOverview");
        gameOverview->setGeometry(QRect(140, 100, 701, 20));
        gameOverview->setStyleSheet(QString::fromUtf8("QLabel#gameOverview{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 700 12pt \"8514oem\";\n"
"	qproperty-alignment: AlignCenter; \n"
"}"));
        question = new QLabel(questionPage);
        question->setObjectName("question");
        question->setGeometry(QRect(140, 200, 701, 20));
        question->setStyleSheet(QString::fromUtf8("QLabel#question{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 700 12pt \"8514oem\";\n"
"	qproperty-alignment: AlignCenter; \n"
"}"));
        aAnswer = new QLabel(questionPage);
        aAnswer->setObjectName("aAnswer");
        aAnswer->setGeometry(QRect(80, 270, 231, 20));
        aAnswer->setStyleSheet(QString::fromUtf8("QLabel#aAnswer{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 700 12pt \"8514oem\";\n"
"	qproperty-alignment: AlignCenter; \n"
"}"));
        bAnswer = new QLabel(questionPage);
        bAnswer->setObjectName("bAnswer");
        bAnswer->setGeometry(QRect(400, 270, 211, 20));
        bAnswer->setStyleSheet(QString::fromUtf8("QLabel#bAnswer{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 700 12pt \"8514oem\";\n"
"	qproperty-alignment: AlignCenter; \n"
"}"));
        cAnswer = new QLabel(questionPage);
        cAnswer->setObjectName("cAnswer");
        cAnswer->setGeometry(QRect(740, 270, 131, 20));
        cAnswer->setStyleSheet(QString::fromUtf8("QLabel#cAnswer{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 700 12pt \"8514oem\";\n"
"	qproperty-alignment: AlignLeft; \n"
"}"));
        correctness = new QLabel(questionPage);
        correctness->setObjectName("correctness");
        correctness->setGeometry(QRect(150, 360, 691, 51));
        correctness->setStyleSheet(QString::fromUtf8("QLabel#correctness{\n"
"	color: rgb(255, 8, 160);\n"
"	font: 900 32pt \"Segoe UI Black\";\n"
"qproperty-alignment: AlignCenter; \n"
"\n"
"}"));
        stackedWidget->addWidget(questionPage);
        upButton = new QPushButton(centralwidget);
        upButton->setObjectName("upButton");
        upButton->setGeometry(QRect(110, 510, 51, 51));
        upButton->setStyleSheet(QString::fromUtf8("QPushButton#upButton{\n"
"background-color: rgb(253, 209, 129);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 30pt \"Gill Sans Nova Ultra Bold\";\n"
"\n"
"}"));
        downButton = new QPushButton(centralwidget);
        downButton->setObjectName("downButton");
        downButton->setGeometry(QRect(110, 580, 51, 51));
        downButton->setStyleSheet(QString::fromUtf8("QPushButton#downButton{\n"
"background-color: rgb(253, 209, 129);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 30pt \"Gill Sans Nova Ultra Bold\";\n"
"\n"
"}"));
        rightButton = new QPushButton(centralwidget);
        rightButton->setObjectName("rightButton");
        rightButton->setGeometry(QRect(190, 580, 51, 51));
        rightButton->setStyleSheet(QString::fromUtf8("QPushButton#rightButton{\n"
"background-color: rgb(253, 209, 129);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 30pt \"Gill Sans Nova Ultra Bold\";\n"
"\n"
"}"));
        leftButton = new QPushButton(centralwidget);
        leftButton->setObjectName("leftButton");
        leftButton->setGeometry(QRect(30, 580, 51, 51));
        leftButton->setStyleSheet(QString::fromUtf8("QPushButton#leftButton{\n"
"background-color: rgb(253, 209, 129);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 30pt \"Gill Sans Nova Ultra Bold\";\n"
"\n"
"}"));
        PuzzleButton = new QPushButton(centralwidget);
        PuzzleButton->setObjectName("PuzzleButton");
        PuzzleButton->setGeometry(QRect(990, 570, 51, 61));
        PuzzleButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/puzzleIcon.png);"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(8);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        bgImage->setText(QString());
        playButton->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        roombg->setText(QString());
        readyButton->setText(QCoreApplication::translate("MainWindow", "Ready", nullptr));
        mainHallbg->setText(QString());
        phone->setText(QString());
        sittingRoombg->setText(QString());
        theDog->setText(QString());
        dogCharLabel->setText(QCoreApplication::translate("MainWindow", "The Dog", nullptr));
        bedroombg->setText(QString());
        theWife->setText(QString());
        wifeCharLabel->setText(QCoreApplication::translate("MainWindow", "The Wife", nullptr));
        Atticbg->setText(QString());
        theGhost->setText(QString());
        ghostCharLabel->setText(QCoreApplication::translate("MainWindow", "Ella's Ghost", nullptr));
        kitchenbg->setText(QString());
        theChef->setText(QString());
        chefCharLabel->setText(QCoreApplication::translate("MainWindow", "The Chef", nullptr));
        gardenbg->setText(QString());
        theGardener->setText(QString());
        gardenerCharLabel->setText(QCoreApplication::translate("MainWindow", "The Gardener", nullptr));
        aButton->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        bButton->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        cButton->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        heading->setText(QCoreApplication::translate("MainWindow", "Puzzle Time", nullptr));
        gameOverview->setText(QCoreApplication::translate("MainWindow", "quizDescription", nullptr));
        question->setText(QCoreApplication::translate("MainWindow", "\"Question\"", nullptr));
        aAnswer->setText(QCoreApplication::translate("MainWindow", "A answer", nullptr));
        bAnswer->setText(QCoreApplication::translate("MainWindow", "B answer", nullptr));
        cAnswer->setText(QCoreApplication::translate("MainWindow", "C answer", nullptr));
        correctness->setText(QString());
        upButton->setText(QCoreApplication::translate("MainWindow", "\342\206\221", nullptr));
        downButton->setText(QCoreApplication::translate("MainWindow", "\342\206\223", nullptr));
        rightButton->setText(QCoreApplication::translate("MainWindow", "\342\206\222", nullptr));
        leftButton->setText(QCoreApplication::translate("MainWindow", "\342\206\220", nullptr));
        PuzzleButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
