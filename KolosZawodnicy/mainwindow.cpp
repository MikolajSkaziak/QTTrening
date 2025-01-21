#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
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
    QPixmap pixmap("./logo123.jpg");
    ui->logo->setPixmap(pixmap.scaled(ui->logo->size(),Qt::KeepAspectRatio, Qt::SmoothTransformation));
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
    QString pierwszy, drugie, trzecie;
    int max1 = 0, max2 = 0, max3 = 0;

    for (int i = 0; i < ui->tableWidget->rowCount(); ++i)
    {
        int punkty = ui->tableWidget->item(i, 2)->text().toInt();
        QString nazwisko = ui->tableWidget->item(i, 1)->text();

        if (punkty > max1) {
            max3 = max2;
            trzecie = drugie;
            max2 = max1;
            drugie = pierwszy;
            max1 = punkty;
            pierwszy = nazwisko;
        }
        else if (punkty > max2) {
            max3 = max2;
            trzecie = drugie;
            max2 = punkty;
            drugie = nazwisko;
        }
        else if (punkty > max3) {
            max3 = punkty;
            trzecie = nazwisko;
        }
    }

    QMessageBox::information(this, "Podium", "1. " + pierwszy + "\n2. " + drugie + "\n3. " + trzecie);
}

