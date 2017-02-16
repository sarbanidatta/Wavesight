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
