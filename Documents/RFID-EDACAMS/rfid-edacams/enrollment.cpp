#include "enrollment.h"
#include "ui_enrollment.h"

enrollment::enrollment(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::enrollment)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    showTime();
    showDate();
    usertype = "Student";
    QSqlQueryModel *model=new QSqlQueryModel();
    QSqlQuery query;
    ui->enrollstudent->setDisabled(true);
    setDesign();
    query.prepare("SELECT userdata.lname, userdata.firstname, department.departmentName "
                   "FROM userdata "
                   "INNER JOIN department "
                   "ON department.iddepartment=userdata.department_iddepartment "
                   "WHERE userdata.usertype LIKE '"+usertype+"%'");
    query.exec();
    qDebug()<<query.lastError();

    model->setQuery(query);
    qDebug()<<model->lastError();
    ui->tableViewStudentList->setModel(model);
    ui->tableViewStudentList->setColumnWidth(0, 100);
    ui->tableViewStudentList->setColumnWidth(1, 100);
    ui->tableViewStudentList->setColumnWidth(2, 170);

}

enrollment::~enrollment()
{
    delete ui;
}

void enrollment::viewdetails()
{
    QSqlQueryModel *detailsmodel = new QSqlQueryModel(this);
    QSqlQuery query;
    query.prepare("SELECT userdata.department_iddepartment, department.departmentName "
                  "FROM edacams.userdata "
                  "INNER JOIN edacams.department "
                  "ON userdata.department_iddepartment=department.iddepartment "
                  "WHERE userdata.iduser = '"+id+"'");
    query.exec();
    qDebug()<<query.lastError();

    detailsmodel->setQuery(query);
    department = detailsmodel->index(0,1).data().toString();

    getYearLevel();
    ui->department->setText(department);
    ui->name->setText(fullname);
    ui->username->setText(username);
    qDebug()<<"department:";
    qDebug()<<department;

}

void enrollment::refreshMySubjects()
{
    qDebug()<<idsubj;
    QSqlQueryModel *modelstud=new QSqlQueryModel();
    QSqlQuery querystud;
    querystud.prepare("SELECT studsub.subject_idsubject, subject.subjectName, subject.subjectDescription, subject.subjectUnits "
                      "FROM edacams.studsub "
                      "INNER JOIN edacams.subject "
                      "ON studsub.subject_idsubject=subject.idsubject "
                      "WHERE studsub.userdata_iduser = '"+id+"'");
    querystud.exec();
    modelstud->setQuery(querystud);
    ui->tableViewSubjectList_2->setModel(modelstud);
    ui->tableViewSubjectList_2->setColumnWidth(0, 70);
    ui->tableViewSubjectList_2->setColumnWidth(1, 110);
    ui->tableViewSubjectList_2->setColumnWidth(2, 200);
    ui->tableViewSubjectList_2->setColumnWidth(3, 80);
    ui->lineEdit_4->hide();
}

void enrollment::mySchedule()
{
    qDebug()<<"id: ";
    qDebug()<<id;
    QSqlQueryModel *modelEnrolled=new QSqlQueryModel();
    QSqlQuery enrolled;
    enrolled.prepare("SELECT enroll.subject_idsubject, enroll.section_idsection, subject.subjectName, section.sectioning_idsectioning, subject.subjectType, subject.subjectUnits, section.sectionStart, section.sectionEnd, section.days_iddays, days.descriptionDays, section.room "
                      "FROM edacams.enroll "
                      "INNER JOIN edacams.subject "
                      "ON enroll.subject_idsubject=subject.idsubject "
                      "INNER JOIN edacams.section "
                      "ON enroll.section_idsection=section.idsection "
                      "INNER JOIN edacams.sectioning "
                      "ON section.sectioning_idsectioning=sectioning.idsectioning "
                      "INNER JOIN edacams.days "
                      "ON section.days_iddays=days.iddays "
                      "WHERE enroll.userdata_iduser LIKE '"+id+"'");
    enrolled.exec();
    qDebug()<<enrolled.lastError();
    modelEnrolled->setQuery(enrolled);
    ui->tableEnrolledsubj->setModel(modelEnrolled);
    ui->tableEnrolledsubj->hideColumn(0);
    ui->tableEnrolledsubj->hideColumn(1);
    ui->tableEnrolledsubj->setColumnWidth(2, 100);
    ui->tableEnrolledsubj->setColumnWidth(3, 90);
    ui->tableEnrolledsubj->setColumnWidth(4, 100);
    ui->tableEnrolledsubj->setColumnWidth(5, 80);
    ui->tableEnrolledsubj->setColumnWidth(6, 100);
    ui->tableEnrolledsubj->setColumnWidth(7, 100);
    ui->tableEnrolledsubj->hideColumn(8);
    ui->tableEnrolledsubj->setColumnWidth(9, 80);
    ui->tableEnrolledsubj->setColumnWidth(10, 80);
    ui->lineEdit_4->hide();

}

void enrollment::deleteTempSubj()
{
    qDebug()<<"iduser: ";
    qDebug()<<id;
    qDebug()<<"idsubj: ";
    qDebug()<<idsubj;
    QSqlQuery deleteSubj;
    deleteSubj.prepare("DELETE FROM edacams.studsub WHERE studsub.userdata_iduser = :id AND studsub.subject_idsubject = :idsubj");
    deleteSubj.bindValue(":id", id);
    deleteSubj.bindValue(":idsubj", idsubj);
    deleteSubj.exec();
    qDebug()<<deleteSubj.lastError();

}

void enrollment::getYearLevel()
{
    QSqlQueryModel *yrlevelmodel = new QSqlQueryModel();
    QSqlQuery getlevel;
    getlevel.prepare("SELECT yearlevelcode FROM edacams.yearlevel WHERE yearlevel.userdata_iduser = '"+id+"'");
    getlevel.exec();
    qDebug()<<getlevel.lastError();

    yrlevelmodel->setQuery(getlevel);
    yearlevel = yrlevelmodel->index(0,0).data().toString();

    ui->yearlevel->setText(yearlevel);
}

void enrollment::removedSub()
{
//    int logRow;
//    QSqlQueryModel *model = new QSqlQueryModel();
//    QSqlQuery query;
//    query.prepare("SELECT subjectName FROM edacams.enroll "
//                  "INNER JOIN edacams.subject "
//                  "ON subject_idsubject= subject.idsubject "
//                  "UNION ALL "
//                  "SELECT subjectName FROM edacams.studsub "
//                  "INNER JOIN edacams.subject "
//                  "ON subject_idsubject= subject.idsubject ");
//    query.exec();
//    qDebug()<<query.lastError();
//    logRow = model->rowCount();
//    model->setQuery(query);
//    for(int i=0;i<logRow;i++){
//        rSub = model->index(i,0).data().toString();

        QSqlQueryModel *model2 = new QSqlQueryModel();
        QSqlQuery getsub;
        getsub.prepare("SELECT subject.idsubject, subject.subjectName, subject.subjectDescription, subject.subjectUnits FROM edacams.subject WHERE subject.subjectName != '"+rSub+"'");
        getsub.exec();
        qDebug()<<getsub.lastError();
            qDebug()<<"ok";
            model2->setQuery(getsub);
     ui->tableViewSubjectList->setModel(model2);
     ui->tableViewSubjectList->hideColumn(0);
     ui->tableViewSubjectList->setColumnWidth(1, 100);
     ui->tableViewSubjectList->setColumnWidth(2, 250);
     ui->tableViewSubjectList->setColumnWidth(3, 80);

   //}


}

void enrollment::showTime()
{
    QTime time= QTime::currentTime();
    QString time_text=time.toString("h:mm AP");
    ui->time_2->setText(time_text);
}

void enrollment::showDate()
{
    QDate date=QDate::currentDate();
    QString date_text=date.toString("dddd, d MMMM, yyyy");
    ui->date_2->setText(date_text);
}

void enrollment::setDesign()
{
    QString styleSheet = "::section {" // "QHeaderView::section {"
            "spacing: 10px;"
            "background-color: #008ed5;"
            "color: #5e0000;"


            "margin: 1px;"
            "text-align: right;"
            "font-family: arial;"
            "font-size: 12px; }";

ui->tableViewSectiontList->horizontalHeader()->setStyleSheet(styleSheet);
ui->tableViewSubjectList_2->horizontalHeader()->setStyleSheet(styleSheet);
ui->tableEnrolledsubj->horizontalHeader()->setStyleSheet(styleSheet);
ui->tableViewStudentList->horizontalHeader()->setStyleSheet(styleSheet);
ui->tableViewSubjectList->horizontalHeader()->setStyleSheet(styleSheet);

}

void enrollment::removeEnroll()
{
    qDebug()<<"iduser: ";
    qDebug()<<id;
    qDebug()<<"idsubj: ";
    qDebug()<<idsubj;
    QSqlQuery deleteSubj;
    deleteSubj.prepare("DELETE FROM edacams.enroll WHERE enroll.userdata_iduser = :id AND enroll.subject_idsubject = :idsubj AND enroll.section_idsection = :idsect");
    deleteSubj.bindValue(":id", id);
    deleteSubj.bindValue(":idsubj", idsubj);
    deleteSubj.bindValue(":idsect", idsect);
    deleteSubj.exec();
    qDebug()<<deleteSubj.lastError();
}

void enrollment::addStudSub()
{
    qDebug()<<"id:";
    qDebug()<<id;
    qDebug()<<"idsubject::";
    qDebug()<<idsubj;
    QSqlQuery query11;
    query11.prepare("INSERT INTO edacams.studsub (userdata_iduser, subject_idsubject)"
                    "VALUES (:iduser, :idsubj)");
    query11.bindValue(":iduser", id);
    query11.bindValue(":idsubj", idsubj);
    query11.exec();

    qDebug()<<query11.lastError();
}

void enrollment::successMsgBox()
{
      QMessageBox msgBox;
      msgBox.setText("The subject was successfully added to your proposed subjects");
      msgBox.exec();

}

void enrollment::removedMsgBox()
{
    QMessageBox msgBox;
    msgBox.setText("The subject will be removed from your schedule.");
    msgBox.setInformativeText("Do you want to continue?");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::Yes);
    int ret = msgBox.exec();

    switch (ret) {
        case QMessageBox::Yes:
          removeEnroll();
          mySchedule();
          addStudSub();
          refreshMySubjects();
          ui->stackedWidget->setCurrentWidget(ui->page);
            break;
        case QMessageBox::No:
            ui->stackedWidget->setCurrentWidget(ui->page);
            break;
        default:
            // should never be reached
            break;
    }
}

void enrollment::removedMsgBox2()
{
    QMessageBox msgBox;
    msgBox.setText("The subject will be removed from your proposed subjects.");
    msgBox.setInformativeText("Do you want to continue?");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::Yes);
    int ret = msgBox.exec();

    switch (ret) {
        case QMessageBox::Yes:
          removestudsub();
          refreshMySubjects();
          ui->stackedWidget->setCurrentWidget(ui->page);
            break;
        case QMessageBox::No:
        ui->stackedWidget->setCurrentWidget(ui->page);
            break;
        default:
            // should never be reached
            break;
    }
}

void enrollment::removestudsub()
{
    qDebug()<<"iduser: ";
    qDebug()<<id;
    qDebug()<<"idsubj: ";
    qDebug()<<idsubj;
    QSqlQuery deleteSubj;
    deleteSubj.prepare("DELETE FROM edacams.studsub WHERE studsub.userdata_iduser = :id AND studsub.subject_idsubject = :idsubj ");
    deleteSubj.bindValue(":id", id);
    deleteSubj.bindValue(":idsubj", idsubj);
    deleteSubj.exec();
    qDebug()<<deleteSubj.lastError();
}





void enrollment::on_pushButtonSearch_clicked()
{
    QSqlQueryModel *model2=new QSqlQueryModel();
    QSqlQuery query2;
    QString input=ui->lineEditSearch->text();
    query2.prepare("SELECT userdata.lname, userdata.firstname, department.departmentName "
                   "FROM userdata "
                   "INNER JOIN department "
                   "ON department.iddepartment=userdata.department_iddepartment "
                   "WHERE userdata.lname LIKE '"+input+"%'");
    query2.exec();
    model2->setQuery(query2);
    ui->tableViewStudentList->setModel(model2);
    ui->tableViewStudentList->setColumnWidth(0, 100);
    ui->tableViewStudentList->setColumnWidth(1, 100);
    ui->tableViewStudentList->setColumnWidth(2, 170);
}

void enrollment::on_enrollstudent_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    ui->enrollsubj->setDisabled(true);
    ui->removeSub->setDisabled(true);
    ui->unenrollSub->setDisabled(true);
    qDebug()<<id;
    QSqlQueryModel *modelstud=new QSqlQueryModel();
    QSqlQuery querystud;
    querystud.prepare("SELECT studsub.subject_idsubject, subject.subjectName, subject.subjectDescription, subject.subjectUnits "
                      "FROM edacams.studsub "
                      "INNER JOIN edacams.subject "
                      "ON studsub.subject_idsubject=subject.idsubject "
                      "WHERE studsub.userdata_iduser LIKE '"+id+"'");
    querystud.exec();
    modelstud->setQuery(querystud);
    ui->tableViewSubjectList_2->setModel(modelstud);
    ui->tableViewSubjectList_2->setColumnWidth(0, 70);
    ui->tableViewSubjectList_2->setColumnWidth(1, 110);
    ui->tableViewSubjectList_2->setColumnWidth(2, 248);
    ui->tableViewSubjectList_2->setColumnWidth(3, 80);
    ui->lineEdit_4->hide();

    mySchedule();
    viewdetails();

}

void enrollment::on_pushButtonCancel_clicked()
{
    mainwindow *cancel = new mainwindow;
    cancel->gobacktomain();
    cancel->show();
    cancel->addhide();
    this->hide();
}

void enrollment::on_enrollsubj_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->pushButtonAddSection->setDisabled(true);

    QString subj;
    QString userd;
    qDebug()<<id;
    QSqlQueryModel *model3=new QSqlQueryModel();
    QSqlQuery query3;

    query3.prepare("SELECT enroll.userdata_iduser, enroll.subject_idsubject "
                   "FROM edacams.enroll WHERE userdata_iduser = '"+id+"' AND subject_idsubject = '"+idsubj+"'");
    query3.exec();
    qDebug()<<query3.lastError();
    qDebug()<<"ok";
    model3->setQuery(query3);
    subj=model3->index(0,1).data().toString();
    userd=model3->index(0,0).data().toString();
    if (subj==idsubj && userd==id){
        ui->label_2->setText("You are already enrolled in this subject!");
    } else {
        ui->label_2->hide();
        QSqlQueryModel *model4=new QSqlQueryModel();
        QSqlQuery query4;

        query4.prepare("SELECT secsub.subject_idsubject, secsub.section_idsection, section.idsection, sectioning.sectionName, section.sectionStart, sectionEnd, days.descriptionDays, section.room "
                       "FROM edacams.secsub "
                       "INNER JOIN edacams.section "
                       "ON secsub.section_idsection=section.idsection "
                       "INNER JOIN edacams.sectioning "
                       "ON section.sectioning_idsectioning=sectioning.idsectioning "
                       "INNER JOIN edacams.days "
                       "ON section.days_iddays=days.iddays "
                       "WHERE secsub.subject_idsubject = '"+idsubj+"' ");
        query4.exec();
        qDebug()<<query4.lastError();
        qDebug()<<"ok";
        model4->setQuery(query4);
        ui->tableViewSectiontList->setModel(model4);
        ui->tableViewSectiontList->hideColumn(0);
        ui->tableViewSectiontList->hideColumn(1);
        ui->tableViewSectiontList->hideColumn(2);
        ui->tableViewSectiontList->setColumnWidth(3, 50);
        ui->tableViewSectiontList->setColumnWidth(4, 70);
        ui->tableViewSectiontList->setColumnWidth(5, 70);
        ui->tableViewSectiontList->setColumnWidth(6, 80);
        ui->tableViewSectiontList->setColumnWidth(7, 50);
    }
}

void enrollment::on_addsubj_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->addsubjtodata->setDisabled(true);
    removedSub();
//    QSqlQueryModel *modelv=new QSqlQueryModel();
//    QSqlQuery queryv;

//    queryv.prepare("SELECT subject.idsubject, subject.subjectName, subject.subjectDescription, subject.subjectUnits "
//                      "FROM edacams.subject ");
//    queryv.exec();
//    qDebug()<<queryv.lastError();
//    modelv->setQuery(queryv);
//    ui->tableViewSubjectList->setModel(modelv);
//    ui->tableViewSubjectList->hideColumn(0);
//    ui->tableViewSubjectList->setColumnWidth(1, 100);
//    ui->tableViewSubjectList->setColumnWidth(2, 250);
//    ui->tableViewSubjectList->setColumnWidth(3, 80);

}

void enrollment::on_cancel_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->enrollstudent->setDisabled(true);
}

void enrollment::on_pushButtonSearch_2_clicked()
{
    QSqlQueryModel *model4=new QSqlQueryModel();
    QSqlQuery query4;
    QString inputSubject=ui->lineEditSearch_2->text();
    query4.prepare("SELECT subject.subjectName, subject.subjectUnits "
                   "FROM subject "
                   "WHERE subject.subjectName LIKE '"+inputSubject+"%'");
    query4.exec();
    model4->setQuery(query4);
    ui->tableViewSubjectList->setModel(model4);
    ui->tableViewSubjectList->setColumnWidth(0, 110);
    ui->tableViewSubjectList->setColumnWidth(1, 130);
}

void enrollment::on_addsubjtodata_clicked()
{
    successMsgBox();


    qDebug()<<"id:";
    qDebug()<<id;
    qDebug()<<"idsubject::";
    qDebug()<<idsubjAdd;
    QSqlQuery query11;
    query11.prepare("INSERT INTO edacams.studsub (userdata_iduser, subject_idsubject)"
                    "VALUES (:iduser, :idsubj)");
    query11.bindValue(":iduser", id);
    query11.bindValue(":idsubj", idsubjAdd);
    query11.exec();

    qDebug()<<query11.lastError();
    ui->stackedWidget->setCurrentIndex(3);
    refreshMySubjects();

    ui->enrollsubj->setDisabled(true);
}

void enrollment::on_cancel_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    ui->enrollsubj->setDisabled(true);
}

void enrollment::on_pushButtonAddSection_clicked()
{
    qDebug()<<id;
    qDebug()<<idsubj;
    qDebug()<<idsect;

    QSqlQuery query11;
    query11.prepare("INSERT INTO enroll(subject_idsubject, userdata_iduser, section_idsection)"
                    "VALUES (:idsubj, :iduser, :idsect)");
    query11.bindValue(":idsubj", idsubj);
    query11.bindValue(":iduser", id);
    query11.bindValue(":idsect", idsect);
    query11.exec();

    qDebug()<<query11.lastError();
    deleteTempSubj();
    refreshMySubjects();
    mySchedule();
    ui->enrollsubj->setDisabled(true);
    ui->stackedWidget->setCurrentWidget(ui->page);
}

void enrollment::on_pushButtonCancelSection_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    ui->enrollsubj->setDisabled(true);
}

void enrollment::on_lineEdit_2_textChanged()
{
    idsect=ui->lineEdit_2->text();
}

void enrollment::on_lineEdit_3_textChanged()
{
    idlogs=ui->lineEdit_3->text();
}

void enrollment::on_lineEdit_textChanged()
{
    idsubj=ui->lineEdit->text();
}

void enrollment::on_labelIDno_4_textChanged()
{
    idnum=ui->username->text();
}

void enrollment::on_tableViewStudentList_clicked(const QModelIndex &index)
{
        ui->enrollstudent->setEnabled(true);
        int row=index.row();
        eID=index.sibling(row, 0).data().toInt();

        ui->tableViewStudentList->selectRow(row);
        QString val=ui->tableViewStudentList->model()->data(index).toString();

         QSqlQuery query6;
        query6.prepare("SELECT * FROM edacams.userdata WHERE iduser='"+val+"' or uniqueID='"+val+"' or firstname='"+val+"' or secondname='"+val+"' or thirdname='"+val+"' or mname='"+val+"' or lname='"+val+"' or gender='"+val+"' or street='"+val+"' or brgy='"+val+"' or city='"+val+"' or province='"+val+"' or email='"+val+"' or contact='"+val+"'  or department_iddepartment='"+val+"'  or usertype='"+val+"'  or username='"+val+"'  or password='"+val+"'");

        if(query6.exec()){
            while(query6.next()){
                ui->lineEdit_5->setText(query6.value(0).toString());
                ui->lineEdit_6->setText(query6.value(14).toString());
                ui->lineEdit_7->setText(query6.value(2).toString());
                ui->lineEdit_8->setText(query6.value(6).toString());
                ui->lineEdit_9->setText(query6.value(16).toString());
                id=ui->lineEdit_5->text();
                department=ui->lineEdit_6->text();
                fname = ui->lineEdit_7->text();
                lname = ui->lineEdit_8->text();
                username = ui->lineEdit_9->text();
                fullname= fname+" "+lname;
                ui->lineEdit_5->hide();
                ui->lineEdit_6->hide();
                ui->lineEdit_7->hide();
                ui->lineEdit_8->hide();
                ui->lineEdit_9->hide();
                qDebug()<<"id:";
                qDebug()<<id;
                qDebug()<<"department:";
                qDebug()<<department;
                qDebug()<<"fname:";
                qDebug()<<fname;
                qDebug()<<"lname:";
                qDebug()<<lname;
                qDebug()<<"fullname:";
                qDebug()<<fullname;
                qDebug()<<"username:";
                qDebug()<<username;

            }
        }

}

void enrollment::on_tableViewSubjectList_clicked(const QModelIndex &index)
{
    ui->addsubjtodata->setEnabled(true);
    int row=index.row();
    eID=index.sibling(row, 0).data().toInt();

    ui->tableViewSubjectList->selectRow(row);
    QString val2=ui->tableViewSubjectList->model()->data(index).toString();

    QSqlQuery query7;
    query7.prepare("SELECT * FROM edacams.subject WHERE idsubject='"+val2+"' or subjectName='"+val2+"' or subjectDescription='"+val2+"' or subjectUnits='"+val2+"' or subjectPreReq='"+val2+"' or subjectFor='"+val2+"' or subjectType='"+val2+"' ");

    if(query7.exec()){
        while(query7.next()){
            ui->lineEdit->setText(query7.value(0).toString());
            idsubjAdd=ui->lineEdit->text();
            ui->lineEdit->hide();
            qDebug()<<"idsubj:";
            qDebug()<<idsubjAdd;

        }
    }
}

void enrollment::on_tableViewSectiontList_clicked(const QModelIndex &index)
{
    ui->pushButtonAddSection->setEnabled(true);
    int row=index.row();
    eID=index.sibling(row, 0).data().toInt();

    ui->tableViewSectiontList->selectRow(row);
    QString val3=ui->tableViewSectiontList->model()->data(index).toString();

    QSqlQuery query10;
    query10.prepare("SELECT * FROM edacams.section WHERE idsection='"+val3+"' or sectioning_idsectioning='"+val3+"' or sectionStart='"+val3+"' or sectionEnd='"+val3+"' or days_iddays='"+val3+"' or userdata_iduser='"+val3+"' or room ='"+val3+"' ");

    if(query10.exec()){
        while(query10.next()){
            ui->lineEdit_2->setText(query10.value(0).toString());
            idsect=ui->lineEdit_2->text();
            ui->lineEdit_2->hide();
            qDebug()<<"id:";
            qDebug()<<id;
            qDebug()<<"idsubj";
            qDebug()<<idsubj;
            qDebug()<<"idsect:";
            qDebug()<<idsect;
        }
    }
}

void enrollment::on_tableViewSubjectList_2_clicked(const QModelIndex &index)
{

    ui->enrollsubj->setEnabled(true);
    ui->removeSub->setEnabled(true);
        int row=index.row();
        eID=index.sibling(row, 0).data().toInt();

        ui->tableViewSubjectList_2->selectRow(row);
        QString val2=ui->tableViewSubjectList_2->model()->data(index).toString();

        QSqlQuery query7;
        query7.prepare("SELECT * FROM edacams.subject WHERE idsubject='"+val2+"' or subjectName='"+val2+"' or subjectDescription='"+val2+"' or subjectUnits='"+val2+"' or subjectPreReq='"+val2+"' or subjectFor='"+val2+"' or subjectType='"+val2+"'");

        if(query7.exec()){
            while(query7.next()){
                ui->lineEdit_4->setText(query7.value(0).toString());
                idsubj=ui->lineEdit_4->text();
   //             ui->lineEdit_4->hide();
                qDebug()<<"idsubject:";
                qDebug()<<idsubj;
            }
        }
}

void enrollment::on_tableEnrolledsubj_clicked(const QModelIndex &index)
{
    ui->unenrollSub->setEnabled(true);
    int row=index.row();
    eID=index.sibling(row, 0).data().toInt();

    ui->tableEnrolledsubj->selectRow(row);
    QString val2=ui->tableViewSubjectList_2->model()->data(index).toString();

    QSqlQuery query7;
    query7.prepare("SELECT * FROM edacams.enroll WHERE subject_idsubject='"+val2+"' or userdata_iduser='"+val2+"' or section_idsection='"+val2+"' ");

    if(query7.exec()){
        while(query7.next()){
            ui->lineEdit_12->setText(query7.value(0).toString());
            ui->lineEdit_13->setText(query7.value(1).toString());
            ui->lineEdit_14->setText(query7.value(2).toString());
            idsubj=ui->lineEdit_12->text();
            id = ui->lineEdit_13->text();
            idsect=ui->lineEdit_14->text();
            ui->lineEdit_12->hide();
            ui->lineEdit_13->hide();
            ui->lineEdit_14->hide();
            qDebug()<<"idsubject:";
            qDebug()<<idsubj;
            qDebug()<<"id:";
            qDebug()<<id;
            qDebug()<<"idsect:";
            qDebug()<<idsect;
        }
    }

}

void enrollment::on_unenrollSub_clicked()
{
    removedMsgBox();
}

void enrollment::on_removeSub_clicked()
{
    removedMsgBox2();
}
