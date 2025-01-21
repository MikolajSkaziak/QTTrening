#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->OK,&QPushButton::clicked,this,&Dialog::accept);
    connect(ui->Anuluj,&QPushButton::clicked,this,&Dialog::reject);

}

Dialog::~Dialog()
{
    delete ui;
}

QString Dialog::getImie()
{
    return ui->lineEdit->text().split(" ").first();
}

QString Dialog::getNazwisko()
{
    return ui->lineEdit->text().split(" ").back();
}

int Dialog::getIloscPKT()
{
    return ui->spinBox->value();
}

