#ifndef ENROLLMENT_H
#define ENROLLMENT_H

#include <QWidget>
#include "mainwindow.h"
#include <QString>

#include <QtSql/QSqlDatabase>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QSqlQuery>

#include <QTimer>
#include <QDateTime>
#include <QMessageBox>

namespace Ui {
class enrollment;
}

class enrollment : public QWidget
{
    Q_OBJECT

public:
    explicit enrollment(QWidget *parent = 0);
    ~enrollment();
    QString cardUID;
public slots:
    void viewdetails();
    void refreshMySubjects();
    void mySchedule();
    void deleteTempSubj();
    void getYearLevel();
    void removedSub();
    void showTime();
    void showDate();
    void setDesign();
    void removeEnroll();
    void addStudSub();
    void successMsgBox();
    void removedMsgBox();
    void removedMsgBox2();
    void removestudsub();

private slots:
    void on_pushButtonSearch_clicked();
    void on_enrollstudent_clicked();
    void on_pushButtonCancel_clicked();
    void on_enrollsubj_clicked();
    void on_addsubj_clicked();
    void on_cancel_clicked();
    void on_pushButtonSearch_2_clicked();
    void on_addsubjtodata_clicked();
    void on_cancel_2_clicked();
    void on_pushButtonAddSection_clicked();
    void on_pushButtonCancelSection_clicked();
    void on_lineEdit_2_textChanged();
    void on_lineEdit_3_textChanged();
    void on_lineEdit_textChanged();
    void on_labelIDno_4_textChanged();
    void on_tableViewSubjectList_2_clicked(const QModelIndex &index);
    void on_tableViewStudentList_clicked(const QModelIndex &index);
    void on_tableViewSubjectList_clicked(const QModelIndex &index);
    void on_tableViewSectiontList_clicked(const QModelIndex &index);

    void on_tableEnrolledsubj_clicked(const QModelIndex &index);

    void on_unenrollSub_clicked();

    void on_removeSub_clicked();

private:
    Ui::enrollment *ui;
    int eID;
    int eSubject;
    QString idnum;
    QString idsubj;
    QString idsubjAdd;
    QString idsect;
    QString idlogs;
    QString usertype;
    QString id;
    QString iduser;
    
    QString rSub;
    QString rdSub;
    QString fname;
    QString lname;
    QString fullname;
    QString username;
    QString department;
    QString subject;
    QString yearlevel;
};

#endif // ENROLLMENT_H
