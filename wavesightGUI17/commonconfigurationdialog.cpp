#include "commonconfigurationdialog.h"
#include "ui_commonconfigurationdialog.h"

CommonConfigurationDialog::CommonConfigurationDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CommonConfigurationDialog)
{
    ui->setupUi(this);
    setFixedSize(700,500);
}

CommonConfigurationDialog::~CommonConfigurationDialog()
{
    delete ui;
}
