#ifndef Home_H
#define Home_H

#include <QWidget>
#include "snmpconfigdialog.h"
#include "diagnostics.h"
#include "cmtools.h"
#include "multipledevices.h"
#include"userprofile.h"
#include "databaseconnection.h"
#include<QTimer>
#include<QSizePolicy>



namespace Ui {
class Home;
}

class Home : public QWidget
{
    Q_OBJECT

public:
    explicit Home(QWidget *parent = 0);
    void deviceList();

    ~Home();

private slots:
 void message();
    void on_pushButton_snmp_clicked();

    void on_pushButton_login_clicked();

    void on_pushButton_logout_clicked();

    void on_pushButton_commissioning_clicked();

    void on_pushButton_diagnostics_clicked();

    void on_pushButton_multidevices_clicked();

    void on_pushButton_reset_clicked();

    void on_lineEdit_password_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_password_editingFinished();

    void on_pushbutton_profile_clicked();

    void on_pushButton_selectall_clicked();

    void on_pushButton_deselect_clicked();

    void on_pushButton_adminSave_clicked();

private:

    QPointer< SnmpConfigDialog> snmp;
    QPointer <Cmtools> cmt;
    QPointer<MultipleDevices> md;
    QPointer<Diagnostics> diag;
    QPointer<UserProfile> up;
    databaseConnection *dbconnection;
     QTimer m_timer;
 Ui::Home *ui;


};

#endif // Home_H
