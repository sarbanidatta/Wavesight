#ifndef WIFYCONFIGURATIONDIALOG_H
#define WIFYCONFIGURATIONDIALOG_H

#include <QDialog>

namespace Ui {
class WifyConfigurationDialog;
}

class WifyConfigurationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit WifyConfigurationDialog(QWidget *parent = 0);
    ~WifyConfigurationDialog();

private:
    Ui::WifyConfigurationDialog *ui;
};

#endif // WIFYCONFIGURATIONDIALOG_H
