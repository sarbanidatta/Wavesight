#ifndef Diagnostics_H
#define Diagnostics_H

#include <QDialog>
#include<QProcess>

namespace Ui {
class Diagnostics;
}

class Diagnostics : public QDialog
{
    Q_OBJECT

public:
    explicit Diagnostics(QWidget *parent = 0);
    ~Diagnostics();

private slots:
    void on_pushButton_1_clicked();

private:
    Ui::Diagnostics *ui;
};

#endif // Diagnostics_H
