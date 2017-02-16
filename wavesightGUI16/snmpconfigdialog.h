#ifndef SNMPCONFIGDIALOG_H
#define SNMPCONFIGDIALOG_H
#include "commonconfigurationdialog.h"
#include "wifyconfigurationdialog.h"
#include <QDialog>
#include<QPointer>

namespace Ui {
class SnmpConfigDialog;
}

class SnmpConfigDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SnmpConfigDialog(QWidget *parent = 0);
    void closeAll();
    ~SnmpConfigDialog();

private slots:
    void on_pushButton_edit_5_clicked();

    void on_pushButton_34_clicked();

private:
    Ui::SnmpConfigDialog *ui;
   // QPointer<
    CommonConfigurationDialog *ccd;
    //QPointer<
    WifyConfigurationDialog *wcd;
};

#endif // SNMPCONFIGDIALOG_H
