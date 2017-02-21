#include "diagnostics.h"
#include "ui_diagnostics.h"

Diagnostics::Diagnostics(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Diagnostics)
{
    ui->setupUi(this);
    setFixedSize(700,600);
}

Diagnostics::~Diagnostics()
{
    delete ui;
}

void Diagnostics::on_pushButton_1_clicked()
{
         QProcess pingProcess;
        QString ba;
        QString exec = "ping";
        QStringList params;
         params <<"-c " <<"2" <<ui->lineEdit_Address->text();
        pingProcess.start(exec, params);
        pingProcess.waitForFinished();
        QString output=pingProcess.readAllStandardOutput();
        ui->diagnosticresultText->setText(output);
        pingProcess.close();
}
