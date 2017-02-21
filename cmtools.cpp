#include "cmtools.h"
#include "ui_cmtools.h"

Cmtools::Cmtools(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cmtools)
{
    ui->setupUi(this);
    setFixedSize(1000,600);
}

Cmtools::~Cmtools()
{
    delete ui;
}
