#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H

#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QPluginLoader>
#include <iostream>
#include<QDebug>
#include <QtSql/QSqlError>
#include <QString>
#include<globalheader.h>


class databaseConnection
{
    static databaseConnection *dbconnection;
    static bool flag;
    QSqlDatabase db;
    databaseConnection();


public:
    void connect(QString username,QString passward);
    int checkUser(QString userid, QString pwd);
    static databaseConnection *getdbInstance();
    QSqlQuery extractData(QString field,QString value );
    void closeDatabase();
    void updateValue(QString table_name, QString sfield, QString value,QString cfield,QString id);
};

#endif // DATABASECONNECTION_H
