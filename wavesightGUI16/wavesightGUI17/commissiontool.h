#ifndef COMMISSIONTOOL_H
#define COMMISSIONTOOL_H

#include <QMainWindow>

namespace Ui {
class CommissionTool;
}

class CommissionTool : public QMainWindow
{
    Q_OBJECT

public:
    explicit CommissionTool(QWidget *parent = 0);
    ~CommissionTool();

private:
    Ui::CommissionTool *ui;
};

#endif // COMMISSIONTOOL_H
