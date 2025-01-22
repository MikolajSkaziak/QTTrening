#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    QString getNazwa();
    QString getTresc();
    QDate getData();
    QString getStatus();

private slots:

    void on_nazwa_textChanged(const QString &arg1);

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
