#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QWidget>
#include "mainwindow.h"
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
class registration;
}

class registration : public QWidget
{
    Q_OBJECT

public:
    explicit registration(QWidget *parent = 0);
    ~registration();
    void notifications(int notifCode);
    QString cardUID;
    scanID iScan;
    QSqlDatabase db;


public slots:
    void connectDatabase();
    void connClose();
    void insertToEnroll();
    //void getIDteacher();
    void scanScard();
    void newNumber(QString cardName);
    void insertSection();
    void insertYrLevel();
    void selectId();
    void viewSubjList();
    //void viewSubjwithoutSec();
    void insertSecSub();
    void viewTeachers();
    void loadComboBoxes();
    void getIDsection();
    void getIDdays();
    void filterSection();
    void setDesign();
    void getIDdepartment();
    void showTime();
    void showDate();

private slots:
    void on_addStaff_clicked();
    void on_addRecords_clicked();
    void on_addDepartment_clicked();
    void on_main_clicked();
    void on_firstname_2_textChanged();
    void on_secondname_2_textChanged();
    void on_thirdname_2_textChanged();
    void on_middlename_2_textChanged();
    void on_lastname_2_textChanged();
    void on_department_currentTextChanged();
    void on_street_2_textChanged();
    void on_brgy_2_textChanged();
    void on_city_2_textChanged();
    void on_province_2_textChanged();
    void on_emailadd_2_textChanged();
    void on_contactnum_2_textChanged();
    void on_username_textChanged();
    void on_pw_textChanged();
    void on_rtypepw_textChanged();
    void on_add_2_clicked();
    void on_cancel_2_clicked();
    void on_subject_4_textChanged();
    void on_description_2_textChanged();
    void on_units_2_currentTextChanged();
    void on_prerequisite_2_textChanged();
    void on_subjectfor_2_currentTextChanged();
    void on_subjecttype_2_currentTextChanged();
    void on_add_3_clicked();
    void on_cancel_3_clicked();
    void on_addsection_clicked();
    void on_section_currentTextChanged();
    void on_add_4_clicked();
    void on_cancel_4_clicked();
    void on_courseedit_textChanged();
    void on_add_5_clicked();
    void on_cancel_5_clicked();
    void on_male_2_clicked();
    void on_female_2_clicked();
    void on_scanID_clicked();
    void on_okID_clicked();
    void on_admin_clicked();
    void on_student_clicked();
    void on_timeEdit_timeChanged();
    void on_timeEdit_2_timeChanged();
    void on_room_textChanged();
    void on_days_currentTextChanged();

    void on_yearlevel_currentTextChanged();

    void on_clickSubj_clicked(const QModelIndex &index);

    void on_teacherList_clicked(const QModelIndex &index);
private:
    Ui::registration *ui;
    QString databaseusername;
    QString databasepassword;

    int eID;
    QString id;
    QString idnum;
    QString uniquenum;
    QString firstname;
    QString secondname;
    QString thirdname;
    QString middlename;
    QString lastname;
    QString address;
    QString gender;
    QString street;
    QString brgy;
    QString city;
    QString province;
    QString emailadd;
    QString contactnum;
    QString course;
    QString usertype;
    QString username;
    QString password;
    QString rtypepw;
    QString yearlevel;

    QString department;
    QString department2;

    QString userType;
    QString eUsername;
    QString idUser;

    QString subject;
    QString description;
    QString units;
    QString prerequisite;
    QString subjectfor;
    QString subjecttype;
    QString eSubject;
    QString idSubject;

    QString section;
    QString idsection;
    QString classfrom;
    QString classto;
    QString days;
    QString room;
    QString fullname;
    QString dcourseedit;
    QString teacherfname;
    QString teacherlname;
    QString idteacher;
    QString filterSec;
    QString eTfname;
    QString eTlname;

    QString timestart;
    QString timeend;
};

#endif // REGISTRATION_H
