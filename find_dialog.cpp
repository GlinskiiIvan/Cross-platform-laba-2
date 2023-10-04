#include "find_dialog.h"
#include "ui_find_dialog.h"
#include <QStringList>

Find_Dialog::Find_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Find_Dialog)
{
    ui->setupUi(this);
    ui->find_button->setEnabled(!(ui->find_lineEdit->text().isEmpty()));

    QStringList list_items;
    list_items << "Везде" << "В начале" << "В конце";

    ui->comboBox->addItems(list_items);
}

Find_Dialog::~Find_Dialog()
{
    delete ui;
}
