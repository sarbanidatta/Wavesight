#include "databaseconnection.h"
#include<QDebug>


databaseConnection::databaseConnection()
{
  db = QSqlDatabase::addDatabase("QMYSQL");
}
 databaseConnection* databaseConnection::dbconnection = NULL;
 bool databaseConnection::flag = false;
 databaseConnection *databaseConnection::getdbInstance()
{
   if (!flag)
   {
    dbconnection = new databaseConnection();
    flag = true;
    return dbconnection;
   }
   else
   {
       return dbconnection;
   }
}

void databaseConnection::connect(QString username, QString password)
{
    try{
        db.setHostName("127.0.0.1");
        db.setDatabaseName("WAVE_DB");
        db.setUserName(username);
        db.setPassword(password);
        if(db.open())
        {
            qDebug() << "connected";
        }
        else
        {
            qDebug() << "not connected";
        }
    }
    catch (...)
    {
         qDebug() << "some exception come";
    }
}
 int databaseConnection::checkUser(QString userid, QString pwd)
 {
    // qDebug() << userid << pwd;

     QString id, password;
     QSqlQuery query;
     query.prepare("SELECT * from USER_TABLE where user_id =(:user_id) and password=(:password) and privileges='Administrator'");
     query.bindValue(":user_id",userid);
     query.bindValue(":password",pwd);
     query.exec();
     qDebug() << query.size();
     if(query.next())
            return adminstrator;
     else
     {
         query.prepare("SELECT * from USER_TABLE where user_id =(:user_id) and password=(:password)"); // and (privileges='Engineer' OR privileges='End-User')");
         query.bindValue(":user_id",userid);
         query.bindValue(":password",pwd);
          query.exec();
         if(query.next())
                return engineer;
         else
             return nouser;
     }
       return false;
 }

 void databaseConnection::closeDatabase()
 {
    db.close();
 }
QSqlQuery databaseConnection::extractData(QString field,QString value)
{
    QSqlQuery result;
    QString query = "SELECT * from USER_TABLE where ";
    query.append(field).append("=").append("'"+value+"'");

    result.prepare(query);

    result.exec();

    return result;

}

void databaseConnection::updateValue(QString table_name,QString sfield,QString value,QString cfield,QString id)
{
    QSqlQuery query;
    QString result="UPDATE ";
    result.append(table_name).append(" SET ").append(sfield).append("='"+value+"'").append(" where ").append(cfield).append("='"+id+"'");
    query.prepare(result);
    query.exec();
}
 void databaseConnection::addUser(QString id, QString name, QString type, QString email, QString mob, QString pwd)
 {
        QSqlQuery query;
        query.prepare("INSERT INTO USER_TABLE (user_id, user_name, password, privileges, contact, email) "
                      "VALUES (:id, :name, :pwd, :type, :mob, :email)");
        query.bindValue(":id", id);
        query.bindValue(":name", name);
        query.bindValue(":type", type);
        query.bindValue(":email", email);
        query.bindValue(":pwd", pwd);
        query.bindValue(":mob", mob);
        query.exec();
      //  qDebug()<<"User Added"<< id<<name<<type<<email<<  mob<<  pwd;

 }
