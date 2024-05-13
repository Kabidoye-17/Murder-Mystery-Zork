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
    QWidget *sittingRoom;
    QLabel *sittingRoombg;
    QWidget *bedroom;
    QLabel *bedroombg;
    QPushButton *theWife;
    QWidget *mainHall;
    QLabel *mainHallbg;
    QWidget *Attic;
    QLabel *Atticbg;
    QWidget *Kitchen;
    QLabel *kitchenbg;
    QWidget *Garden;
    QLabel *gardenbg;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1151, 641);
        MainWindow->setMaximumSize(QSize(1151, 641));
        MainWindow->setStyleSheet(QString::fromUtf8("border-image: url(:/images/main.png);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
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
        bgImage->setGeometry(QRect(-20, -10, 1151, 651));
        bgImage->setStyleSheet(QString::fromUtf8("QLabel#bgImage{\n"
"border-image: url(:/images/main.png); \n"
"border: none;             \n"
"padding: 0;                \n"
"margin: 0;   \n"
"}"));
        playButton = new QPushButton(titlescreen);
        playButton->setObjectName("playButton");
        playButton->setGeometry(QRect(480, 320, 191, 51));
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
        readyButton->setGeometry(QRect(480, 430, 191, 51));
        readyButton->setStyleSheet(QString::fromUtf8("QPushButton#readyButton{\n"
"	background-color: rgb(255, 140, 253);\n"
"	color: rgb(0, 0, 0);\n"
"	font: 700 12pt \"8514oem\";\n"
"}"));
        stackedWidget->addWidget(howToPlay);
        sittingRoom = new QWidget();
        sittingRoom->setObjectName("sittingRoom");
        sittingRoombg = new QLabel(sittingRoom);
        sittingRoombg->setObjectName("sittingRoombg");
        sittingRoombg->setGeometry(QRect(0, 0, 971, 421));
        sittingRoombg->setStyleSheet(QString::fromUtf8("border-image: url(:/images/sittingRoom.png);"));
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
        theWife->setGeometry(QRect(170, 80, 131, 191));
        theWife->setStyleSheet(QString::fromUtf8("QPushButton#theWife{\n"
"	border-image: url(:/images/theWife.png);\n"
"}"));
        stackedWidget->addWidget(bedroom);
        mainHall = new QWidget();
        mainHall->setObjectName("mainHall");
        mainHallbg = new QLabel(mainHall);
        mainHallbg->setObjectName("mainHallbg");
        mainHallbg->setGeometry(QRect(0, 0, 971, 421));
        mainHallbg->setStyleSheet(QString::fromUtf8("border-image: url(:/images/mainHall.png);"));
        stackedWidget->addWidget(mainHall);
        Attic = new QWidget();
        Attic->setObjectName("Attic");
        Atticbg = new QLabel(Attic);
        Atticbg->setObjectName("Atticbg");
        Atticbg->setGeometry(QRect(0, 0, 971, 421));
        Atticbg->setStyleSheet(QString::fromUtf8("border-image: url(:/images/attic.png);"));
        stackedWidget->addWidget(Attic);
        Kitchen = new QWidget();
        Kitchen->setObjectName("Kitchen");
        kitchenbg = new QLabel(Kitchen);
        kitchenbg->setObjectName("kitchenbg");
        kitchenbg->setGeometry(QRect(0, 0, 971, 421));
        kitchenbg->setStyleSheet(QString::fromUtf8("border-image: url(:/images/kitchen.png);"));
        stackedWidget->addWidget(Kitchen);
        Garden = new QWidget();
        Garden->setObjectName("Garden");
        gardenbg = new QLabel(Garden);
        gardenbg->setObjectName("gardenbg");
        gardenbg->setGeometry(QRect(0, 0, 971, 421));
        gardenbg->setStyleSheet(QString::fromUtf8("border-image: url(:/images/garden.png);"));
        stackedWidget->addWidget(Garden);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        bgImage->setText(QString());
        playButton->setText(QCoreApplication::translate("MainWindow", "PLAY", nullptr));
        roombg->setText(QString());
        readyButton->setText(QCoreApplication::translate("MainWindow", "Ready", nullptr));
        sittingRoombg->setText(QString());
        bedroombg->setText(QString());
        theWife->setText(QString());
        mainHallbg->setText(QString());
        Atticbg->setText(QString());
        kitchenbg->setText(QString());
        gardenbg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
