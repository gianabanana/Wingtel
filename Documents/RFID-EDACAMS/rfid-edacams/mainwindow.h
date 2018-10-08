#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
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
#include <QStandardItemModel>

namespace Ui {
class mainwindow;
}

class mainwindow : public QWidget
{
    Q_OBJECT

public:
    explicit mainwindow(QWidget *parent = 0);
    ~mainwindow();
    QString cardUID;
    scanID iScan;
    QSqlDatabase db;

    void showTime();
    void showDate();
    void getTime();
    void logIn();
    void logIn2();
    void getDepartment();
    void getYrlevel();
    void refreshList();
    void deleteYr();
    void deleteStudSub();
    void deleteSec();
    void deleteLogs();
    void deleteEnrolled();
    void deleteUser();
    void loadComboBoxes();
    void getIDdepartment();
    void setDesign();
    void addhide();
signals:
    void on_stop();

private:
    Ui::mainwindow *ui;

    QString databaseusername;
    QString databasepassword;
    QString userTypeVerify;
    QString id;
    int eID;
    QString eUsername;
    QString ePassword;
    QString mUsername;
    QString mPassword;

    QString idnum;
    QString uniqueID;
    QString firstname;
    QString secondname;
    QString thirdname;
    QString middlename;
    QString lastname;
    QString gender;
    QString street;
    QString brgy;
    QString city;
    QString province;
    QString email;
    QString contact;
    QString department;
    QString department2;
    QString username;
    QString password;
    QString rtypepw;
    QString userType;
    QString yearlevel;
    QString time;
    QString date;

public slots:
    void scanScard();
    void newNumber(QString cardName);
    void connectDatabase();
    void connClose();
    void gobacktomain();

private slots:
    void on_submit_clicked();
    void on_cancel_clicked();
    void on_checkBoxpw_toggled(bool checked);
    void on_recStudent_clicked();
    void on_onlineRegistration_clicked();
    void on_onlineEnrollment_clicked();
    void on_logout_clicked();
    void on_timelog_clicked();
    void on_updateStudent_clicked();
    void on_deleteStudent_clicked();
    void on_main_clicked();
    void on_search_3_clicked();
    void on_studentlist_clicked(const QModelIndex &index);
    void on_cleartimelog_clicked();
    void on_backButton_clicked();
    void on_editprof_clicked();
    void on_okbutton_clicked();
    void on_updatebutton_clicked();
    void on_cancelbutton_clicked();
    void on_firstname_2_textChanged();
    void on_secondname_textChanged();
    void on_thirdname_textChanged();
    void on_middlename_textChanged();
    void on_lastname_textChanged();
    void on_street_textChanged();
    void on_brgy_textChanged();
    void on_city_textChanged();
    void on_province_textChanged();
    void on_emailadd_textChanged();
    void on_contact_textChanged();
    void on_course_currentTextChanged();
    void on_comboBox_currentTextChanged();
    void on_yes_clicked();
    void on_no_clicked();
    void on_username_3_textChanged();
    void on_pw_3_textChanged();
    void on_rtypepw_3_textChanged();
    void on_pushButton_clicked();
    void on_manuallogin_clicked();
    void on_mUser_textChanged();
    void on_mPw_textChanged();
    void on_checkBoxpw_2_toggled(bool checked);
    void on_submit_2_clicked();
    void on_cancel_2_clicked();
    void on_studentButton_2_clicked();
    void on_adminButton_2_clicked();
    void on_male_clicked();
    void on_female_clicked();
    void on_yearlevel_currentTextChanged();
};

#endif // MAINWINDOW_H
