#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->OK->setEnabled(false);
    ui->czas->setDate(QDate::currentDate());
    connect(ui->OK,&QPushButton::clicked,this,&Dialog::accept);
    connect(ui->Anuluj,&QPushButton::clicked,this,&Dialog::reject);
}

Dialog::~Dialog()
{
    delete ui;
}


QString Dialog::getNazwa()
{
    return ui->nazwa->text();
}

QString Dialog::getTresc()
{
    return ui->tresc->toPlainText();
}

QDate Dialog::getData()
{
    return ui->czas->date();
}

QString Dialog::getStatus()
{
    return ui->status->currentText();
}

void Dialog::on_nazwa_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    if(ui->nazwa->text()!=nullptr)
    {
        ui->OK->setEnabled(true);
    }
    else
        ui->OK->setEnabled(false);
}

