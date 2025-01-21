#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(3);
    QStringList naglowek={"Wiek","Nazwisko","Ranking"};
    ui->tableWidget->setHorizontalHeaderLabels(naglowek);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->logo->setScaledContents(true);
    ui->logo->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
    QPixmap logo("logo2.jpg");
    ui->logo->setPixmap(logo);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_DodajZawodnika_clicked()
{
    Dialog dialog(this);
    if(dialog.exec()==QDialog::Accepted)
    {
        QString nazwisko=dialog.getNazwisko();
        int wiek=dialog.getWiek();
        int ranking=dialog.getRanking();
        int row=ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row);
        ui->tableWidget->setItem(row,0,new QTableWidgetItem(QString::number(wiek)));
        ui->tableWidget->setItem(row,1,new QTableWidgetItem(nazwisko));
        ui->tableWidget->setItem(row,2,new QTableWidgetItem(QString::number(ranking)));
        ui->tableWidget->sortItems(2,Qt::DescendingOrder);
    }
}


void MainWindow::on_Podium_clicked()
{
    QString pierwszy;
    QString drugie;
    QString trzecie;
    int maxpkt=0;

    for (int var = 0; var < ui->tableWidget->rowCount(); ++var)
    {
        if(ui->tableWidget->item(var,2)->text().toInt()>maxpkt)
        {
            pierwszy= ui->tableWidget->item(var,1)->text();
            maxpkt=ui->tableWidget->item(var,2)->text().toInt();
        }

    }


}

