/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *logo;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QDateEdit *wybierzDate;
    QPushButton *ObliczSume;
    QPushButton *Dodajzawodnika;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");

        verticalLayout_2->addWidget(tableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        logo = new QLabel(centralwidget);
        logo->setObjectName("logo");

        horizontalLayout->addWidget(logo);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);

        wybierzDate = new QDateEdit(centralwidget);
        wybierzDate->setObjectName("wybierzDate");

        verticalLayout->addWidget(wybierzDate);

        ObliczSume = new QPushButton(centralwidget);
        ObliczSume->setObjectName("ObliczSume");

        verticalLayout->addWidget(ObliczSume);


        horizontalLayout->addLayout(verticalLayout);

        Dodajzawodnika = new QPushButton(centralwidget);
        Dodajzawodnika->setObjectName("Dodajzawodnika");

        horizontalLayout->addWidget(Dodajzawodnika);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 3);
        horizontalLayout->setStretch(2, 3);

        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        logo->setText(QCoreApplication::translate("MainWindow", "logo", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Suma wykonanych zada\305\204:", nullptr));
        ObliczSume->setText(QCoreApplication::translate("MainWindow", "Oblicz sume", nullptr));
        Dodajzawodnika->setText(QCoreApplication::translate("MainWindow", "Dodaj Zadanie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
