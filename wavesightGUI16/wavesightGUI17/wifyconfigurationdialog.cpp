#include "wifyconfigurationdialog.h"
#include "ui_wifyconfigurationdialog.h"

WifyConfigurationDialog::WifyConfigurationDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WifyConfigurationDialog)
{
    ui->setupUi(this);
    setFixedSize(800,700);
}

WifyConfigurationDialog::~WifyConfigurationDialog()
{
    delete ui;
}
