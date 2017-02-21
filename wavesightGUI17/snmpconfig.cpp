#include "snmpconfig.h"
#include "ui_snmpconfig.h"
#include "commonconfigurationdialog.h"
#include "wifyconfigurationdialog.h"
SnmpConfig::SnmpConfig(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SnmpConfig)
{
    ui->setupUi(this);
    ui->snmpWidget->showMaximized();
    ui->networktabWidget->showMaximized();
    ui->interfaceGroupBox->showMaximized();
}

SnmpConfig::~SnmpConfig()
{
    delete ui;
}

void SnmpConfig::on_pushButton_edit_clicked()
{
CommonConfigurationDialog cd;
cd.setModal(true);
cd.exec();



}

void SnmpConfig::on_pushButton_2_clicked()
{
WifyConfigurationDialog wd;
wd.setModal(true);
wd.exec();

}
