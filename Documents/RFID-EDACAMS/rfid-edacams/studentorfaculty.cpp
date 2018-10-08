#include "studentorfaculty.h"
#include "ui_studentorfaculty.h"

studentORfaculty::studentORfaculty(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::studentORfaculty)
{
    ui->setupUi(this);
}

studentORfaculty::~studentORfaculty()
{
    delete ui;
}

void studentORfaculty::on_student_clicked()
{
    searchstudent *records = new searchstudent;
    this->hide();
    records->show();
}

void studentORfaculty::on_faculty_clicked()
{
    searchfaculty *records2 = new searchfaculty;
    this->hide();
    records2->show();
}
