#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->wybierzDate->setDate(QDate::currentDate());
    ui->tableWidget->setColumnCount(4);
    QStringList naglowek={"Nazwa","Opis","Data","Status"};
    ui->tableWidget->setHorizontalHeaderLabels(naglowek);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->logo->setScaledContents(true);
    ui->logo->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
    QPixmap logo(":/logo.png");
    ui->logo->setPixmap(logo);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Dodajzawodnika_clicked()
{
    Dialog dialog;
    if(dialog.exec()==Dialog::Accepted)
    {
        QString nazwa=dialog.getNazwa();
        QString tresc=dialog.getTresc();
        QString status=dialog.getStatus();
        QDate data=dialog.getData();
        int row=ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row);
        ui->tableWidget->setItem(row,0,new QTableWidgetItem((nazwa)));
        ui->tableWidget->setItem(row,1,new QTableWidgetItem(tresc));
        ui->tableWidget->setItem(row,2,new QTableWidgetItem((data.toString())));
        ui->tableWidget->setItem(row,3,new QTableWidgetItem((status)));
        ui->tableWidget->sortItems(0,Qt::AscendingOrder);
    }
}


void MainWindow::on_ObliczSume_clicked()
{
    int licznik=0;
    for (int var = 0; var < ui->tableWidget->rowCount(); ++var) {
        if(ui->wybierzDate->date().toString()==ui->tableWidget->item(var,2)->text()&&ui->tableWidget->item(var,3)->text()=="Wykonane")
        {
            licznik++;
        }

    }
    ui->lineEdit->setText(QString::number(licznik));

}

