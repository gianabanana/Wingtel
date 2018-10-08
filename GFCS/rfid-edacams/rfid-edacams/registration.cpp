#include "registration.h"
#include "ui_registration.h"
#include "mainwindow.h"
#include <QSortFilterProxyModel>
#include <QAbstractItemModel>

registration::registration(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::registration)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->addmain);
    databaseusername = "root";
    databasepassword ="1434456789";
    connectDatabase();
    loadComboBoxes();
     filterSection();
     setDesign();
     showTime();
     showDate();
}

registration::~registration()
{
    delete ui;
}

void registration::notifications(int notifCode)
{
    if (notifCode==1){
        ui->notification->setStyleSheet("QLabel { color : red; }");
        ui->notification->setText("username already exists!");
    }else if (notifCode==2){
        ui->notification->setStyleSheet("QLabel { color : green; }");
        ui->notification->setText("username available");

    }else if (notifCode==3){
        ui->notification_1->setStyleSheet("QLabel { color : red; }");
        ui->notification_1->setText("password do not match");
    }else if (notifCode==4){
        ui->notification_1->setStyleSheet("QLabel { color : green; }");
        ui->notification_1->setText("password matched");
    }else;
}


void registration::connectDatabase()
{
    //disconnect current database connections
    QStringList connections = QSqlDatabase::connectionNames();
    QString con;
    foreach (con,connections)
        QSqlDatabase::removeDatabase(con);

    QSqlDatabase db = QSqlDatabase::addDatabase( "QMYSQL" );
    db.setHostName( "localhost" );
    db.setDatabaseName( "edacams" );
    db.setUserName( databaseusername);
    db.setPassword( databasepassword );

    if( !db.open() )
    {
        qDebug() << db.lastError();
        ui->label_5->setText("\tFailed to connect.");
             qDebug("\tFailed to connect.");

    }else{
        ui->label_5->setText( "\t    Connected!" );
            qDebug( "\t    Connected!" );

    }
}

void registration::connClose()
{
    db.close();
    db.removeDatabase(QSqlDatabase::defaultConnection);
}

void registration::insertToEnroll()
{
    qDebug()<<"id user:";
    qDebug()<<idUser;

    QSqlQuery query;
    query.prepare("INSERT INTO edacams.subject (subjectName, subjectDescription, subjectUnits, subjectPreReq, subjectFor, subjectType)"
                  "VALUES (:subject, :description, :units, :prerequisite, :subjectfor, :type)");
    query.bindValue(":subject", subject);
    query.bindValue(":description", description);
    query.bindValue(":units", units);
    query.bindValue(":prerequisite", prerequisite);
    query.bindValue(":subjectfor", subjectfor);
    query.bindValue(":type", subjecttype);
    query.exec();
    qDebug()<<query.lastError();

    ui->subject_4->clear();
    ui->description_2->clear();
    ui->units_2->clear();
    ui->prerequisite_2->clear();
    ui->subjectfor_2->clear();
    ui->subjecttype_2->clear();

    qDebug()<<subject;
}

//void registration::getIDteacher()
//{
//    int logRow;
//    eTfname= ui->teacher->text();
//    eTlname= ui->teacher_2->text();
//    QString id;
//    QString fnameT;
//    QString lnameT;
//    QString userT;
//    usertype = "Admin";
//    QSqlQuery qteacher("SELECT iduser, uniqueID, firstname, lname, usertype FROM edacams.userdata  WHERE firstname LIKE '"+eTfname+"' AND lname LIKE '"+eTlname+"' AND usertype = '"+usertype+"' ");
//    QSqlQueryModel *logModel = new QSqlQueryModel(this);
//    logModel->setQuery(qteacher);
//    fnameT=logModel->index(0,2).data().toString();
//    if(fnameT==eTfname){
//        for(int i=0;i<logRow;i++){
//            lnameT =logModel->index(i,3).data().toString();
//            qDebug()<<fnameT<<"="<<eTfname;
//            if(lnameT==eTlname){
//                qDebug()<<lnameT<<"="<<eTlname;
//                userT = logModel->index(i,4).data().toString();
//                if(userT==usertype){
//                    id = logModel->index(i,0).data().toString();
//                    idteacher=id;
//                    qDebug()<<qteacher.lastError();
//                    qDebug()<<"ID teacher:";
//                    qDebug()<<idteacher;
//                }
//            }


//        }
//    } else{

//    }




//}


void registration::on_addStaff_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->addfaculty);


}

void registration::on_addRecords_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->addsubject);

}

void registration::on_addDepartment_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->addcourse);
}

void registration::on_main_clicked()
{
    mainwindow *gomain=new mainwindow;
    gomain->show();
    gomain->gobacktomain();
    gomain->addhide();
    this->hide();
}


void registration::on_firstname_2_textChanged()
{
    firstname=ui->firstname_2->text();
}

void registration::on_secondname_2_textChanged()
{
    secondname=ui->secondname_2->text();
}

void registration::on_thirdname_2_textChanged()
{
    thirdname=ui->thirdname_2->text();
}

void registration::on_middlename_2_textChanged()
{
    middlename=ui->middlename_2->text();
}

void registration::on_lastname_2_textChanged()
{
    lastname=ui->lastname_2->text();
}



void registration::on_department_currentTextChanged()
{
    department=ui->department->currentText();

}

void registration::on_street_2_textChanged()
{
    street=ui->street_2->text();
}

void registration::on_brgy_2_textChanged()
{
    brgy=ui->brgy_2->text();
}

void registration::on_city_2_textChanged()
{
    city=ui->city_2->text();
}


void registration::on_province_2_textChanged()
{
    province=ui->province_2->text();
}

void registration::on_emailadd_2_textChanged()
{
    emailadd=ui->emailadd_2->text();
}

void registration::on_contactnum_2_textChanged()
{
    contactnum=ui->contactnum_2->text();
}

void registration::on_username_textChanged()
{
    username=ui->username->text();
}

void registration::on_pw_textChanged()
{
    password=ui->pw->text();
}

void registration::on_rtypepw_textChanged()
{
    rtypepw=ui->rtypepw->text();
}

void registration::on_add_2_clicked()
{

    getIDdepartment();
    qDebug()<<"cardUID";
    qDebug()<<cardUID;

    QSqlQuery query;
    query.prepare("INSERT INTO edacams.userdata (userdata.uniqueID, userdata.firstname, userdata.secondname, userdata.thirdname, userdata.mname, userdata.lname, userdata.gender, userdata.street, userdata.brgy, userdata.city, userdata.province, userdata.email, userdata.contact, userdata.department_iddepartment, userdata.usertype, userdata.username, userdata.password)"
                  "VALUES ( :uniqueID, :firstname, :secondname, :thirdname, :mname, :lname, :gender, :street, :brgy, :city, :province, :emailadd, :contactnum, :department, :usertype, :username, :password)");

    query.bindValue(":uniqueID", cardUID);
    query.bindValue(":firstname", firstname);
    query.bindValue(":secondname", secondname);
    query.bindValue(":thirdname", thirdname);
    query.bindValue(":mname", middlename);
    query.bindValue(":lname", lastname);
    query.bindValue(":gender", gender);
    query.bindValue(":street", street);
    query.bindValue(":brgy", brgy);
    query.bindValue(":city", city);
    query.bindValue(":province", province);
    query.bindValue(":emailadd", emailadd);
    query.bindValue(":contactnum", contactnum);
    query.bindValue(":department", department2);
    query.bindValue(":usertype", usertype);
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    query.exec();
    qDebug()<<query.lastError();

    qDebug()<<username;
    eUsername=username;

    selectId();
    insertYrLevel();

    if (password!=rtypepw){
        notifications(3);
    }else{
        notifications(4);
    }

    ui->firstname_2->clear();
    ui->secondname_2->clear();
    ui->thirdname_2->clear();
    ui->middlename_2->clear();
    ui->lastname_2->clear();
   // ui->gender_2->clear();
    ui->department->clear();
    ui->street_2->clear();
    ui->brgy_2->clear();
    ui->city_2->clear();
    ui->province_2->clear();
    ui->emailadd_2->clear();
    ui->contactnum_2->clear();
    ui->username->clear();
    ui->pw->clear();
    ui->rtypepw->clear();

    ui->stackedWidget->setCurrentWidget(ui->addmain);
}

void registration::on_cancel_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->addmain);
}

void registration::on_subject_4_textChanged()
{
    subject=ui->subject_4->text();
}

void registration::on_description_2_textChanged()
{
    description=ui->description_2->text();
}

void registration::on_units_2_currentTextChanged()
{
    units=ui->units_2->currentText();
}

void registration::on_prerequisite_2_textChanged()
{
    prerequisite=ui->prerequisite_2->text();
}

void registration::on_subjectfor_2_currentTextChanged()
{
    subjectfor=ui->subjectfor_2->currentText();
}

void registration::on_subjecttype_2_currentTextChanged()
{
    subjecttype=ui->subjecttype_2->currentText();
}

void registration::on_add_3_clicked()
{
    QSqlQuery query;
    query.prepare("INSERT INTO edacams.subject (subjectName, subjectDescription, subjectUnits, subjectPreReq, subjectFor, subjectType)"
                  "VALUES (:subject, :description, :units, :prerequisite, :subjectfor, :type)");
    query.bindValue(":subject", subject);
    query.bindValue(":description", description);
    query.bindValue(":units", units);
    query.bindValue(":prerequisite", prerequisite);
    query.bindValue(":subjectfor", subjectfor);
    query.bindValue(":type", subjecttype);
    query.exec();
    qDebug()<<query.lastError();

    ui->subject_4->clear();
    ui->description_2->clear();
    ui->units_2->clear();
    ui->prerequisite_2->clear();
    ui->subjectfor_2->clear();
    ui->subjecttype_2->clear();

    qDebug()<<subject;

}

void registration::on_cancel_3_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->addmain);
}

void registration::on_addsection_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->addsection_2);
    viewSubjList();
    viewTeachers();
}


void registration::on_section_currentTextChanged()
{
    section=ui->section->currentText();


}

void registration::on_add_4_clicked()
{
    insertSection();
}

void registration::on_cancel_4_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->addmain);
    ui->section->clear();
    ui->subject_3->clear();
    ui->timeEdit->clear();
    ui->timeEdit_2->clear();
    ui->teacher->clear();
    ui->teacher_2->clear();
}

void registration::on_courseedit_textChanged()
{
    dcourseedit = ui->courseedit->text();
}

void registration::on_add_5_clicked()
{
    QSqlQuery query;
    query.prepare("INSERT INTO edacams.department (departmentName)"
                  "VALUES (:course)");
    query.bindValue(":course", dcourseedit);
    query.exec();
    qDebug()<<query.lastError();

    ui->courseedit->clear();
}

void registration::on_cancel_5_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->addmain);
}


void registration::on_male_2_clicked()
{
    gender = "Male";
}

void registration::on_female_2_clicked()
{
    gender = "Female";
}

void registration::on_scanID_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->scan);
    ui->stackedWidget_2->setCurrentIndex(0);
    scanScard();
}

void registration::on_okID_clicked()
{
    qDebug()<<"card number:";
    qDebug()<<cardUID;
    ui->stackedWidget->setCurrentWidget(ui->addfaculty);
}

void registration::newNumber(QString cardName)
{
     cardUID = cardName;
     ui->stackedWidget_2->setCurrentIndex(1);
     ui->cardUID->setText(cardUID);
}

void registration::insertSection()
{
            getIDdays();
            getIDsection();
            qDebug()<<"subject: "<<"="<<idSubject;
            QSqlQuery query;
            query.prepare("INSERT INTO edacams.section (sectioning_idsectioning, sectionStart, sectionEnd, days_iddays, room, userdata_iduser)"
                          "VALUES (:section, :classstart, :classend, :days, :room, :iduser)");
            query.bindValue(":section", section);
            query.bindValue(":classstart", timestart);
            query.bindValue(":classend", timeend);
            query.bindValue(":days", days);
            query.bindValue(":room", room);
            query.bindValue(":iduser", idteacher);
            query.exec();
            qDebug()<<query.lastError();


            QSqlQuery getID;
            getID.prepare("SELECT idsection FROM edacams.section WHERE sectioning_idsectioning = '"+section+"' AND sectionStart = '"+timestart+"' AND sectionEnd = '"+timeend+"' AND days_iddays = '"+days+"' AND room = '"+room+"' AND userdata_iduser = '"+idteacher+"' ");
            getID.exec();
            QSqlQueryModel *IDModel = new QSqlQueryModel(this);
            IDModel->setQuery(getID);
            idsection = IDModel->index(0,0).data().toString();

            insertSecSub();
            ui->subject_3->clear();
            ui->section->clear();
            ui->timeEdit->clear();
            ui->timeEdit_2->clear();
            ui->days->clear();
            ui->room->clear();
            ui->fullname->clear();
            ui->stackedWidget->setCurrentIndex(0);

}

void registration::insertYrLevel()
{
    QSqlQuery insertYr;
    insertYr.prepare("INSERT INTO edacams.yearlevel (yearlevelcode, userdata_iduser) "
                     "VALUES (:yrlevel, :id)");
    insertYr.bindValue(":yrlevel", yearlevel);
    insertYr.bindValue(":id", id);
    insertYr.exec();
    qDebug()<<insertYr.lastError();
    
}

void registration::selectId()
{
    QSqlQuery selectId;
    selectId.prepare("SELECT userdata.iduser FROM edacams.userdata WHERE userdata.username = '"+username+"'");
    selectId.exec();
    QSqlQueryModel *idmodel = new QSqlQueryModel(this);
    idmodel->setQuery(selectId);
    qDebug()<<selectId.lastError();

    id = idmodel->index(0,0).data().toString();
    qDebug()<<"username:";
    qDebug()<<username;
    qDebug()<<"id:";
    qDebug()<<id;
}

void registration::viewSubjList()
{
    QSqlQueryModel *modelv=new QSqlQueryModel();
    QSqlQuery queryv;

    queryv.prepare("SELECT subject.idsubject, subject.subjectName, subject.subjectDescription "
                      "FROM edacams.subject ");
    queryv.exec();
    qDebug()<<queryv.lastError();
    modelv->setQuery(queryv);
    ui->clickSubj->setModel(modelv);
    ui->clickSubj->hideColumn(0);
    ui->clickSubj->setColumnWidth(1, 100);
    ui->clickSubj->setColumnWidth(2, 200);
}

void registration::insertSecSub()
{
    qDebug()<<idSubject;
    qDebug()<<idsection;
    QSqlQuery query;
    query.prepare("INSERT INTO edacams.secsub (subject_idsubject, section_idsection)"
                  "VALUES (:idsubject, :idsection)");
    query.bindValue(":idsubject", idSubject);
    query.bindValue(":idsection", idsection);
    query.exec();
    qDebug()<<query.lastError();

}


void registration::viewTeachers()
{
    usertype = "Admin";
    QSqlQueryModel *model=new QSqlQueryModel();
    QSqlQuery query;
    ui->add_4->setDisabled(true);
    query.prepare("SELECT userdata.lname, userdata.firstname "
                   "FROM edacams.userdata "
                   "WHERE userdata.usertype = '"+usertype+"'");
    query.exec();
    qDebug()<<query.lastError();

    model->setQuery(query);
    qDebug()<<model->lastError();
    ui->teacherList->setModel(model);
    ui->teacherList->setColumnWidth(0, 100);
    ui->teacherList->setColumnWidth(1, 100);
}

void registration::loadComboBoxes()
{
    Qt::SortOrder order =Qt::AscendingOrder;
    int logRow;
    QString dprttype;
    QSqlQuery dprtquery;
    dprtquery.prepare("SELECT departmentName FROM edacams.department");
    dprtquery.exec();
    QSqlQueryModel *dprtModel = new QSqlQueryModel(this);
    dprtModel->setQuery(dprtquery);
    logRow = dprtModel->rowCount();
    dprtModel->sort(0,order);
    for(int i=0;i<logRow;i++){
        dprttype = dprtModel->index(i,0).data().toString();
        ui->department->addItem(dprttype);
    }

    int subjRow;
    QString subjtype;
    QSqlQuery subjquery;
    subjquery.prepare("SELECT departmentName FROM edacams.department");
    subjquery.exec();
    QSqlQueryModel *subjModel = new QSqlQueryModel(this);
    subjModel->setQuery(subjquery);
    subjRow = subjModel->rowCount();
    subjModel->sort(0,order);
    for(int i=0;i<subjRow;i++){
        subjtype = subjModel->index(i,0).data().toString();
        ui->subjectfor_2->addItem(subjtype);
    }

    int daysRow;
    QString daystype;
    QSqlQuery daysquery;
    daysquery.prepare("SELECT descriptionDays FROM edacams.days");
    daysquery.exec();
    QSqlQueryModel *daysModel = new QSqlQueryModel(this);
    daysModel->setQuery(daysquery);
    daysRow = daysModel->rowCount();
    daysModel->sort(0,order);
    for(int i=0;i<daysRow;i++){
        daystype = daysModel->index(i,0).data().toString();
        ui->days->addItem(daystype);
    }

}

void registration::getIDsection()
{
    QSqlQuery getID;
    getID.prepare("SELECT idsectioning FROM edacams.sectioning WHERE sectionName = '"+section+"'");
    getID.exec();
    QSqlQueryModel *IDModel = new QSqlQueryModel(this);
    IDModel->setQuery(getID);
    section = IDModel->index(0,0).data().toString();
}

void registration::getIDdays()
{
    QSqlQuery getID;
    getID.prepare("SELECT iddays FROM edacams.days WHERE descriptionDays = '"+days+"'");
    getID.exec();
    QSqlQueryModel *IDModel = new QSqlQueryModel(this);
    IDModel->setQuery(getID);
    days = IDModel->index(0,0).data().toString();

}

void registration::filterSection()
{
    Qt::SortOrder order =Qt::AscendingOrder;
    int secRow;
    QSqlQuery secquery;
    secquery.prepare("SELECT sectionName FROM edacams.sectioning ");
    secquery.exec();
    qDebug()<<secquery.lastError();
    QSqlQueryModel *secModel = new QSqlQueryModel(this);
    secModel->setQuery(secquery);
    secRow = secModel->rowCount();
    secModel->sort(0,order);
    for(int i=0;i<secRow;i++){
        filterSec = secModel->index(i,0).data().toString();


        QString secttype;
        QSqlQuery sectquery;
        sectquery.prepare("SELECT sectioning.sectionName "
                          "FROM edacams.secsub "
                          "INNER JOIN edacams.section "
                          "ON section.idsection=secsub.section_idsection "
                          "INNER JOIN edacams.sectioning "
                          "ON sectioning.idsectioning=section.sectioning_idsectioning "
                          "WHERE secsub.subject_idsubject LIKE '"+idSubject+"'");
        sectquery.exec();
        qDebug()<<sectquery.lastError();
        QSqlQueryModel *sectModel = new QSqlQueryModel(this);
        sectModel->setQuery(sectquery);
        secttype = sectModel->index(0,0).data().toString();
            if(secttype==filterSec){
                ui->section->removeItem(i);
                qDebug()<<"removed: "<<filterSec;

            } else {
                qDebug()<<"display: "<<filterSec;
             }
        ui->section->addItem(filterSec);

    }



}

void registration::setDesign()
{
    QString styleSheet = "::section {" // "QHeaderView::section {"
            "spacing: 10px;"
            "background-color: #008ed5;"
            "color: #5e0000;"


            "margin: 1px;"
            "text-align: right;"
            "font-family: arial;"
            "font-size: 12px; }";

ui->clickSubj->horizontalHeader()->setStyleSheet(styleSheet);
ui->teacherList->horizontalHeader()->setStyleSheet(styleSheet);
}

void registration::getIDdepartment()
{
    QSqlQuery idD;
    idD.prepare("SELECT iddepartment FROM edacams.department WHERE departmentName = '"+department+"'");
    idD.exec();
    QSqlQueryModel *dprtModel = new QSqlQueryModel(this);
    dprtModel->setQuery(idD);
    department2 = dprtModel->index(0,0).data().toString();
}


void registration::showTime()
{
    QTime time= QTime::currentTime();
    QString time_text=time.toString("h:mm AP");
    ui->time_2->setText(time_text);
}

void registration::showDate()
{
    QDate date=QDate::currentDate();
    QString date_text=date.toString("dddd, d MMMM, yyyy");
    ui->date_2->setText(date_text);
}




void registration::scanScard()
{
    connect(&iScan,&scanID::on_number,this,&registration::newNumber);
    QFuture<void> test = QtConcurrent::run(&this->iScan,&scanID::start,QString("Start Read"));

}

void registration::on_admin_clicked()
{
    usertype="Admin";
}

void registration::on_student_clicked()
{
    usertype="Student";

}

void registration::on_timeEdit_timeChanged()
{
    QTime time= QTime::fromString(ui->timeEdit->text());
    QString timefrom = time.toString("hh:mm:ss");
    timestart = timefrom;

}

void registration::on_timeEdit_2_timeChanged()
{
    QTime time1= QTime::fromString(ui->timeEdit_2->text());
    QString timeto = time1.toString("hh:mm:ss");
    timeend = timeto;
}

void registration::on_room_textChanged()
{
    room = ui->room->text();
}


void registration::on_days_currentTextChanged()
{
    days = ui->days->currentText();
}

void registration::on_yearlevel_currentTextChanged()
{
    yearlevel = ui->yearlevel->currentText();
}

void registration::on_clickSubj_clicked(const QModelIndex &index)
{
    ui->add_4->setEnabled(true);
    int row = index.row();
    eID = index.sibling(row, 0).data().toInt();

    ui->clickSubj->selectRow(row);
    QString val2 = ui->clickSubj->model()->data(index).toString();
    QSqlQuery clickit;
    clickit.prepare("SELECT * FROM edacams.subject WHERE idsubject = '"+val2+"' or subjectName = '"+val2+"' or subjectDescription = '"+val2+"' or subjectUnits='"+val2+"' or subjectPreReq='"+val2+"' or subjectFor='"+val2+"' or subjectType='"+val2+"' ");
    if (clickit.exec()){
        while(clickit.next()){    
            ui->label_19->setText(clickit.value(0).toString());
            ui->label_19->hide();         
            idSubject = ui->label_19->text();

            ui->subject_3->setText(clickit.value(1).toString());
        }
    }



}

void registration::on_teacherList_clicked(const QModelIndex &index)
{
    ui->add_4->setEnabled(true);

    int row = index.row();
    eID = index.sibling(row, 0).data().toInt();
    ui->teacherList->selectRow(row);
    QString val = ui->teacherList->model()->data(index).toString();
    QSqlQuery clickit;
    clickit.prepare("SELECT * FROM edacams.userdata WHERE iduser='"+val+"' or uniqueID='"+val+"' or firstname='"+val+"' or secondname='"+val+"' or thirdname='"+val+"' or mname='"+val+"' or lname='"+val+"' or gender='"+val+"' or street='"+val+"' or brgy='"+val+"' or city='"+val+"' or province='"+val+"' or email='"+val+"' or contact='"+val+"'  or department_iddepartment='"+val+"'  or usertype='"+val+"'  or username='"+val+"'  or password='"+val+"'");

    if(clickit.exec()){
        while(clickit.next()){
            ui->label_16->setText(clickit.value(0).toString());
            ui->teacher->setText(clickit.value(2).toString());
            ui->teacher_2->setText(clickit.value(6).toString());
            idteacher = ui->label_16->text();
            teacherfname=ui->teacher->text();
            teacherlname=ui->teacher_2->text();
            fullname= teacherfname+" "+teacherlname;
            ui->fullname->setText(fullname);
            ui->fullname->text();
            ui->label_16->hide();
            ui->teacher->hide();
            ui->teacher_2->hide();
            qDebug()<<"fname:";
            qDebug()<<teacherfname;
            qDebug()<<"lname:";
            qDebug()<<teacherlname;
            qDebug()<<"fullname:";
            qDebug()<<fullname;

        }
    }
}
