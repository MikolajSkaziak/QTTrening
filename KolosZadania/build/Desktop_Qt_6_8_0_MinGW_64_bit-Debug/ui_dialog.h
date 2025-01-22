/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *nazwa;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QTextEdit *tresc;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QDateEdit *czas;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QComboBox *status;
    QHBoxLayout *horizontalLayout;
    QPushButton *OK;
    QPushButton *Anuluj;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(310, 277);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        nazwa = new QLineEdit(Dialog);
        nazwa->setObjectName("nazwa");

        verticalLayout_2->addWidget(nazwa);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_4 = new QLabel(Dialog);
        label_4->setObjectName("label_4");

        verticalLayout_4->addWidget(label_4);

        tresc = new QTextEdit(Dialog);
        tresc->setObjectName("tresc");

        verticalLayout_4->addWidget(tresc);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(Dialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        czas = new QDateEdit(Dialog);
        czas->setObjectName("czas");

        verticalLayout->addWidget(czas);


        verticalLayout_5->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(Dialog);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3);

        status = new QComboBox(Dialog);
        status->addItem(QString());
        status->addItem(QString());
        status->setObjectName("status");

        verticalLayout_3->addWidget(status);


        verticalLayout_5->addLayout(verticalLayout_3);


        verticalLayout_6->addLayout(verticalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        OK = new QPushButton(Dialog);
        OK->setObjectName("OK");

        horizontalLayout->addWidget(OK);

        Anuluj = new QPushButton(Dialog);
        Anuluj->setObjectName("Anuluj");

        horizontalLayout->addWidget(Anuluj);


        verticalLayout_6->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_6, 0, 0, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Nazwa zadania:", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "Tre\305\233\304\207 zadania", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Ustaw dat\304\231:", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Ustaw status:", nullptr));
        status->setItemText(0, QCoreApplication::translate("Dialog", "Wykonane", nullptr));
        status->setItemText(1, QCoreApplication::translate("Dialog", "Niewykonane", nullptr));

        OK->setText(QCoreApplication::translate("Dialog", "OK", nullptr));
        Anuluj->setText(QCoreApplication::translate("Dialog", "Anuluj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
