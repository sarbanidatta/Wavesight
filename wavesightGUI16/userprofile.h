#ifndef USERPROFILE_H
#define USERPROFILE_H

#include <QWidget>
#include"databaseconnection.h"
#include<QMessageBox>
namespace Ui {
class UserProfile;
}

class UserProfile : public QWidget
{
    Q_OBJECT

public:
    explicit UserProfile(QWidget *parent = 0);
    ~UserProfile();
    void setProfileData(QString data);
private slots:


    void on_label_EmailEdit_linkActivated(const QString &link);


    void on_label_ContactEdit_linkActivated(const QString &link);

    void on_label_PasswordEdit_linkActivated(const QString &link);

    void on_label_EmailUpdate_linkActivated(const QString &link);

    void on_label_ContactUpdate_linkActivated(const QString &link);

    void on_label_CPasswordUpdate_linkActivated(const QString &link);

private:
    Ui::UserProfile *ui;
    databaseConnection *dbc;
};

#endif // USERPROFILE_H
