#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->OK,&QPushButton::clicked,this,&Dialog::accept);
    connect(ui->Anulu,&QPushButton::clicked,this,&Dialog::reject);
}

Dialog::~Dialog()
{
    delete ui;
}

QString Dialog::getNazwisko()
{
    return ui->lineEdit->text();
}

int Dialog::getWiek()
{
    return ui->wiekBox->value();
}

int Dialog::getRanking()
{
    return ui->RankingBox->value();
}

