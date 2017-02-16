#include "commissiontool.h"
#include "ui_commissiontool.h"

CommissionTool::CommissionTool(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CommissionTool)
{
    ui->setupUi(this);
}

CommissionTool::~CommissionTool()
{
    delete ui;
}
