#include "userprofile.h"
#include "ui_userprofile.h"

UserProfile::UserProfile(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserProfile)
{
    ui->setupUi(this);
    ui->label_EmailEdit->setText("<a href=\"/\">Edit</a>");
    ui->label_EmailEdit->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->label_ContactEdit->setText("<a href=\"/\">Edit</a>");
    ui->label_ContactEdit->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->label_ContactUpdate->setText("<a href=\"/\">Update</a>");
    ui->label_ContactUpdate->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->label_CPasswordUpdate->setText("<a href=\"/\">Update</a>");
    ui->label_CPasswordUpdate->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->label_EmailUpdate->setText("<a href=\"/\">Update</a>");
    ui->label_EmailUpdate->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->label_PasswordEdit->setText("<a href=\"/\">Edit</a>");
    ui->label_PasswordEdit->setTextInteractionFlags(Qt::TextBrowserInteraction);


}

UserProfile::~UserProfile()
{
    delete ui;
}
void UserProfile::setProfileData(QString data)
{
    QSqlQuery result;
    dbc = databaseConnection::getdbInstance();

    result=dbc->extractData("user_id",data);///hm.ui->lineEdit_userid);



    while (result.next()) {
       ui->label_UserProfileUIdText->setText(result.value(0).toString());
       ui->label_UserProfileUNameText->setText(result.value(1).toString());
       ui->label_UserProfileUTypeText->setText(result.value(3).toString());
       ui->lineEdit_UserProfileContactText->setText(result.value(4).toString());
       ui->lineEdit_UserProfileEmailIdText->setText(result.value(5).toString());
      // qDebug()<<"result ="<< result.value(0).toString()<<" "<< result.value(1).toString()<<" "<< result.value(3).toString()<<" "<< result.value(4).toString()<<" "<< result.value(5).toString();

    }


}

void UserProfile::on_label_EmailEdit_linkActivated(const QString &link)
{
    ui->lineEdit_UserProfileEmailIdText->setReadOnly(false);
    ui->lineEdit_UserProfileEmailIdText->setFocus();

}


void UserProfile::on_label_ContactEdit_linkActivated(const QString &link)
{
    ui->lineEdit_UserProfileContactText->setReadOnly(false);
     ui->lineEdit_UserProfileContactText->setFocus();
}

void UserProfile::on_label_PasswordEdit_linkActivated(const QString &link)
{
    ui->lineEdit_UserProfilePasswordText->setReadOnly(false);
    ui->lineEdit_UserProfilePasswordText->setFocus();
}

void UserProfile::on_label_EmailUpdate_linkActivated(const QString &link)
{
    QString id, value,table_name,sfield,cfield;
    table_name = "USER_TABLE";
    sfield="email";
    cfield="user_id";
   id =  ui->label_UserProfileUIdText->text();
   value =  ui->lineEdit_UserProfileEmailIdText->text();
   dbc->updateValue(table_name,sfield,value,cfield,id);
}

void UserProfile::on_label_ContactUpdate_linkActivated(const QString &link)
{

    QString id, value,table_name,sfield,cfield;
    table_name = "USER_TABLE";
    sfield="contact";
    cfield="user_id";
   id =  ui->label_UserProfileUIdText->text();
   value =  ui->lineEdit_UserProfileContactText->text();

   dbc->updateValue(table_name,sfield,value,cfield,id);
}

void UserProfile::on_label_CPasswordUpdate_linkActivated(const QString &link)
{
    QString id, value,table_name,sfield,cfield,error_msg;
    QMessageBox msg;
    bool flag = false;
    table_name = "USER_TABLE";
    sfield="password";
    cfield="user_id";
    QRegularExpression regex("^((?=.*\d)(?=.*[a-zA-Z])[a-zA-Z0-9!@#$%&*]{6,20})$");
    id =  ui->label_UserProfileUIdText->text();
    value=ui->lineEdit_UserProfilePasswordText->text();
    if(ui->lineEdit_UserProfilePasswordText->text().isEmpty())
    {
        flag = true;
        error_msg = "Please Enter Password";
    }
    else if(ui->lineEdit_UserProfileCPasswordText->text().isEmpty())
    {
        flag = true;
        error_msg = "Please Enter confirmed password";
    }
    else if(ui->lineEdit_UserProfilePasswordText->text() != ui->lineEdit_UserProfileCPasswordText->text())
    {
        flag = true;
        error_msg = "Passwords mismatched";
    }
    else if(!(regex.match(value).hasMatch()))
    {
        flag = true;
        error_msg = "Passwords should contain alphabate,number and special character";
    }
    else
    {
         dbc->updateValue(table_name,sfield,value,cfield,id);
    }

    if (flag)
    {

        msg.critical(this,"Password Alert",error_msg);

    }
    else
    {

        msg.information(this,"Password Alert","Password updated succesfully");

    }

}
