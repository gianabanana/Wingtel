#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "registration.h"
#include "enrollment.h"
#include <QSortFilterProxyModel>

mainwindow::mainwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwindow)
{
    ui->setupUi(this);
    scanScard();
    ui->stackedWidget->setCurrentIndex(1);
    ui->password->setEchoMode(ui->password->Password);
    ui->mPw->setEchoMode(ui->mPw->Password);
    databaseusername = "root";
    databasepassword ="kokonat23";
    connectDatabase();
    loadComboBoxes();
    showTime();
    showDate();
    setDesign();
    logIn();
    logIn2();
}

mainwindow::~mainwindow()
{
    delete ui;
}

void mainwindow::showTime()
{
    QTime time= QTime::currentTime();
    QString time_text=time.toString("h:mm AP");
    ui->time_2->setText(time_text);
}

void mainwindow::showDate()
{
    QDate date=QDate::currentDate();
    QString date_text=date.toString("dddd, d MMMM, yyyy");
    ui->date_2->setText(date_text);
}


void mainwindow::getTime()
{
    qDebug()<<id;
    for (int i=0;i<10;i++){
    ui->label_36->hide();
    ui->label_37->hide();
    QDate date2=QDate::currentDate();
    QString date2_text=date2.toString("yyyy-MM-dd");
    ui->label_36->setText(date2_text);
    QTime time2= QTime::currentTime();
    QString time2_text=time2.toString("hh:mm:ss");
    ui->label_37->setText(time2_text);
    date=ui->label_36->text();
    time=ui->label_37->text();
    }
    qDebug()<<time;
    qDebug()<<date;

    QSqlQuery query;
    query.prepare("INSERT INTO logs(logTime, logDate, logprocesstype_idlogprocess, userdata_iduser) "
                  "VALUES (:logTime, :logDate, '3', :id)");
    query.bindValue(":logTime", time);
    query.bindValue(":logDate", date);
    query.bindValue(":id", id);
    query.exec();
    qDebug()<<query.lastError();
}

void mainwindow::gobacktomain()
{
    ui->stackedWidget->setCurrentWidget(ui->edacams);
}

void mainwindow::logIn()
{

    int logRow;
    QString uniq;
    QString unique1;
    QString sfirstname;
    QString slastname;
    QString user;
    QString usert;
    QString iduser;
    QSqlQuery qsearch("SELECT iduser, uniqueID, firstname, lname, username, usertype FROM edacams.userdata  WHERE uniqueID = '"+cardUID+"'");
    QSqlQueryModel *logModel = new QSqlQueryModel(this);
    logModel->setQuery(qsearch);
    logRow=logModel->rowCount();
    iduser=logModel->index(0,0).data().toString();
    id=iduser;
    unique1=logModel->index(0,1).data().toString();
    if (unique1==cardUID){
        for(int i=0;i<logRow;i++) {
            uniq=logModel->index(i,1).data().toString();
            qDebug()<<uniq<<"="<<cardUID;
            if (uniq==cardUID){
                for(int i=0;i<logRow;i++){
                    sfirstname=logModel->index(i,2).data().toString();
                    firstname=sfirstname;

                    slastname=logModel->index(i,3).data().toString();
                    lastname=slastname;

                    QString sfullname = sfirstname+" "+slastname;
                    ui->fullname->setText(sfullname);

                    user=logModel->index(i,4).data().toString();
                    username=user;
                    ui->username->setText(user);
                    ui->fullname_2->setText(sfullname);
                    usert=logModel->index(i,5).data().toString();

                    ui->usertypelabel->setText(usert);
                    userType=usert;

                    getTime();
                }
            }else {

            }
        }
    } else {
        ui->fullname->setText("Invalid User! To register, ask assistance from an Admin");
    }

    
}

void mainwindow::logIn2()
{
    int logRow;
    QString uniq;
    QString unique1;
    QString sfirstname;
    QString slastname;
    QString user;
    QString usert;
    QString iduser;
    QSqlQuery qsearch("SELECT iduser, uniqueID, firstname, lname, username, usertype FROM edacams.userdata  WHERE username = '"+mUsername+"'");
    QSqlQueryModel *logModel = new QSqlQueryModel(this);
    logModel->setQuery(qsearch);
    logRow=logModel->rowCount();
    iduser=logModel->index(0,0).data().toString();
    id=iduser;
    unique1=logModel->index(0,4).data().toString();
    if (unique1==mUsername){
        for(int i=0;i<logRow;i++) {
            uniq=logModel->index(i,4).data().toString();
            qDebug()<<uniq<<"="<<mUsername;
            if (uniq==mUsername){
                for(int i=0;i<logRow;i++){
                    sfirstname=logModel->index(i,2).data().toString();
                    firstname=sfirstname;

                    slastname=logModel->index(i,3).data().toString();
                    lastname=slastname;

                    QString sfullname = sfirstname+" "+slastname;
                    ui->fullname->setText(sfullname);

                    user=logModel->index(i,4).data().toString();
                    //mUsername=user;
                    ui->username->setText(user);

                    usert=logModel->index(i,5).data().toString();

                    ui->fullname_2->setText(sfullname);
                    ui->usertypelabel->setText(usert);
                    //userType=usert;

                    getTime();
                }
            }else {

            }
        }
    } else {
        ui->fullname->setText("Invalid User! To register, ask assistance from an Admin");
    }

}

void mainwindow::getDepartment()
{
    QSqlQueryModel *getdprt = new QSqlQueryModel();
    QSqlQuery getD;
    getD.prepare("SELECT departmentName FROM edacams.department WHERE iddepartment = '"+department+"'");
    getD.exec();
    qDebug()<<"dprt: ";
    qDebug()<<department;
    
    getdprt->setQuery(getD);
    department2 = getdprt->index(0,0).data().toString();
}

void mainwindow::getYrlevel()
{
    QSqlQueryModel *getlevel = new QSqlQueryModel();
    QSqlQuery getLevel;
    getLevel.prepare("SELECT yearlevelcode FROM edacams.yearlevel WHERE yearlevel.userdata_iduser = '"+id+"'");
    getLevel.exec();
    qDebug()<<"id:";
    qDebug()<<id;
    qDebug()<<getLevel.lastError();
    getlevel->setQuery(getLevel);
    yearlevel = getlevel->index(0,0).data().toString();
}

void mainwindow::refreshList()
{
    if(userType=="Student"){
        ui->deleteStudent->hide();
        QSqlQueryModel *model=new QSqlQueryModel(this);
        QSqlQuery query4;
        query4.prepare("SELECT userdata.iduser, userdata.firstname, userdata.lname, department.departmentName "
                       "FROM userdata "
                       "INNER JOIN department "
                       "ON department.iddepartment=userdata.department_iddepartment "
                       "WHERE userdata.iduser = '"+id+"'");
        query4.exec();
        qDebug()<<query4.lastError();

        model->setQuery(query4);
        qDebug()<<model->lastError();
        ui->studentlist->setModel(model);
        ui->studentlist->hideColumn(0);
        ui->studentlist->setColumnWidth(1, 100);
        ui->studentlist->setColumnWidth(2, 100);
        ui->studentlist->setColumnWidth(3, 330);

    }else{
        ui->deleteStudent->show();
        QSqlQueryModel *model=new QSqlQueryModel(this);
        QSqlQuery query4;
        query4.prepare("SELECT userdata.iduser, userdata.firstname, userdata.lname, department.departmentName "
                       "FROM userdata "
                       "INNER JOIN department "
                       "ON department.iddepartment=userdata.department_iddepartment");
        query4.exec();
        qDebug()<<query4.lastError();

        model->setQuery(query4);
        qDebug()<<model->lastError();
        ui->studentlist->setModel(model);
        ui->studentlist->hideColumn(0);
        ui->studentlist->setColumnWidth(1, 100);
        ui->studentlist->setColumnWidth(2, 100);
        ui->studentlist->setColumnWidth(3, 330);

    }
}

void mainwindow::deleteYr()
{
    QSqlQuery query;
    query.prepare("DELETE FROM edacams.yearlevel WHERE userdata_iduser= (:id)");
    query.bindValue(":id", id);
    query.exec();
    qDebug()<<id;
    qDebug()<<query.lastError();
}

void mainwindow::deleteStudSub()
{
    QSqlQuery delStud;
    delStud.prepare("DELETE FROM edacams.studsub WHERE userdata_iduser= (:id)");
    delStud.bindValue(":id", id);
    delStud.exec();
    qDebug()<<id;
    qDebug()<<delStud.lastError();
}

void mainwindow::deleteSec()
{
    QSqlQuery delSec;
    delSec.prepare("DELETE FROM edacams.section WHERE section.userdata_iduser= (:id)");
    delSec.bindValue(":id", id);
    delSec.exec();
    qDebug()<<id;
    qDebug()<<delSec.lastError();
}

void mainwindow::deleteLogs()
{
    QSqlQuery delLogs;
    delLogs.prepare("DELETE FROM edacams.logs WHERE userdata_iduser=(:id)");
    delLogs.bindValue(":id", id);
    delLogs.exec();
    qDebug()<<id;
    qDebug()<<delLogs.lastError();
}

void mainwindow::deleteEnrolled()
{
    QSqlQuery delSched;
    delSched.prepare("DELETE FROM edacams.enroll WHERE userdata_iduser=(:id)");
    delSched.bindValue(":id", id);
    delSched.exec();
    qDebug()<<id;
    qDebug()<<delSched.lastError();
}

void mainwindow::deleteUser()
{
    QSqlQuery delUser;
    delUser.prepare("DELETE FROM edacams.userdata WHERE iduser=(:id)");
    delUser.bindValue(":id", id);
    delUser.exec();
    qDebug()<<id;
    qDebug()<<delUser.lastError();
}

void mainwindow::loadComboBoxes()
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
    ui->comboBox->addItem("All Departments");
    for(int i=0;i<logRow;i++){
        dprttype = dprtModel->index(i,0).data().toString();
        ui->comboBox->addItem(dprttype);
        ui->course->addItem(dprttype);

    }
}

void mainwindow::getIDdepartment()
{
    qDebug()<<department2;
    QSqlQuery idD;
    idD.prepare("SELECT iddepartment FROM edacams.department WHERE departmentName = '"+department2+"'");
    idD.exec();
    QSqlQueryModel *dprtModel = new QSqlQueryModel(this);
    dprtModel->setQuery(idD);
    department = dprtModel->index(0,0).data().toString();
}

void mainwindow::setDesign()
{
    QString styleSheet = "::section {" // "QHeaderView::section {"
                         "spacing: 10px;"
                         "background-color: #008ed5;"
                         "color: #5e0000;"


                         "margin: 1px;"
                         "text-align: right;"
                         "font-family: arial;"
                         "font-size: 12px; }";

    ui->studentlist->horizontalHeader()->setStyleSheet(styleSheet);
    ui->timelogs->horizontalHeader()->setStyleSheet(styleSheet);


}

void mainwindow::addhide()
{
 ui->label_3->hide();
 ui->fullname_2->hide();
 ui->frame_3->hide();
}

void mainwindow::scanScard()
{
    connect(&iScan,&scanID::on_number,this,&mainwindow::newNumber);
    QFuture<void> test = QtConcurrent::run(&this->iScan,&scanID::start,QString("Start Read"));

}

void mainwindow::newNumber(QString cardName)
{

    cardUID = cardName;
    ui->stackedWidget->setCurrentIndex(1);
    logIn();
}

void mainwindow::connectDatabase()
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

void mainwindow::connClose()
{
    db.close();
    db.removeDatabase(QSqlDatabase::defaultConnection);
}

void mainwindow::on_submit_clicked()
{
    eUsername=ui->username->text();
    ePassword=ui->password->text();


    int logRow;

    QString sUsername;
    QString sPassword;
    QString logQuery("SELECT iduser, username, password FROM edacams.userdata");
    QSqlQueryModel *logModel = new QSqlQueryModel(this);
    logModel->setQuery(logQuery);
    logRow=logModel->rowCount();

    for(int i=0;i<logRow;i++){
        id=logModel->index(i,0).data().toString();
        sUsername= logModel->index(i,1).data().toString();
        qDebug()<<sUsername<<"="<<eUsername;
        if (sUsername==eUsername){
            for(int i=0;i<logRow;i++){
                sPassword=logModel->index(i,2).data().toString();
                if (sPassword==ePassword){
                    qDebug()<<sPassword<<"="<<ePassword;
                        if(userType=="Student"){
                            ui->stackedWidget->setCurrentIndex(3);
                            ui->onlineEnrollment->hide();
                            ui->onlineRegistration->hide();
                            ui->comboBox->hide();
                            ui->studentSearch->hide();
                            ui->label_6->hide();
                            ui->label_8->hide();
                            ui->search_3->hide();
                            ui->pushButton->hide();
                            ui->cleartimelog->hide();
                            ui->stackedWidget->setCurrentWidget(ui->edacams);

                            ui->fullname->clear();
                            ui->username->clear();

                        }else{
                            ui->stackedWidget->setCurrentIndex(3);
                            ui->onlineEnrollment->show();
                            ui->onlineRegistration->show();
                            ui->comboBox->show();
                            ui->studentSearch->show();
                            ui->label_6->show();
                            ui->label_8->show();
                            ui->search_3->show();
                            ui->pushButton->show();
                            ui->cleartimelog->show();
                            ui->stackedWidget->setCurrentWidget(ui->edacams);

                            ui->fullname->clear();
                            ui->username->clear();
                        }

                }else{
                    ui->label_5->setText("\t Password incorrect!");
                }
            }
            break;
        }else{
            ui->label_5->setText("\t Username not found!");
        }
    }
}

void mainwindow::on_cancel_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->username->clear();
    ui->password->clear();
    ui->fullname->clear();
    uniqueID.clear();
    scanScard();
}

void mainwindow::on_checkBoxpw_toggled(bool checked)
{
    if (checked){
        ui->password->setEchoMode(ui->password->Normal);
    }else{
        ui->password->setEchoMode(ui->password->Password);
    }
}

void mainwindow::on_recStudent_clicked()
{
    qDebug()<<"id: ";
    qDebug()<<id;
    ui->stackedWidget->setCurrentWidget(ui->searchstudent);
    ui->timelog->setDisabled(true);
    ui->updateStudent->setDisabled(true);
    ui->deleteStudent->setDisabled(true);
    if(userType=="Student"){
        ui->deleteStudent->hide();
        QSqlQueryModel *model=new QSqlQueryModel(this);
        QSqlQuery query4;
        query4.prepare("SELECT userdata.iduser, userdata.firstname, userdata.lname, department.departmentName "
                       "FROM userdata "
                       "INNER JOIN department "
                       "ON department.iddepartment=userdata.department_iddepartment "
                       "WHERE userdata.iduser = '"+id+"'");
        query4.exec();
        qDebug()<<query4.lastError();

        model->setQuery(query4);
        qDebug()<<model->lastError();
//        model2 = QStandardItemModel();
//        model2.setHorizontalHeaderLabels(['Name', 'Age', 'Sex', 'Add']);
//        table = QTableView();
        ui->studentlist->setModel(model);
        ui->studentlist->hideColumn(0);
        ui->studentlist->setColumnWidth(1, 100);
//        ui->studentlist->horizontalHeader()->
        ui->studentlist->setColumnWidth(2, 100);
        ui->studentlist->setColumnWidth(3, 330);

    }else{
        ui->deleteStudent->show();

        QSqlQueryModel *model=new QSqlQueryModel(this);
        QSqlQuery query4;
        query4.prepare("SELECT userdata.iduser, userdata.firstname, userdata.lname, department.departmentName "
                       "FROM userdata "
                       "INNER JOIN department "
                       "ON department.iddepartment=userdata.department_iddepartment");
        query4.exec();
        qDebug()<<query4.lastError();

        model->setQuery(query4);
        qDebug()<<model->lastError();
        ui->studentlist->setModel(model);
        ui->studentlist->hideColumn(0);
        ui->studentlist->setColumnWidth(1, 100);
        ui->studentlist->setColumnWidth(2, 100);
        ui->studentlist->setColumnWidth(3, 330);
    }
}

void mainwindow::on_onlineRegistration_clicked()
{
    registration *add=new registration;
    add->show();
    this->hide();
}

void mainwindow::on_onlineEnrollment_clicked()
{
    enrollment *enroll=new enrollment;
    enroll->show();
    this->hide();
}

void mainwindow::on_logout_clicked()
{
    QString user=ui->username->text();
    qDebug()<<user;

    QSqlQuery query;
    query.prepare("INSERT INTO edacams.logs(logTime, logDate, logprocesstype_idlogprocess, userdata_iduser) "
                    "VALUES (:logTime, :logDate, '4', :iduser)");
    query.bindValue(":logTime", time);
    query.bindValue(":logDate", date);
    query.bindValue(":iduser", id);
    query.exec();
    qDebug()<<query.lastError();

//    QSqlQuery query2;
//    query2.prepare("UPDATE logs INNER JOIN userdata ON '"+user+"' = userdata.username SET logs.userdata_iduser=userdata.iduser");
//    query2.exec();
//    qDebug()<<query2.lastError();

    connClose();
    ui->stackedWidget->setCurrentWidget(ui->scanCard);
    ui->username->clear();
    ui->password->clear();
    ui->fullname->clear();
    ui->fullname_2->clear();
    scanScard();
    connectDatabase();
}

void mainwindow::on_timelog_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->viewtimelog);
    QSqlQueryModel *model=new QSqlQueryModel();
    QSqlQuery query;
    qDebug()<<id;
    query.prepare("SELECT logs.idlogs, logs.logTime, logs.logDate, logprocesstype.logProcessType, userdata.username "
                  "FROM logs "
                  "INNER JOIN logprocesstype "
                  "ON logprocesstype.idlogprocess=logs.logprocesstype_idlogprocess "
                  "INNER JOIN userdata "
                  "ON userdata.iduser=logs.userdata_iduser "
                  "WHERE userdata.iduser = '"+id+"'");
    query.exec();
    qDebug()<<query.lastError();

    model->setQuery(query);
    ui->timelogs->setModel(model);
    ui->timelogs->setColumnWidth(0, 80);
    ui->timelogs->setColumnWidth(1, 100);
    ui->timelogs->setColumnWidth(2, 100);
    ui->timelogs->setColumnWidth(3, 140);
    ui->timelogs->setColumnWidth(4, 100);
}

void mainwindow::on_updateStudent_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->studentinfo);
    ui->profiles->setCurrentIndex(0);
}

void mainwindow::on_deleteStudent_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->deletestudent);
}

void mainwindow::on_main_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->edacams);
    addhide();
}

void mainwindow::on_search_3_clicked()
{
    QSqlQueryModel *model2 = new QSqlQueryModel;
    QSqlQuery query3;
    QString input=ui->studentSearch->text();
    if(department2=="All Departments"){
        query3.prepare("SELECT userdata.iduser, userdata.firstname, userdata.lname, department.departmentName "
                       "FROM userdata "
                       "INNER JOIN department "
                       "ON department.iddepartment=userdata.department_iddepartment "
                       "WHERE lname LIKE '"+input+"%'");
        query3.exec();
        qDebug()<<query3.lastError();

        model2->setQuery(query3);
        ui->studentlist->setModel(model2);
        ui->studentlist->hideColumn(0);
        ui->studentlist->setColumnWidth(1, 100);
        ui->studentlist->setColumnWidth(2, 100);
        ui->studentlist->setColumnWidth(3, 330);
        int count=model2->rowCount();
        QString stringA= "Searching for '";
        QString searchQuery= ui->studentSearch->text();
        QString stringB="'...";
        stringA.append(searchQuery);
        stringA.append(stringB);
        ui->searching_2->show();
        ui->searching_2->setText(stringA);
        QString string= "There are ";
        QString results= QString::number(count);
        QString end2=" result(s).";
        string.append(results);
        string.append(end2);
        ui->thereare_2->show();
        ui->thereare_2->setText(string);
    } else {
        query3.prepare("SELECT userdata.iduser, userdata.firstname, userdata.lname, department.departmentName "
                       "FROM userdata "
                       "INNER JOIN department "
                       "ON department.iddepartment=userdata.department_iddepartment "
                       "WHERE lname LIKE '"+input+"%' AND departmentName = '"+department2+"'");
        query3.exec();
        qDebug()<<query3.lastError();

        model2->setQuery(query3);
        ui->studentlist->setModel(model2);
        ui->studentlist->hideColumn(0);
        ui->studentlist->setColumnWidth(1, 100);
        ui->studentlist->setColumnWidth(2, 100);
        ui->studentlist->setColumnWidth(3, 330);
        int count=model2->rowCount();
        QString stringA= "Searching for '";
        QString searchQuery= ui->studentSearch->text();
        QString stringB="'...";
        stringA.append(searchQuery);
        stringA.append(stringB);
        ui->searching_2->setText(stringA);
        QString string= "There are ";
        QString results= QString::number(count);
        QString end2=" result(s).";
        string.append(results);
        string.append(end2);
        ui->thereare_2->setText(string);
    }
}

void mainwindow::on_studentlist_clicked(const QModelIndex &index)
{
    ui->timelog->setEnabled(true);
    ui->updateStudent->setEnabled(true);
    ui->deleteStudent->setEnabled(true);
    int row=index.row();
    eID = index.sibling(row, 0).data().toInt();
    qDebug()<<"eID:";
    qDebug()<<eID;

    ui->studentlist->selectRow(row);
    QString usertype;
    QString val=ui->studentlist->model()->data(index).toString();

    QSqlQuery query2;
    query2.prepare("SELECT * FROM edacams.userdata WHERE iduser = '"+val+"' or firstname='"+val+"' or secondname='"+val+"' or thirdname='"+val+"' or mname='"+val+"' or lname='"+val+"' or gender='"+val+"' or street='"+val+"' or brgy='"+val+"' or city='"+val+"' or province='"+val+"' or email='"+val+"' or contact='"+val+"' or department_iddepartment='"+val+"' or usertype='"+val+"' or username='"+val+"' or password='"+val+"'");

    if(query2.exec()){
        while(query2.next()){
                id = query2.value(0).toString();
                QString fullname = query2.value(2).toString()+" "+query2.value(3).toString()+" "+query2.value(4).toString()+" "+query2.value(5).toString()+" "+query2.value(6).toString();
                QString address = query2.value(8).toString()+" "+query2.value(9).toString()+" "+query2.value(10).toString()+","+query2.value(11).toString();
                department = query2.value(14).toString();

                getDepartment();
                getYrlevel();
                ui->nameprof->setText(fullname);
                ui->idnumprof->setText(query2.value(16).toString());
                ui->addressprof->setText(address);
                ui->genderprof->setText(query2.value(7).toString());
                ui->courseprof->setText(department2);
                ui->yearlevelprof->setText(yearlevel);
                ui->emailprof->setText(query2.value(12).toString());
                ui->contactprof->setText(query2.value(13).toString());

                ui->firstname_2->setText(query2.value(2).toString());
                ui->secondname->setText(query2.value(3).toString());
                ui->thirdname->setText(query2.value(4).toString());
                ui->middlename->setText(query2.value(5).toString());
                ui->lastname->setText(query2.value(6).toString());
                ui->gender->setText(query2.value(7).toString());
                if (gender=="Male"){
                    ui->male->click();
                }else{
                    ui->female->click();
                }
                ui->street->setText(query2.value(8).toString());
                ui->brgy->setText(query2.value(9).toString());
                ui->city->setText(query2.value(10).toString());
                ui->province->setText(query2.value(11).toString());
                ui->emailadd->setText(query2.value(12).toString());
                ui->contact->setText(query2.value(13).toString());
                ui->course->setCurrentText(department2);
                ui->yearlevel->setCurrentText(yearlevel);
                //ui->usertype->setText(query2.value(14).toString());
                ui->username_3->setText(query2.value(16).toString());
                ui->pw_3->setText(query2.value(17).toString());
        }
    }
}

void mainwindow::on_cleartimelog_clicked()
{
    QSqlQuery query;
    query.prepare("DELETE * FROM edacams.logs");
    query.exec();
}

void mainwindow::on_backButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->searchstudent);
    ui->timelog->setDisabled(true);
    ui->updateStudent->setDisabled(true);
    ui->deleteStudent->setDisabled(true);
}

void mainwindow::on_editprof_clicked()
{
    ui->profiles->setCurrentIndex(1);
}

void mainwindow::on_okbutton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->searchstudent);
    ui->timelog->setDisabled(true);
    ui->updateStudent->setDisabled(true);
    ui->deleteStudent->setDisabled(true);
}

void mainwindow::on_updatebutton_clicked()
{
    getIDdepartment();
    QSqlQuery query;
    query.prepare("UPDATE edacams.userdata set firstname=:firstname, secondname=:secondname, thirdname=:thirdname, mname=:mname, lname=:lname, gender=:gender, street=:street, brgy=:brgy, city=:city, province=:province, email=:email, contact=:contact, department_iddepartment=:department, username=:username, password=:password "
                  "WHERE iduser=:id ");
    query.bindValue(":id", id);
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
    query.bindValue(":email", email);
    query.bindValue(":contact", contact);
    query.bindValue(":department", department);
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    query.exec();
    qDebug()<<idnum;
    qDebug()<<query.lastError();
    qDebug()<<department2;

    QSqlQuery query2;
    query2.prepare("UPDATE edacams.yearlevel set yearlevelCode=:yearlevel "
                   "WHERE yearlevel.userdata_iduser=:id ");
    query2.bindValue(":id", id);
    query2.bindValue(":yearlevel", yearlevel);
    query2.exec();
    qDebug()<<query2.lastError();

    refreshList();
    ui->stackedWidget->setCurrentWidget(ui->searchstudent);
    ui->timelog->setDisabled(true);
    ui->updateStudent->setDisabled(true);
    ui->deleteStudent->setDisabled(true);
}

void mainwindow::on_cancelbutton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->searchstudent);
    ui->timelog->setDisabled(true);
    ui->updateStudent->setDisabled(true);
    ui->deleteStudent->setDisabled(true);
}

void mainwindow::on_firstname_2_textChanged()
{
    firstname=ui->firstname_2->text();
}

void mainwindow::on_secondname_textChanged()
{
    secondname=ui->secondname->text();
}

void mainwindow::on_thirdname_textChanged()
{
    thirdname=ui->thirdname->text();
}

void mainwindow::on_middlename_textChanged()
{
    middlename=ui->middlename->text();
}

void mainwindow::on_lastname_textChanged()
{
    lastname=ui->lastname->text();
}

void mainwindow::on_street_textChanged()
{
    street=ui->street->text();
}

void mainwindow::on_brgy_textChanged()
{
    brgy=ui->brgy->text();
}

void mainwindow::on_city_textChanged()
{
    city=ui->city->text();
}

void mainwindow::on_province_textChanged()
{
    province=ui->province->text();
}

void mainwindow::on_emailadd_textChanged()
{
    email=ui->emailadd->text();
}

void mainwindow::on_contact_textChanged()
{
    contact=ui->contact->text();
}

void mainwindow::on_course_currentTextChanged()
{
    department=ui->course->currentText();
}

void mainwindow::on_username_3_textChanged()
{
     username=ui->username_3->text();
}


void mainwindow::on_pw_3_textChanged()
{
    password=ui->pw_3->text();
}

void mainwindow::on_rtypepw_3_textChanged()
{
    rtypepw=ui->rtypepw_3->text();
}

void mainwindow::on_comboBox_currentTextChanged()
{
    QSqlQueryModel *model3=new QSqlQueryModel();
    QSqlQuery query5;
    department2=ui->comboBox->currentText();
    if(department2=="All Departments"){
    query5.prepare("SELECT userdata.iduser, userdata.firstname, userdata.lname, department.departmentName "
                   "FROM userdata "
                   "INNER JOIN department "
                   "ON department.iddepartment=userdata.department_iddepartment ");
    query5.exec();
    qDebug()<<department2;
    qDebug()<<query5.lastError();

    model3->setQuery(query5);
    ui->studentlist->setModel(model3);
    ui->studentlist->hideColumn(0);
    ui->studentlist->setColumnWidth(1, 100);
    ui->studentlist->setColumnWidth(2, 100);
    ui->studentlist->setColumnWidth(3, 330);
    } else {
        query5.prepare("SELECT userdata.iduser, userdata.firstname, userdata.lname, department.departmentName "
                       "FROM userdata "
                       "INNER JOIN department "
                       "ON department.iddepartment=userdata.department_iddepartment "
                       "WHERE department.departmentName LIKE '"+department2+"'");
        query5.exec();
        qDebug()<<department2;
        qDebug()<<query5.lastError();

        model3->setQuery(query5);
        ui->studentlist->setModel(model3);
        ui->studentlist->hideColumn(0);
        ui->studentlist->setColumnWidth(1, 100);
        ui->studentlist->setColumnWidth(2, 100);
        ui->studentlist->setColumnWidth(3, 330);
    }
}

void mainwindow::on_yes_clicked()
{
    deleteYr();
    deleteSec();
    deleteStudSub();
    deleteEnrolled();
    deleteLogs();
    deleteUser();

    refreshList();

    ui->stackedWidget->setCurrentWidget(ui->searchstudent);
    ui->timelog->setDisabled(true);
    ui->updateStudent->setDisabled(true);
    ui->deleteStudent->setDisabled(true);
}

void mainwindow::on_no_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->searchstudent);
    ui->timelog->setDisabled(true);
    ui->updateStudent->setDisabled(true);
    ui->deleteStudent->setDisabled(true);
}

void mainwindow::on_pushButton_clicked()
{
    QSqlQueryModel *model=new QSqlQueryModel(this);
    QSqlQuery query4;
    query4.prepare("SELECT userdata.iduser, userdata.firstname, userdata.lname, department.departmentName "
                   "FROM userdata "
                   "INNER JOIN department "
                   "ON department.iddepartment=userdata.department_iddepartment");
    query4.exec();
    qDebug()<<query4.lastError();

    model->setQuery(query4);
    qDebug()<<model->lastError();
    ui->studentlist->setModel(model);
    ui->studentlist->hideColumn(0);
    ui->studentlist->setColumnWidth(1, 100);
    ui->studentlist->setColumnWidth(2, 100);
    ui->studentlist->setColumnWidth(3, 330);
    ui->searching_2->hide();
    ui->thereare_2->hide();
    ui->comboBox->setCurrentText("All Departments");
}

void mainwindow::on_manuallogin_clicked()
{
    ui->username->clear();
    ui->password->clear();
    ui->fullname->clear();
    ui->fullname_2->clear();
    ui->stackedWidget->setCurrentWidget(ui->manual);
}

void mainwindow::on_mUser_textChanged()
{
    mUsername=ui->mUser->text();
}

void mainwindow::on_mPw_textChanged()
{
    mPassword=ui->mPw->text();
}

void mainwindow::on_checkBoxpw_2_toggled(bool checked)
{
    if (checked){
        ui->mPw->setEchoMode(ui->mPw->Normal);
    }else{
        ui->mPw->setEchoMode(ui->mPw->Password);
    }
}

void mainwindow::on_submit_2_clicked()
{
    int logRow;

    QString mUser;
    QString mPw;
    QString logQuery("SELECT iduser, username, password ,userType FROM edacams.userdata");
    QSqlQueryModel *logModel = new QSqlQueryModel(this);
    logModel->setQuery(logQuery);
    logRow=logModel->rowCount();

    for(int i=0;i<logRow;i++){
        id=logModel->index(i,0).data().toString();
        mUser= logModel->index(i,1) .data().toString();
        qDebug()<<mUser<<"="<<mUsername;
        if (mUser==mUsername){
            for(int i=0;i<logRow;i++){
                mPw=logModel->index(i,2).data().toString();
                if (mPw==mPassword){
                    qDebug()<<mPw<<"="<<mPassword;
                    userType=logModel->index(i,3).data().toString();
                    if(userType==userTypeVerify){
                        if(userType=="Student"){
                            ui->stackedWidget->setCurrentIndex(3);
                            ui->onlineEnrollment->hide();
                            ui->onlineRegistration->hide();
                            ui->comboBox->hide();
                            ui->studentSearch->hide();
                            ui->label_6->hide();
                            ui->label_8->hide();
                            ui->search_3->hide();
                            ui->pushButton->hide();
                            ui->cleartimelog->hide();
                            ui->stackedWidget->setCurrentWidget(ui->edacams);
                            logIn2();
                            ui->mUser->clear();
                            ui->mPw->clear();
                        }else{
                            ui->stackedWidget->setCurrentIndex(3);
                            ui->onlineEnrollment->show();
                            ui->onlineRegistration->show();
                            ui->comboBox->show();
                            ui->studentSearch->show();
                            ui->label_6->show();
                            ui->label_8->show();
                            ui->search_3->show();
                            ui->pushButton->show();
                            ui->cleartimelog->show();
                            ui->stackedWidget->setCurrentWidget(ui->edacams);
                            logIn2();
                            ui->mUser->clear();
                            ui->mPw->clear();
                        }
                    }else{
                        ui->label_27->setText("\t Account not found!");
                    }
                    break;
                }else{
                    ui->label_27->setText("\t Password incorrect!");
                }
            }
            break;
        }else{
            ui->label_27->setText("\t Username not found!");
        }
    }
}

void mainwindow::on_cancel_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->mUser->clear();
    ui->mPw->clear();
    scanScard();
}


void mainwindow::on_studentButton_2_clicked()
{
    userTypeVerify= "Student";
}

void mainwindow::on_adminButton_2_clicked()
{
    userTypeVerify= "Admin";
}

void mainwindow::on_male_clicked()
{
    gender = "Male";
}

void mainwindow::on_female_clicked()
{
    gender = "Female";
}

void mainwindow::on_yearlevel_currentTextChanged()
{
    yearlevel = ui->yearlevel->currentText();
}
