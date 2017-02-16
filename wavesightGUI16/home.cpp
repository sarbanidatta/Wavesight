#include "home.h"
#include "ui_home.h"
#include "databaseconnection.h"

Home::Home(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);
    dbconnection = databaseConnection::getdbInstance();
    dbconnection->connect("root","password");
    ui->tabWidget->setCurrentIndex(0);

    ui->tabWidget->setTabEnabled(0,true);
    ui->tabWidget->setTabEnabled(1,false);
    ui->tabWidget->setTabEnabled(2,false);
    ui->pushbutton_profile->hide();
    ui->pushButton_logout->hide();
    ui->pushButton_reset->setFocusPolicy(Qt::StrongFocus);
    connect(&m_timer,SIGNAL(timeout()),this,SLOT(message()));
}

Home::~Home()
{
    delete ui;
    delete snmp;
    delete diag;
    delete md;
    delete cmt;
    dbconnection->closeDatabase();
}

void Home::on_pushButton_login_clicked()
{
    QString userid, password;
    userid = ui->lineEdit_userid->text();
    password = ui->lineEdit_password->text();
    QPalette* palette = new QPalette();
    palette->setColor(QPalette::WindowText,Qt::red);
    ui->label_error->setPalette(*palette);

    if (ui->lineEdit_userid->text().isEmpty())
    {
        ui->label_error->setText("Please Enter userid");
         m_timer.start(3000);
        return ;
    }
    else if ( ui->lineEdit_password->text().isEmpty()) {
         ui->label_error->setText("Please Enter password");
          m_timer.start(3000);
         return ;
    }


    int check=dbconnection->checkUser(userid,password);
    qDebug() << check;
    if(!check)
    {

        ui->label_error->setText("userid and password does not matched. Try agin.");
        m_timer.start(5000);

    }
    else
    {

        if(check == adminstrator)
            ui->tabWidget->setTabEnabled(1,true);

        ui->tabWidget->setTabEnabled(2,true);
        ui->tabWidget->setCurrentIndex(2);
        ui->tabWidget->setTabEnabled(0,false);
        ui->pushbutton_profile->show();
        ui->pushButton_logout->show();
        deviceList();



    }
}
void Home::message()
{
    ui->label_error->clear();

}

void Home::on_pushButton_logout_clicked()
{
        ui->pushButton_login->setDefault(false);
        ui->tabWidget->setCurrentIndex(0);
        ui->tabWidget->setTabEnabled(0,true);
        ui->tabWidget->setTabEnabled(1,false);
        ui->tabWidget->setTabEnabled(2,false);
        ui->pushbutton_profile->hide();
        ui->pushButton_logout->hide();
        ui->lineEdit_password->clear();
        ui->lineEdit_userid->clear();
         ui->pushButton_login->setDefault(false);
        if(snmp)
            snmp->closeAll();
        if(cmt)
            cmt->close();
        if(diag)
            diag->close();
        if(md)
            md->close();
        if(up)
            up->close();
}


void Home::on_pushButton_snmp_clicked()
{
    snmp = new SnmpConfigDialog();
    snmp->setAttribute(Qt::WA_DeleteOnClose,true);
    snmp->show();

}


void Home::on_pushButton_commissioning_clicked()
{
   cmt = new Cmtools();
   cmt->setAttribute(Qt::WA_DeleteOnClose,true);
   cmt->show();
}


void Home::on_pushButton_diagnostics_clicked()
{
  diag = new Diagnostics();
  diag->setAttribute(Qt::WA_DeleteOnClose,true);
  diag->show();
}

void Home::on_pushButton_multidevices_clicked()
{
    md = new MultipleDevices();
    md->setAttribute(Qt::WA_DeleteOnClose,true);
    md->show();
}

void Home::on_pushButton_reset_clicked()
{
    ui->lineEdit_password->clear();
    ui->lineEdit_userid->clear();
}


void Home::on_lineEdit_password_cursorPositionChanged(int arg1, int arg2)
{
    ui->pushButton_login->setDefault(true);
    ui->pushButton_login->setAutoDefault(false);
}

void Home::on_lineEdit_password_editingFinished()
{
    ui->pushButton_login->clicked(true);
}

void Home::on_pushbutton_profile_clicked()
{
    up=new UserProfile();
    up->setAttribute(Qt::WA_DeleteOnClose,true);
    up->setFixedSize(644,506);
    up->setProfileData(ui->lineEdit_userid->text());
    up->show();
}
void Home::deviceList()
{
        QSqlQuery query;
        query.exec("select * from DEVICE_TABLE");

        ui->tableWidget->setRowCount(query.size());
        ui->tableWidget->setShowGrid(false);
        ui->label_0->setText( QString::number(query.size()));
        ui->tableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        ui->tableWidget->resizeRowsToContents();
        int index=0;
        while(query.next())
        {

            QTableWidgetItem *itm=new QTableWidgetItem();
            itm->data(Qt::CheckStateRole);
            itm->setCheckState(Qt::Unchecked);
            itm->setText(query.value(0).toString());

            ui->tableWidget->setItem(index,0,itm);
            ui->tableWidget->setItem(index,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tableWidget->setItem(index,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tableWidget->setItem(index,3,new QTableWidgetItem(query.value(3).toString()));
            ui->tableWidget->setItem(index,4,new QTableWidgetItem(query.value(4).toString()));

            index++;
        }
        ui->tableWidget->resizeColumnsToContents();


}

void Home::on_pushButton_selectall_clicked()
{
    for(int row=0; row<ui->tableWidget->rowCount();row++)
       {

           ui->tableWidget->item(row,0)->setCheckState(Qt::Checked);

       }

}

void Home::on_pushButton_deselect_clicked()
{
    for(int row=0; row<ui->tableWidget->rowCount();row++)
       {

           ui->tableWidget->item(row,0)->setCheckState(Qt::Unchecked);

       }

}

void Home::on_pushButton_adminSave_clicked()
{

    QRegularExpression regexpwd("^((?=.*\d)(?=.*[a-zA-Z])[a-zA-Z0-9!@#$%&*]{6,20})$");
    QRegularExpression regexmob(" ^[789]\d{9}$");
    QRegularExpression regexxemail("\\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,4}\\b");
    QString userid,username,pwd,usertype,mob,email;
    userid = ui->adminUserid->text();
    username = ui->adminUserName->text();
    pwd = ui->adminPassword->text();
    usertype = ui->adminUsertype->itemData(ui->adminUsertype->currentIndex()).toString();
    mob = ui->adminContactNo->text();
    email = ui->adminEmailId->text();

}
