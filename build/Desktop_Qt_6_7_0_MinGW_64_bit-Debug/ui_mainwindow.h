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
    QWidget *room;
    QLabel *roombg;
    QPushButton *upButton;
    QPushButton *downButton;
    QPushButton *leftButton;
    QPushButton *rightButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1147, 641);
        MainWindow->setMaximumSize(QSize(1151, 641));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 1151, 641));
        stackedWidget->setMaximumSize(QSize(1151, 641));
        titlescreen = new QWidget();
        titlescreen->setObjectName("titlescreen");
        titlescreen->setMaximumSize(QSize(1151, 641));
        titlescreen->setAutoFillBackground(true);
        bgImage = new QLabel(titlescreen);
        bgImage->setObjectName("bgImage");
        bgImage->setGeometry(QRect(0, 0, 1151, 651));
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
        room = new QWidget();
        room->setObjectName("room");
        room->setMaximumSize(QSize(1151, 641));
        room->setAutoFillBackground(true);
        roombg = new QLabel(room);
        roombg->setObjectName("roombg");
        roombg->setGeometry(QRect(-10, 0, 1161, 651));
        roombg->setStyleSheet(QString::fromUtf8("QLabel#roombg{\n"
"border-image: url(:/images/running.png);\n"
"border: none;             \n"
"padding: 0;                \n"
"margin: 0;   \n"
"}\n"
""));
        upButton = new QPushButton(room);
        upButton->setObjectName("upButton");
        upButton->setGeometry(QRect(120, 509, 55, 55));
        upButton->setStyleSheet(QString::fromUtf8("QPushButton#upButton{\n"
"	background-color: rgb(255, 230, 128);\n"
"	color: rgb(0, 0, 0);\n"
"	font: 24pt \"Arial Rounded MT Bold\";\n"
"}"));
        downButton = new QPushButton(room);
        downButton->setObjectName("downButton");
        downButton->setGeometry(QRect(120, 580, 55, 55));
        downButton->setStyleSheet(QString::fromUtf8("QPushButton#downButton{\n"
"	background-color: rgb(255, 230, 128);\n"
"	color: rgb(0, 0, 0);\n"
"	font: 24pt \"Arial Rounded MT Bold\";\n"
"}"));
        leftButton = new QPushButton(room);
        leftButton->setObjectName("leftButton");
        leftButton->setGeometry(QRect(40, 580, 55, 55));
        leftButton->setStyleSheet(QString::fromUtf8("QPushButton#leftButton{\n"
"	background-color: rgb(255, 230, 128);\n"
"	color: rgb(0, 0, 0);\n"
"	font: 24pt \"Arial Rounded MT Bold\";\n"
"}"));
        rightButton = new QPushButton(room);
        rightButton->setObjectName("rightButton");
        rightButton->setGeometry(QRect(200, 580, 55, 55));
        rightButton->setStyleSheet(QString::fromUtf8("QPushButton#rightButton{\n"
"	background-color: rgb(255, 230, 128);\n"
"	color: rgb(0, 0, 0);\n"
"	font: 24pt \"Arial Rounded MT Bold\";\n"
"}"));
        stackedWidget->addWidget(room);
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
        upButton->setText(QCoreApplication::translate("MainWindow", "\342\206\221", nullptr));
        downButton->setText(QCoreApplication::translate("MainWindow", "\342\206\223", nullptr));
        leftButton->setText(QCoreApplication::translate("MainWindow", "\342\206\220", nullptr));
        rightButton->setText(QCoreApplication::translate("MainWindow", "\342\206\222", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
