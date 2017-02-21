#ifndef CMTOOLS_H
#define CMTOOLS_H

#include <QDialog>

namespace Ui {
class Cmtools;
}

class Cmtools : public QDialog
{
    Q_OBJECT

public:
    explicit Cmtools(QWidget *parent = 0);
    ~Cmtools();

private:
    Ui::Cmtools *ui;
};

#endif // CMTOOLS_H
