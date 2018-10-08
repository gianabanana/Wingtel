#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "scanid.h"
//#include <winscard.h>
#include <QtConcurrent>
#include <QString>

#include <QtSql/QSqlDatabase>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QSqlQuery>

#include <QTimer>
#include <QDateTime>

namespace Ui {
class login;
}

class login : public QMainWindow
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    QString cardUID;
    scanID iScan;
    QSqlDatabase db;
    void logIn();
    void getTime();
    void getlogs();
    void validateTime();
    ~login();

signals:
    void on_stop();

private:
    Ui::login *ui;

    QString databaseusername;
    QString databasepassword;
    QString userTypeVerify;
    QString id;
    QString mUsername;
    QString mPassword;

    int eID;

    QString time;
    QString date;

    QString firstname;
    QString lastname;
    QString username;
    QString userType;
    QString uniqueID;

    QString logs;
    QString ldate;
    QString ltime;

public slots:
    void scanScard();
    void newNumber(QString cardName);
    void connectDatabase();
    void connClose();
};

#endif // LOGIN_H
