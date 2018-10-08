#include "login.h"
#include "ui_login.h"


login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->scanCard);
    scanScard();
    databaseusername = "root";
    databasepassword ="kokonat23";
    connectDatabase();
}

void login::logIn()
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
    iduser = logModel->index(0,0).data().toString();
    id=iduser;
    unique1=logModel->index(0,1).data().toString();
    qDebug()<<unique1<<"="<<cardUID;
    if (unique1==cardUID){
        for(int i=0;i<logRow;i++) {
                    sfirstname=logModel->index(i,2).data().toString();
                    firstname=sfirstname;

                    slastname=logModel->index(i,3).data().toString();
                    lastname=slastname;

                    QString sfullname = sfirstname+" "+slastname;
                    ui->fullname->setText(sfullname);

                    user=logModel->index(i,4).data().toString();
                    username=user;

                    usert=logModel->index(i,5).data().toString();
                    ui->usertypelabel->setText(usert);
                    userType=usert;
                    getTime();
        }

    } else {
        ui->fullname->setText("Invalid User! To register, ask assistance from an Admin");
    }
}

void login::getTime()
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
    query.prepare("INSERT INTO logs(logTime, logDate, userdata_iduser) "
                    "VALUES (:logTime, :logDate, :id)");
    query.bindValue(":logTime", time);
    query.bindValue(":logDate", date);
    query.bindValue(":id", id);
    query.exec();
    qDebug()<<query.lastError();
}

void login::getlogs()
{
    int logRow;
    QString iduser;
    QString logD;
    QString logT;
    qDebug()<<id;
    qDebug()<<date;
    qDebug()<<time;
    QSqlQuery querylogs("SELECT idlogs, logTime, logDate, userdata_iduser WHERE userdata_iduser = '"+id+"'");
    QSqlQueryModel *logModel = new QSqlQueryModel(this);
    logModel->setQuery(querylogs);
    logRow=logModel->rowCount();
    qDebug()<<querylogs.lastError();

    iduser = logModel->index(0,3).data().toString();
    qDebug()<<iduser<<"="<<id;
    if (iduser==id){
        for(int i=0;i<logRow;i++) {
            logD = logModel->index(i,2).data().toString();
            if (logD==date){
                qDebug()<<logD<<"="<<date;
                logT = logModel->index(i,1).data().toString();
                if (logT==time){
                    qDebug()<<logT<<"="<<time;
                    //doorlock opens

                }
            }
        }
    }
}

void login::validateTime()
{
    QString startTime;
    QString endTime;

    QSqlQuery query2;
    query2.prepare("SELECT sectionStart, sectionEnd "
                   "FROM edacams.section "
                   "WHERE sectionStart <= '"+time+"'sectionEnd <= '"+time+"'");
    query2.bindValue("sectionStart", startTime);
    query2.bindValue("sectionEnd", endTime);
    query2.exec();
    qDebug()<<startTime;
    qDebug()<<endTime;

    QSqlQuery query;
    query.prepare("SELECT userdata.username, enroll.section_idsection "
                  "FROM enroll "
                  "INNER JOIN userdata ON enroll.userdata_iduser=userdata.iduser "
                  "INNER JOIN section ON section.idsection=enroll.section_idsection "
                  "WHERE sectionStart = '"+startTime+"' and sectionEnd = '"+endTime+"'");
    query.exec();
}

login::~login()
{
    delete ui;
}



void login::scanScard()
{
    connect(&iScan,&scanID::on_number,this,&login::newNumber);
    QFuture<void> test = QtConcurrent::run(&this->iScan,&scanID::start,QString("Start Read"));

}

void login::newNumber(QString cardName)
{
    cardUID = cardName;
    ui->stackedWidget->setCurrentIndex(1);
    logIn();
}

void login::connectDatabase()
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

void login::connClose()
{
    db.close();
    db.removeDatabase(QSqlDatabase::defaultConnection);
}

