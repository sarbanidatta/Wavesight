#include "snmpconfigdialog.h"
#include "ui_snmpconfigdialog.h"


SnmpConfigDialog::SnmpConfigDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SnmpConfigDialog)
{
    ui->setupUi(this);
    setFixedSize(1000,700);
}

SnmpConfigDialog::~SnmpConfigDialog()
{
    delete ui;
}

void SnmpConfigDialog::on_pushButton_edit_5_clicked()
{

 ccd=new CommonConfigurationDialog();
 ccd->setModal(true);
 //ccd->setAttribute(Qt::WA_DeleteOnClose,true);
 ccd->exec();
}

void SnmpConfigDialog::on_pushButton_34_clicked()
{
 wcd= new WifyConfigurationDialog();
// wcd->setAttribute(Qt::WA_DeleteOnClose,true);
 wcd->setModal(true);
  wcd->exec();
}
void SnmpConfigDialog::closeAll()
{
    if(ccd)
        ccd->close();
    if(wcd)
        wcd->close();
    this->close();
}
