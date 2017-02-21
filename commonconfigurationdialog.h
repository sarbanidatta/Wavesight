#ifndef COMMONCONFIGURATIONDIALOG_H
#define COMMONCONFIGURATIONDIALOG_H

#include <QDialog>

namespace Ui {
class CommonConfigurationDialog;
}

class CommonConfigurationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CommonConfigurationDialog(QWidget *parent = 0);
    ~CommonConfigurationDialog();

private:
    Ui::CommonConfigurationDialog *ui;
};

#endif // COMMONCONFIGURATIONDIALOG_H
