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
#include <QtWidgets/QListWidget>
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
    QLabel *phoneDescription;
    QWidget *sittingRoom;
    QLabel *sittingRoombg;
    QLabel *dogCharLabel;
    QPushButton *theDog;
    QWidget *bedroom;
    QLabel *bedroombg;
    QPushButton *theWife;
    QLabel *wifeCharLabel;
    QWidget *Attic;
    QLabel *Atticbg;
    QLabel *ghostCharLabel;
    QPushButton *theGhost;
    QWidget *Kitchen;
    QLabel *kitchenbg;
    QLabel *chefCharLabel;
    QPushButton *theChef;
    QWidget *Garden;
    QLabel *gardenbg;
    QLabel *gardenerCharLabel;
    QPushButton *theGardener;
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
    QWidget *itemCollectedPage;
    QLabel *wonPageHeading;
    QLabel *itemWon;
    QPushButton *addToInventory;
    QWidget *GuessingPage;
    QLabel *guessingHeading;
    QLabel *guessCounterLabel;
    QPushButton *guessTheWife;
    QPushButton *guessTheChef;
    QPushButton *guessTheGardener;
    QPushButton *guessTheGhost;
    QPushButton *guessTheDog;
    QLabel *guessCounter;
    QWidget *winningPage;
    QLabel *winHeading;
    QLabel *murdererWas_2;
    QLabel *murdererLabel_2;
    QPushButton *winExit;
    QWidget *losingPage;
    QLabel *lostHeading;
    QLabel *murdererWas;
    QLabel *murdererLabel;
    QPushButton *loserExit;
    QPushButton *upButton;
    QPushButton *downButton;
    QPushButton *rightButton;
    QPushButton *leftButton;
    QPushButton *PuzzleButton;
    QLabel *objectDescription;
    QLabel *characterClue;
    QListWidget *inventoryList;
    QLabel *label;
    QPushButton *giveItem;

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
        stackedWidget->setGeometry(QRect(90, 80, 801, 421));
        stackedWidget->setMaximumSize(QSize(1151, 641));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        titlescreen = new QWidget();
        titlescreen->setObjectName("titlescreen");
        titlescreen->setMaximumSize(QSize(1151, 641));
        titlescreen->setAutoFillBackground(false);
        bgImage = new QLabel(titlescreen);
        bgImage->setObjectName("bgImage");
        bgImage->setGeometry(QRect(0, 0, 801, 421));
        bgImage->setStyleSheet(QString::fromUtf8("QLabel#bgImage{\n"
"border-image: url(:/images/main.png); \n"
"border: none;             \n"
"padding: 0;                \n"
"margin: 0;   \n"
"}"));
        playButton = new QPushButton(titlescreen);
        playButton->setObjectName("playButton");
        playButton->setGeometry(QRect(310, 250, 171, 41));
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
        roombg->setGeometry(QRect(0, 0, 801, 421));
        roombg->setStyleSheet(QString::fromUtf8("QLabel#roombg{\n"
"border-image: url(:/images/howToPlay.png);\n"
"border: none;             \n"
"padding: 0;                \n"
"margin: 0;   \n"
"}\n"
""));
        readyButton = new QPushButton(howToPlay);
        readyButton->setObjectName("readyButton");
        readyButton->setGeometry(QRect(310, 340, 171, 51));
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
        mainHallbg->setGeometry(QRect(0, 0, 801, 421));
        mainHallbg->setStyleSheet(QString::fromUtf8("border-image: url(:/images/mainHall.png);"));
        phone = new QPushButton(mainHall);
        phone->setObjectName("phone");
        phone->setGeometry(QRect(350, 150, 131, 81));
        phone->setStyleSheet(QString::fromUtf8("QPushButton#phone{\n"
"	border-image: url(:/images/GuessingPhone.png);\n"
"\n"
"}"));
        phoneDescription = new QLabel(mainHall);
        phoneDescription->setObjectName("phoneDescription");
        phoneDescription->setGeometry(QRect(260, 90, 281, 41));
        phoneDescription->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 15px; border: 3px solid black;\n"
"color: rgb(0, 0, 0);\n"
"font: 700 6pt \"8514oem\";\n"
"qproperty-alignment: AlignCenter; \n"
""));
        stackedWidget->addWidget(mainHall);
        sittingRoom = new QWidget();
        sittingRoom->setObjectName("sittingRoom");
        sittingRoombg = new QLabel(sittingRoom);
        sittingRoombg->setObjectName("sittingRoombg");
        sittingRoombg->setGeometry(QRect(0, 0, 801, 421));
        sittingRoombg->setStyleSheet(QString::fromUtf8("border-image: url(:/images/sittingRoom.png);"));
        dogCharLabel = new QLabel(sittingRoom);
        dogCharLabel->setObjectName("dogCharLabel");
        dogCharLabel->setGeometry(QRect(100, 380, 91, 20));
        dogCharLabel->setStyleSheet(QString::fromUtf8("QLabel#dogCharLabel{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 9pt \"8514oem\";\n"
"}"));
        theDog = new QPushButton(sittingRoom);
        theDog->setObjectName("theDog");
        theDog->setGeometry(QRect(40, 210, 211, 171));
        theDog->setStyleSheet(QString::fromUtf8("border-image: url(:/images/doggo.png);"));
        stackedWidget->addWidget(sittingRoom);
        bedroom = new QWidget();
        bedroom->setObjectName("bedroom");
        bedroombg = new QLabel(bedroom);
        bedroombg->setObjectName("bedroombg");
        bedroombg->setGeometry(QRect(0, 0, 801, 421));
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
        Atticbg->setGeometry(QRect(0, 0, 801, 421));
        Atticbg->setStyleSheet(QString::fromUtf8("border-image: url(:/images/attic.png);"));
        ghostCharLabel = new QLabel(Attic);
        ghostCharLabel->setObjectName("ghostCharLabel");
        ghostCharLabel->setGeometry(QRect(310, 370, 131, 20));
        ghostCharLabel->setStyleSheet(QString::fromUtf8("QLabel#ghostCharLabel{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 9pt \"8514oem\";\n"
"}"));
        theGhost = new QPushButton(Attic);
        theGhost->setObjectName("theGhost");
        theGhost->setGeometry(QRect(330, 220, 111, 151));
        theGhost->setStyleSheet(QString::fromUtf8("QPushButton#theGhost{\n"
"	border-image: url(:/images/theGhost.png);\n"
"}"));
        stackedWidget->addWidget(Attic);
        Kitchen = new QWidget();
        Kitchen->setObjectName("Kitchen");
        kitchenbg = new QLabel(Kitchen);
        kitchenbg->setObjectName("kitchenbg");
        kitchenbg->setGeometry(QRect(0, 0, 801, 421));
        kitchenbg->setStyleSheet(QString::fromUtf8("border-image: url(:/images/kitchen.png);"));
        chefCharLabel = new QLabel(Kitchen);
        chefCharLabel->setObjectName("chefCharLabel");
        chefCharLabel->setGeometry(QRect(60, 310, 91, 20));
        chefCharLabel->setStyleSheet(QString::fromUtf8("QLabel#chefCharLabel{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 9pt \"8514oem\";\n"
"}"));
        theChef = new QPushButton(Kitchen);
        theChef->setObjectName("theChef");
        theChef->setGeometry(QRect(30, 170, 141, 121));
        theChef->setStyleSheet(QString::fromUtf8("border-image: url(:/images/theChef.gif);"));
        stackedWidget->addWidget(Kitchen);
        Garden = new QWidget();
        Garden->setObjectName("Garden");
        gardenbg = new QLabel(Garden);
        gardenbg->setObjectName("gardenbg");
        gardenbg->setGeometry(QRect(0, 0, 801, 421));
        gardenbg->setStyleSheet(QString::fromUtf8("border-image: url(:/images/garden.png);"));
        gardenerCharLabel = new QLabel(Garden);
        gardenerCharLabel->setObjectName("gardenerCharLabel");
        gardenerCharLabel->setGeometry(QRect(460, 320, 131, 20));
        gardenerCharLabel->setStyleSheet(QString::fromUtf8("QLabel#gardenerCharLabel{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 9pt \"8514oem\";\n"
"}"));
        theGardener = new QPushButton(Garden);
        theGardener->setObjectName("theGardener");
        theGardener->setGeometry(QRect(360, 80, 321, 261));
        theGardener->setStyleSheet(QString::fromUtf8("border-image: url(:/images/theGardener.png);"));
        stackedWidget->addWidget(Garden);
        questionPage = new QWidget();
        questionPage->setObjectName("questionPage");
        questionPage->setStyleSheet(QString::fromUtf8("QWidget#questionPage{\n"
"	background-color: rgb(255, 160, 239);\n"
"}"));
        aButton = new QPushButton(questionPage);
        aButton->setObjectName("aButton");
        aButton->setGeometry(QRect(30, 320, 171, 41));
        aButton->setStyleSheet(QString::fromUtf8("QPushButton#aButton{\n"
"background-color:rgb(255, 0, 136);\n"
"font: 700 12pt \"8514oem\";\n"
"}"));
        bButton = new QPushButton(questionPage);
        bButton->setObjectName("bButton");
        bButton->setGeometry(QRect(280, 320, 171, 41));
        bButton->setStyleSheet(QString::fromUtf8("QPushButton#bButton{\n"
"background-color:rgb(255, 0, 136);\n"
"font: 700 12pt \"8514oem\";\n"
"}"));
        cButton = new QPushButton(questionPage);
        cButton->setObjectName("cButton");
        cButton->setGeometry(QRect(560, 320, 171, 41));
        cButton->setStyleSheet(QString::fromUtf8("QPushButton#cButton{\n"
"background-color:rgb(255, 0, 136);\n"
"font: 700 12pt \"8514oem\";\n"
"}"));
        heading = new QLabel(questionPage);
        heading->setObjectName("heading");
        heading->setGeometry(QRect(140, 0, 501, 91));
        heading->setStyleSheet(QString::fromUtf8("QLabel#heading{\n"
"	color: rgb(255, 8, 160);\n"
"	font: 900 48pt \"Segoe UI Black\";\n"
"}"));
        gameOverview = new QLabel(questionPage);
        gameOverview->setObjectName("gameOverview");
        gameOverview->setGeometry(QRect(30, 100, 701, 20));
        gameOverview->setStyleSheet(QString::fromUtf8("QLabel#gameOverview{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 700 12pt \"8514oem\";\n"
"	qproperty-alignment: AlignCenter; \n"
"}"));
        question = new QLabel(questionPage);
        question->setObjectName("question");
        question->setGeometry(QRect(30, 160, 701, 20));
        question->setStyleSheet(QString::fromUtf8("QLabel#question{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 700 12pt \"8514oem\";\n"
"	qproperty-alignment: AlignCenter; \n"
"}"));
        aAnswer = new QLabel(questionPage);
        aAnswer->setObjectName("aAnswer");
        aAnswer->setGeometry(QRect(10, 290, 231, 20));
        aAnswer->setStyleSheet(QString::fromUtf8("QLabel#aAnswer{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 700 12pt \"8514oem\";\n"
"	qproperty-alignment: AlignCenter; \n"
"}"));
        bAnswer = new QLabel(questionPage);
        bAnswer->setObjectName("bAnswer");
        bAnswer->setGeometry(QRect(270, 290, 211, 20));
        bAnswer->setStyleSheet(QString::fromUtf8("QLabel#bAnswer{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 700 12pt \"8514oem\";\n"
"	qproperty-alignment: AlignCenter; \n"
"}"));
        cAnswer = new QLabel(questionPage);
        cAnswer->setObjectName("cAnswer");
        cAnswer->setGeometry(QRect(580, 290, 131, 20));
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
        itemCollectedPage = new QWidget();
        itemCollectedPage->setObjectName("itemCollectedPage");
        itemCollectedPage->setStyleSheet(QString::fromUtf8("QWidget#itemCollectedPage{\n"
"background-color: rgb(255, 160, 239);\n"
"}"));
        wonPageHeading = new QLabel(itemCollectedPage);
        wonPageHeading->setObjectName("wonPageHeading");
        wonPageHeading->setGeometry(QRect(130, 0, 501, 91));
        wonPageHeading->setStyleSheet(QString::fromUtf8("QLabel#wonPageHeading{\n"
"	color: rgb(255, 8, 160);\n"
"	font: 900 48pt \"Segoe UI Black\";\n"
"}"));
        itemWon = new QLabel(itemCollectedPage);
        itemWon->setObjectName("itemWon");
        itemWon->setGeometry(QRect(180, 140, 351, 101));
        itemWon->setStyleSheet(QString::fromUtf8("QLabel#itemWon{\n"
"	color: rgb(0, 0, 0);\n"
"	\n"
"	font: 500 16pt \"Neue Haas Grotesk Text Pro Medi\";\n"
"	qproperty-alignment: AlignCenter; \n"
"}"));
        addToInventory = new QPushButton(itemCollectedPage);
        addToInventory->setObjectName("addToInventory");
        addToInventory->setGeometry(QRect(240, 290, 251, 61));
        addToInventory->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 8, 160);\n"
"border-radius: 15px; border: 5px solid black;\n"
"color: rgb(0, 0, 0);\n"
"font: 500 12pt \"Neue Haas Grotesk Text Pro Medi\";\n"
"qproperty-alignment: AlignCenter; "));
        stackedWidget->addWidget(itemCollectedPage);
        GuessingPage = new QWidget();
        GuessingPage->setObjectName("GuessingPage");
        GuessingPage->setStyleSheet(QString::fromUtf8("QWidget#GuessingPage{\n"
"	background-color: rgb(255, 255, 255);\n"
"	border: 5px solid rgb(236, 91, 200);\n"
"}"));
        guessingHeading = new QLabel(GuessingPage);
        guessingHeading->setObjectName("guessingHeading");
        guessingHeading->setGeometry(QRect(140, 20, 491, 101));
        guessingHeading->setStyleSheet(QString::fromUtf8("QLabel#guessingHeading{\n"
"	font: 900 48pt \"Segoe UI Black\";\n"
"color: rgb(248, 8, 156);\n"
"}\n"
""));
        guessCounterLabel = new QLabel(GuessingPage);
        guessCounterLabel->setObjectName("guessCounterLabel");
        guessCounterLabel->setGeometry(QRect(190, 120, 221, 51));
        guessCounterLabel->setStyleSheet(QString::fromUtf8("QLabel#guessCounterLabel{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 20pt \"MS UI Gothic\";\n"
"}"));
        guessTheWife = new QPushButton(GuessingPage);
        guessTheWife->setObjectName("guessTheWife");
        guessTheWife->setGeometry(QRect(140, 360, 171, 51));
        guessTheWife->setStyleSheet(QString::fromUtf8("QPushButton#guessTheWife{\n"
"background-color: rgb(255, 8, 160);\n"
"border-radius: 15px; border: 5px solid black;\n"
"color: rgb(0, 0, 0);\n"
"font: 500 12pt \"Neue Haas Grotesk Text Pro Medi\";\n"
"qproperty-alignment: AlignCenter; \n"
"}"));
        guessTheChef = new QPushButton(GuessingPage);
        guessTheChef->setObjectName("guessTheChef");
        guessTheChef->setGeometry(QRect(420, 190, 171, 51));
        guessTheChef->setStyleSheet(QString::fromUtf8("QPushButton#guessTheChef{\n"
"background-color: rgb(255, 8, 160);\n"
"border-radius: 15px; border: 5px solid black;\n"
"color: rgb(0, 0, 0);\n"
"font: 500 12pt \"Neue Haas Grotesk Text Pro Medi\";\n"
"qproperty-alignment: AlignCenter; \n"
"}"));
        guessTheGardener = new QPushButton(GuessingPage);
        guessTheGardener->setObjectName("guessTheGardener");
        guessTheGardener->setGeometry(QRect(430, 360, 171, 51));
        guessTheGardener->setStyleSheet(QString::fromUtf8("QPushButton#guessTheGardener{\n"
"background-color: rgb(255, 8, 160);\n"
"border-radius: 15px; border: 5px solid black;\n"
"color: rgb(0, 0, 0);\n"
"font: 500 12pt \"Neue Haas Grotesk Text Pro Medi\";\n"
"qproperty-alignment: AlignCenter; \n"
"}"));
        guessTheGhost = new QPushButton(GuessingPage);
        guessTheGhost->setObjectName("guessTheGhost");
        guessTheGhost->setGeometry(QRect(160, 190, 171, 51));
        guessTheGhost->setStyleSheet(QString::fromUtf8("QPushButton#guessTheGhost{\n"
"background-color: rgb(255, 8, 160);\n"
"border-radius: 15px; border: 5px solid black;\n"
"color: rgb(0, 0, 0);\n"
"font: 500 12pt \"Neue Haas Grotesk Text Pro Medi\";\n"
"qproperty-alignment: AlignCenter; \n"
"}"));
        guessTheDog = new QPushButton(GuessingPage);
        guessTheDog->setObjectName("guessTheDog");
        guessTheDog->setGeometry(QRect(290, 270, 171, 51));
        guessTheDog->setStyleSheet(QString::fromUtf8("QPushButton#guessTheDog{\n"
"background-color: rgb(255, 8, 160);\n"
"border-radius: 15px; border: 5px solid black;\n"
"color: rgb(0, 0, 0);\n"
"font: 500 12pt \"Neue Haas Grotesk Text Pro Medi\";\n"
"qproperty-alignment: AlignCenter; \n"
"}"));
        guessCounter = new QLabel(GuessingPage);
        guessCounter->setObjectName("guessCounter");
        guessCounter->setGeometry(QRect(420, 120, 51, 51));
        guessCounter->setStyleSheet(QString::fromUtf8("QLabel#guessCounter{\n"
"	font: 700 23pt \"Malgun Gothic\";\n"
"	color: rgb(0, 0, 0);\n"
"}"));
        stackedWidget->addWidget(GuessingPage);
        winningPage = new QWidget();
        winningPage->setObjectName("winningPage");
        winningPage->setStyleSheet(QString::fromUtf8("background-color: rgb(251, 107, 162);"));
        winHeading = new QLabel(winningPage);
        winHeading->setObjectName("winHeading");
        winHeading->setGeometry(QRect(190, 110, 491, 101));
        winHeading->setStyleSheet(QString::fromUtf8("QLabel#winHeading{\n"
"	font: 900 48pt \"Segoe UI Black\";\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
""));
        murdererWas_2 = new QLabel(winningPage);
        murdererWas_2->setObjectName("murdererWas_2");
        murdererWas_2->setGeometry(QRect(140, 210, 531, 51));
        murdererWas_2->setStyleSheet(QString::fromUtf8("QLabel#murdererWas_2{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 20pt \"MS UI Gothic\";\n"
"}"));
        murdererLabel_2 = new QLabel(winningPage);
        murdererLabel_2->setObjectName("murdererLabel_2");
        murdererLabel_2->setGeometry(QRect(110, 260, 551, 51));
        murdererLabel_2->setStyleSheet(QString::fromUtf8("QLabel#murdererLabel_2{\n"
"	font: 700 23pt \"Malgun Gothic\";\n"
"	color: rgb(0, 0, 0);\n"
"	qproperty-alignment: AlignCenter; \n"
"}"));
        winExit = new QPushButton(winningPage);
        winExit->setObjectName("winExit");
        winExit->setGeometry(QRect(260, 330, 251, 61));
        winExit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 8, 160);\n"
"border-radius: 15px; border: 5px solid black;\n"
"color: rgb(0, 0, 0);\n"
"font: 500 12pt \"Neue Haas Grotesk Text Pro Medi\";\n"
"qproperty-alignment: AlignCenter; "));
        stackedWidget->addWidget(winningPage);
        losingPage = new QWidget();
        losingPage->setObjectName("losingPage");
        losingPage->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lostHeading = new QLabel(losingPage);
        lostHeading->setObjectName("lostHeading");
        lostHeading->setGeometry(QRect(200, 90, 491, 101));
        lostHeading->setStyleSheet(QString::fromUtf8("QLabel#lostHeading{\n"
"	font: 900 48pt \"Segoe UI Black\";\n"
"	color: rgb(248, 8, 156);\n"
"}\n"
""));
        murdererWas = new QLabel(losingPage);
        murdererWas->setObjectName("murdererWas");
        murdererWas->setGeometry(QRect(270, 210, 261, 51));
        murdererWas->setStyleSheet(QString::fromUtf8("QLabel#murdererWas{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 20pt \"MS UI Gothic\";\n"
"}"));
        murdererLabel = new QLabel(losingPage);
        murdererLabel->setObjectName("murdererLabel");
        murdererLabel->setGeometry(QRect(120, 270, 551, 51));
        murdererLabel->setStyleSheet(QString::fromUtf8("QLabel#murdererLabel{\n"
"	font: 700 23pt \"Malgun Gothic\";\n"
"	color: rgb(0, 0, 0);\n"
"	qproperty-alignment: AlignCenter; \n"
"}"));
        loserExit = new QPushButton(losingPage);
        loserExit->setObjectName("loserExit");
        loserExit->setGeometry(QRect(270, 340, 251, 61));
        loserExit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 8, 160);\n"
"border-radius: 15px; border: 5px solid black;\n"
"color: rgb(0, 0, 0);\n"
"font: 500 12pt \"Neue Haas Grotesk Text Pro Medi\";\n"
"qproperty-alignment: AlignCenter; "));
        stackedWidget->addWidget(losingPage);
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
        PuzzleButton->setGeometry(QRect(910, 580, 51, 61));
        PuzzleButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/puzzleIcon.png);"));
        objectDescription = new QLabel(centralwidget);
        objectDescription->setObjectName("objectDescription");
        objectDescription->setGeometry(QRect(770, 510, 281, 41));
        objectDescription->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 15px; border: 5px solid white;\n"
"color: rgb(0, 0, 0);\n"
"font: 700 6pt \"8514oem\";\n"
"qproperty-alignment: AlignCenter; \n"
""));
        characterClue = new QLabel(centralwidget);
        characterClue->setObjectName("characterClue");
        characterClue->setGeometry(QRect(110, 20, 941, 41));
        characterClue->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 15px; border: 5px solid white;\n"
"color: rgb(0, 0, 0);\n"
"font: 700 9pt \"8514oem\";\n"
"qproperty-alignment: AlignCenter; \n"
""));
        inventoryList = new QListWidget(centralwidget);
        inventoryList->setObjectName("inventoryList");
        inventoryList->setGeometry(QRect(890, 150, 161, 341));
        inventoryList->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(890, 80, 161, 71));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(251, 107, 162);\n"
"font: 600 18pt \"Verdana Pro Semibold\";\n"
"color: rgb(255, 255, 255);"));
        giveItem = new QPushButton(centralwidget);
        giveItem->setObjectName("giveItem");
        giveItem->setGeometry(QRect(500, 570, 251, 61));
        giveItem->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 8, 160);\n"
"border-radius: 15px; border: 5px solid black;\n"
"color: rgb(0, 0, 0);\n"
"font: 500 12pt \"Neue Haas Grotesk Text Pro Medi\";\n"
"qproperty-alignment: AlignCenter; "));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(12);


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
        phoneDescription->setText(QString());
        sittingRoombg->setText(QString());
        dogCharLabel->setText(QCoreApplication::translate("MainWindow", "The Dog", nullptr));
        theDog->setText(QString());
        bedroombg->setText(QString());
        theWife->setText(QString());
        wifeCharLabel->setText(QCoreApplication::translate("MainWindow", "The Wife", nullptr));
        Atticbg->setText(QString());
        ghostCharLabel->setText(QCoreApplication::translate("MainWindow", "Ella's Ghost", nullptr));
        theGhost->setText(QString());
        kitchenbg->setText(QString());
        chefCharLabel->setText(QCoreApplication::translate("MainWindow", "The Chef", nullptr));
        theChef->setText(QString());
        gardenbg->setText(QString());
        gardenerCharLabel->setText(QCoreApplication::translate("MainWindow", "The Gardener", nullptr));
        theGardener->setText(QString());
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
        wonPageHeading->setText(QCoreApplication::translate("MainWindow", "You Won...", nullptr));
        itemWon->setText(QCoreApplication::translate("MainWindow", "placeholder", nullptr));
        addToInventory->setText(QCoreApplication::translate("MainWindow", "Add to Inventory", nullptr));
        guessingHeading->setText(QCoreApplication::translate("MainWindow", "Whodunnit?", nullptr));
        guessCounterLabel->setText(QCoreApplication::translate("MainWindow", "Guesses Left: ", nullptr));
        guessTheWife->setText(QCoreApplication::translate("MainWindow", "The Wife", nullptr));
        guessTheChef->setText(QCoreApplication::translate("MainWindow", "The Chef", nullptr));
        guessTheGardener->setText(QCoreApplication::translate("MainWindow", "The Gardener", nullptr));
        guessTheGhost->setText(QCoreApplication::translate("MainWindow", "The Ghost", nullptr));
        guessTheDog->setText(QCoreApplication::translate("MainWindow", "The Dog", nullptr));
        guessCounter->setText(QCoreApplication::translate("MainWindow", "-1", nullptr));
        winHeading->setText(QCoreApplication::translate("MainWindow", "You Won!", nullptr));
        murdererWas_2->setText(QCoreApplication::translate("MainWindow", "You correctly guessed the murderer:", nullptr));
        murdererLabel_2->setText(QCoreApplication::translate("MainWindow", "the friends we made all along", nullptr));
        winExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        lostHeading->setText(QCoreApplication::translate("MainWindow", "You Lost!", nullptr));
        murdererWas->setText(QCoreApplication::translate("MainWindow", "The Murderer was: ", nullptr));
        murdererLabel->setText(QCoreApplication::translate("MainWindow", "the friends we made all along", nullptr));
        loserExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        upButton->setText(QCoreApplication::translate("MainWindow", "\342\206\221", nullptr));
        downButton->setText(QCoreApplication::translate("MainWindow", "\342\206\223", nullptr));
        rightButton->setText(QCoreApplication::translate("MainWindow", "\342\206\222", nullptr));
        leftButton->setText(QCoreApplication::translate("MainWindow", "\342\206\220", nullptr));
        PuzzleButton->setText(QString());
        objectDescription->setText(QString());
        characterClue->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Inventory", nullptr));
        giveItem->setText(QCoreApplication::translate("MainWindow", "Give Item", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
