#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(3);
    QStringList naglowek={"Nazwisko","Imie","Punkty"};
    ui->tableWidget->setHorizontalHeaderLabels(naglowek);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->logo->setScaledContents(true);
    ui->logo->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
    QPixmap logo("./logo.jpg");
    ui->logo->setPixmap(logo);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    Dialog dialog(this);
    if(dialog.exec()==QDialog::Accepted)
    {
        QString imie=dialog.getImie();
        QString nazwisko=dialog.getNazwisko();
        int punkty=dialog.getIloscPKT();
        listaPunktow.append(punkty);
        int row = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row);
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(nazwisko));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(imie));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(punkty)));
        ui->tableWidget->sortItems(2,Qt::DescendingOrder);
        ui->ProgPrzyjec->setValue(obliczMediane());
    }
}

int MainWindow::obliczMediane()
{

    std::sort(listaPunktow.begin(), listaPunktow.end());

    int n = listaPunktow.size();
    if (n % 2 == 0) {
        return (listaPunktow[n / 2 - 1] + listaPunktow[n / 2]) / 2;
    } else {
        return listaPunktow[n / 2];
    }
}

void MainWindow::on_pushButton_clicked()
{

    ui->lineEdit->setStyleSheet("background-color:green;color:white;");
    QString przyjety;
    for (int var = 0; var < ui->tableWidget->rowCount(); ++var)
    {

        if(ui->ProgPrzyjec->value()<=ui->tableWidget->item(var,2)->text().toInt())
        {
            przyjety=ui->tableWidget->item(var,0)->text();
            QString aktualnytext=ui->lineEdit->text();
            ui->lineEdit->setText(aktualnytext+przyjety+", ");
        }
    }
}



