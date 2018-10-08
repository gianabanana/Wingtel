/********************************************************************************
** Form generated from reading UI file 'enrollment.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENROLLMENT_H
#define UI_ENROLLMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_enrollment
{
public:
    QStackedWidget *stackedWidget;
    QWidget *searchstudent;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QFrame *frame_4;
    QPushButton *pushButtonCancel;
    QLineEdit *lineEditSearch;
    QPushButton *pushButtonSearch;
    QTableView *tableViewStudentList;
    QPushButton *enrollstudent;
    QFrame *frame_38;
    QWidget *subjectlist;
    QLineEdit *lineEdit;
    QFrame *frame;
    QPushButton *pushButtonSearch_2;
    QPushButton *cancel_2;
    QPushButton *addsubjtodata;
    QLineEdit *lineEditSearch_2;
    QTableView *tableViewSubjectList;
    QFrame *frame_34;
    QWidget *sectionavail;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_11;
    QFrame *frame_2;
    QTableView *tableViewSectiontList;
    QLabel *label;
    QPushButton *pushButtonAddSection;
    QPushButton *pushButtonCancelSection;
    QLabel *label_2;
    QFrame *frame_36;
    QWidget *page;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_10;
    QLabel *label_4;
    QFrame *frame_3;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_10;
    QGridLayout *gridLayout_4;
    QLabel *labelName_3;
    QGridLayout *gridLayout_8;
    QLabel *labelIDno_3;
    QLabel *username;
    QLabel *name;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_9;
    QLabel *labelYearLevel_3;
    QLabel *yearlevel;
    QLabel *labelDepartment_3;
    QLabel *department;
    QPushButton *unenrollSub;
    QTableView *tableViewSubjectList_2;
    QLabel *label_3;
    QPushButton *enrollsubj;
    QPushButton *addsubj;
    QTableView *tableEnrolledsubj;
    QPushButton *cancel;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_14;
    QPushButton *removeSub;
    QFrame *frame_37;
    QFrame *frame_21;
    QLabel *date_2;
    QLabel *time_2;
    QFrame *frame_35;

    void setupUi(QWidget *enrollment)
    {
        if (enrollment->objectName().isEmpty())
            enrollment->setObjectName(QStringLiteral("enrollment"));
        enrollment->setWindowModality(Qt::WindowModal);
        enrollment->resize(821, 595);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(enrollment->sizePolicy().hasHeightForWidth());
        enrollment->setSizePolicy(sizePolicy);
        enrollment->setMinimumSize(QSize(821, 595));
        enrollment->setStyleSheet(QStringLiteral(""));
        stackedWidget = new QStackedWidget(enrollment);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 40, 821, 551));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        searchstudent = new QWidget();
        searchstudent->setObjectName(QStringLiteral("searchstudent"));
        lineEdit_5 = new QLineEdit(searchstudent);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(200, 230, 181, 31));
        lineEdit_5->setFrame(false);
        lineEdit_6 = new QLineEdit(searchstudent);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(190, 280, 201, 31));
        lineEdit_6->setFrame(false);
        lineEdit_7 = new QLineEdit(searchstudent);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(290, 370, 113, 20));
        lineEdit_7->setFrame(false);
        lineEdit_8 = new QLineEdit(searchstudent);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(280, 410, 113, 20));
        lineEdit_8->setFrame(false);
        lineEdit_9 = new QLineEdit(searchstudent);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(260, 460, 113, 20));
        lineEdit_9->setFrame(false);
        frame_4 = new QFrame(searchstudent);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(110, 0, 661, 521));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        pushButtonCancel = new QPushButton(frame_4);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(470, 110, 179, 61));
        sizePolicy.setHeightForWidth(pushButtonCancel->sizePolicy().hasHeightForWidth());
        pushButtonCancel->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Microsoft JhengHei UI Light"));
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        pushButtonCancel->setFont(font);
        pushButtonCancel->setStyleSheet(QLatin1String("border-image: url(:/icons/the-button-859346_640.png);\n"
"color: rgb(255, 255, 255);"));
        lineEditSearch = new QLineEdit(frame_4);
        lineEditSearch->setObjectName(QStringLiteral("lineEditSearch"));
        lineEditSearch->setGeometry(QRect(30, 10, 309, 29));
        sizePolicy.setHeightForWidth(lineEditSearch->sizePolicy().hasHeightForWidth());
        lineEditSearch->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QStringLiteral("Microsoft JhengHei UI Light"));
        font1.setPointSize(12);
        lineEditSearch->setFont(font1);
        pushButtonSearch = new QPushButton(frame_4);
        pushButtonSearch->setObjectName(QStringLiteral("pushButtonSearch"));
        pushButtonSearch->setGeometry(QRect(340, 0, 91, 51));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonSearch->sizePolicy().hasHeightForWidth());
        pushButtonSearch->setSizePolicy(sizePolicy1);
        pushButtonSearch->setFont(font1);
        pushButtonSearch->setStyleSheet(QLatin1String("border-image: url(:/icons/the-button-859346_640.png);\n"
"color: rgb(255, 255, 255);"));
        tableViewStudentList = new QTableView(frame_4);
        tableViewStudentList->setObjectName(QStringLiteral("tableViewStudentList"));
        tableViewStudentList->setGeometry(QRect(30, 50, 411, 470));
        enrollstudent = new QPushButton(frame_4);
        enrollstudent->setObjectName(QStringLiteral("enrollstudent"));
        enrollstudent->setGeometry(QRect(470, 60, 179, 62));
        sizePolicy.setHeightForWidth(enrollstudent->sizePolicy().hasHeightForWidth());
        enrollstudent->setSizePolicy(sizePolicy);
        enrollstudent->setFont(font);
        enrollstudent->setStyleSheet(QLatin1String("border-image: url(:/icons/the-button-859346_640.png);\n"
"color: rgb(255, 255, 255);"));
        frame_38 = new QFrame(searchstudent);
        frame_38->setObjectName(QStringLiteral("frame_38"));
        frame_38->setGeometry(QRect(0, -30, 821, 591));
        frame_38->setStyleSheet(QStringLiteral("border-image: url(:/icons/84239945.jpg);"));
        frame_38->setFrameShape(QFrame::StyledPanel);
        frame_38->setFrameShadow(QFrame::Raised);
        stackedWidget->addWidget(searchstudent);
        frame_38->raise();
        lineEdit_5->raise();
        lineEdit_6->raise();
        lineEdit_7->raise();
        lineEdit_8->raise();
        lineEdit_9->raise();
        frame_4->raise();
        subjectlist = new QWidget();
        subjectlist->setObjectName(QStringLiteral("subjectlist"));
        lineEdit = new QLineEdit(subjectlist);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(190, 370, 151, 21));
        lineEdit->setFrame(false);
        frame = new QFrame(subjectlist);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(80, 10, 701, 531));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButtonSearch_2 = new QPushButton(frame);
        pushButtonSearch_2->setObjectName(QStringLiteral("pushButtonSearch_2"));
        pushButtonSearch_2->setGeometry(QRect(381, 0, 81, 51));
        sizePolicy1.setHeightForWidth(pushButtonSearch_2->sizePolicy().hasHeightForWidth());
        pushButtonSearch_2->setSizePolicy(sizePolicy1);
        pushButtonSearch_2->setFont(font);
        pushButtonSearch_2->setStyleSheet(QLatin1String("border-image: url(:/icons/the-button-859346_640.png);\n"
"color: rgb(255, 255, 255);"));
        cancel_2 = new QPushButton(frame);
        cancel_2->setObjectName(QStringLiteral("cancel_2"));
        cancel_2->setGeometry(QRect(511, 110, 179, 61));
        sizePolicy1.setHeightForWidth(cancel_2->sizePolicy().hasHeightForWidth());
        cancel_2->setSizePolicy(sizePolicy1);
        cancel_2->setFont(font);
        cancel_2->setStyleSheet(QLatin1String("border-image: url(:/icons/the-button-859346_640.png);\n"
"color: rgb(255, 255, 255);"));
        addsubjtodata = new QPushButton(frame);
        addsubjtodata->setObjectName(QStringLiteral("addsubjtodata"));
        addsubjtodata->setGeometry(QRect(511, 50, 179, 61));
        sizePolicy1.setHeightForWidth(addsubjtodata->sizePolicy().hasHeightForWidth());
        addsubjtodata->setSizePolicy(sizePolicy1);
        addsubjtodata->setFont(font);
        addsubjtodata->setStyleSheet(QLatin1String("border-image: url(:/icons/the-button-859346_640.png);\n"
"color: rgb(255, 255, 255);"));
        lineEditSearch_2 = new QLineEdit(frame);
        lineEditSearch_2->setObjectName(QStringLiteral("lineEditSearch_2"));
        lineEditSearch_2->setGeometry(QRect(20, 10, 349, 29));
        sizePolicy.setHeightForWidth(lineEditSearch_2->sizePolicy().hasHeightForWidth());
        lineEditSearch_2->setSizePolicy(sizePolicy);
        lineEditSearch_2->setFont(font);
        tableViewSubjectList = new QTableView(frame);
        tableViewSubjectList->setObjectName(QStringLiteral("tableViewSubjectList"));
        tableViewSubjectList->setGeometry(QRect(10, 50, 461, 470));
        frame_34 = new QFrame(subjectlist);
        frame_34->setObjectName(QStringLiteral("frame_34"));
        frame_34->setGeometry(QRect(0, -30, 821, 591));
        frame_34->setStyleSheet(QStringLiteral("border-image: url(:/icons/84239945.jpg);"));
        frame_34->setFrameShape(QFrame::StyledPanel);
        frame_34->setFrameShadow(QFrame::Raised);
        stackedWidget->addWidget(subjectlist);
        frame_34->raise();
        lineEdit->raise();
        frame->raise();
        sectionavail = new QWidget();
        sectionavail->setObjectName(QStringLiteral("sectionavail"));
        lineEdit_2 = new QLineEdit(sectionavail);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 260, 113, 21));
        lineEdit_2->setFrame(false);
        lineEdit_3 = new QLineEdit(sectionavail);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(330, 330, 121, 21));
        lineEdit_3->setFrame(false);
        lineEdit_11 = new QLineEdit(sectionavail);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(160, 310, 113, 20));
        lineEdit_11->setFrame(false);
        frame_2 = new QFrame(sectionavail);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(110, 0, 641, 521));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        tableViewSectiontList = new QTableView(frame_2);
        tableViewSectiontList->setObjectName(QStringLiteral("tableViewSectiontList"));
        tableViewSectiontList->setGeometry(QRect(20, 40, 400, 470));
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 10, 211, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Microsoft JhengHei UI Light"));
        font2.setPointSize(16);
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));
        label->setWordWrap(true);
        pushButtonAddSection = new QPushButton(frame_2);
        pushButtonAddSection->setObjectName(QStringLiteral("pushButtonAddSection"));
        pushButtonAddSection->setGeometry(QRect(460, 40, 159, 67));
        sizePolicy1.setHeightForWidth(pushButtonAddSection->sizePolicy().hasHeightForWidth());
        pushButtonAddSection->setSizePolicy(sizePolicy1);
        pushButtonAddSection->setFont(font);
        pushButtonAddSection->setStyleSheet(QLatin1String("border-image: url(:/icons/the-button-859346_640.png);\n"
"color: rgb(255, 255, 255);"));
        pushButtonCancelSection = new QPushButton(frame_2);
        pushButtonCancelSection->setObjectName(QStringLiteral("pushButtonCancelSection"));
        pushButtonCancelSection->setGeometry(QRect(460, 100, 159, 71));
        sizePolicy1.setHeightForWidth(pushButtonCancelSection->sizePolicy().hasHeightForWidth());
        pushButtonCancelSection->setSizePolicy(sizePolicy1);
        pushButtonCancelSection->setFont(font);
        pushButtonCancelSection->setStyleSheet(QLatin1String("border-image: url(:/icons/the-button-859346_640.png);\n"
"color: rgb(255, 255, 255);"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(440, 170, 191, 121));
        label_2->setFont(font1);
        label_2->setStyleSheet(QLatin1String("background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        frame_36 = new QFrame(sectionavail);
        frame_36->setObjectName(QStringLiteral("frame_36"));
        frame_36->setGeometry(QRect(0, -40, 821, 591));
        frame_36->setStyleSheet(QStringLiteral("border-image: url(:/icons/84239945.jpg);"));
        frame_36->setFrameShape(QFrame::StyledPanel);
        frame_36->setFrameShadow(QFrame::Raised);
        stackedWidget->addWidget(sectionavail);
        frame_36->raise();
        lineEdit_2->raise();
        lineEdit_3->raise();
        lineEdit_11->raise();
        frame_2->raise();
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        lineEdit_4 = new QLineEdit(page);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(420, 460, 161, 21));
        lineEdit_4->setFrame(false);
        lineEdit_10 = new QLineEdit(page);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(630, 530, 113, 20));
        lineEdit_10->setFrame(false);
        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 160, 101, 21));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        label_4->setFont(font3);
        frame_3 = new QFrame(page);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(20, 10, 781, 521));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        layoutWidget_2 = new QWidget(frame_3);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 10, 751, 61));
        gridLayout_10 = new QGridLayout(layoutWidget_2);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        labelName_3 = new QLabel(layoutWidget_2);
        labelName_3->setObjectName(QStringLiteral("labelName_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelName_3->sizePolicy().hasHeightForWidth());
        labelName_3->setSizePolicy(sizePolicy2);
        labelName_3->setFont(font1);
        labelName_3->setStyleSheet(QLatin1String("background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_4->addWidget(labelName_3, 0, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        labelIDno_3 = new QLabel(layoutWidget_2);
        labelIDno_3->setObjectName(QStringLiteral("labelIDno_3"));
        sizePolicy2.setHeightForWidth(labelIDno_3->sizePolicy().hasHeightForWidth());
        labelIDno_3->setSizePolicy(sizePolicy2);
        labelIDno_3->setFont(font1);
        labelIDno_3->setStyleSheet(QLatin1String("background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_8->addWidget(labelIDno_3, 0, 0, 1, 1);

        username = new QLabel(layoutWidget_2);
        username->setObjectName(QStringLiteral("username"));
        username->setFont(font1);
        username->setStyleSheet(QLatin1String("background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_8->addWidget(username, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_8, 0, 2, 1, 1);

        name = new QLabel(layoutWidget_2);
        name->setObjectName(QStringLiteral("name"));
        name->setFont(font1);
        name->setStyleSheet(QLatin1String("background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_4->addWidget(name, 0, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_4, 0, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        labelYearLevel_3 = new QLabel(layoutWidget_2);
        labelYearLevel_3->setObjectName(QStringLiteral("labelYearLevel_3"));
        sizePolicy2.setHeightForWidth(labelYearLevel_3->sizePolicy().hasHeightForWidth());
        labelYearLevel_3->setSizePolicy(sizePolicy2);
        labelYearLevel_3->setFont(font1);
        labelYearLevel_3->setStyleSheet(QLatin1String("background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_9->addWidget(labelYearLevel_3, 0, 0, 1, 1);

        yearlevel = new QLabel(layoutWidget_2);
        yearlevel->setObjectName(QStringLiteral("yearlevel"));
        yearlevel->setFont(font1);
        yearlevel->setStyleSheet(QLatin1String("background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_9->addWidget(yearlevel, 0, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_9, 0, 2, 1, 1);

        labelDepartment_3 = new QLabel(layoutWidget_2);
        labelDepartment_3->setObjectName(QStringLiteral("labelDepartment_3"));
        sizePolicy2.setHeightForWidth(labelDepartment_3->sizePolicy().hasHeightForWidth());
        labelDepartment_3->setSizePolicy(sizePolicy2);
        labelDepartment_3->setFont(font1);
        labelDepartment_3->setStyleSheet(QLatin1String("background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_5->addWidget(labelDepartment_3, 0, 0, 1, 1);

        department = new QLabel(layoutWidget_2);
        department->setObjectName(QStringLiteral("department"));
        department->setFont(font1);
        department->setStyleSheet(QLatin1String("background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_5->addWidget(department, 0, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_5, 1, 0, 1, 1);

        unenrollSub = new QPushButton(frame_3);
        unenrollSub->setObjectName(QStringLiteral("unenrollSub"));
        unenrollSub->setGeometry(QRect(610, 390, 171, 71));
        unenrollSub->setFont(font1);
        unenrollSub->setStyleSheet(QLatin1String("border-image: url(:/icons/the-button-859346_640.png);\n"
"color: rgb(255, 255, 255);"));
        tableViewSubjectList_2 = new QTableView(frame_3);
        tableViewSubjectList_2->setObjectName(QStringLiteral("tableViewSubjectList_2"));
        tableViewSubjectList_2->setGeometry(QRect(10, 130, 591, 171));
        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 300, 131, 31));
        QFont font4;
        font4.setFamily(QStringLiteral("Microsoft JhengHei UI Light"));
        font4.setPointSize(20);
        label_3->setFont(font4);
        label_3->setStyleSheet(QLatin1String("background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        enrollsubj = new QPushButton(frame_3);
        enrollsubj->setObjectName(QStringLiteral("enrollsubj"));
        enrollsubj->setGeometry(QRect(610, 140, 171, 71));
        sizePolicy.setHeightForWidth(enrollsubj->sizePolicy().hasHeightForWidth());
        enrollsubj->setSizePolicy(sizePolicy);
        enrollsubj->setFont(font1);
        enrollsubj->setStyleSheet(QLatin1String("border-image: url(:/icons/the-button-859346_640.png);\n"
"color: rgb(255, 255, 255);"));
        addsubj = new QPushButton(frame_3);
        addsubj->setObjectName(QStringLiteral("addsubj"));
        addsubj->setGeometry(QRect(20, 70, 151, 61));
        sizePolicy.setHeightForWidth(addsubj->sizePolicy().hasHeightForWidth());
        addsubj->setSizePolicy(sizePolicy);
        addsubj->setFont(font1);
        addsubj->setStyleSheet(QLatin1String("border-image: url(:/icons/the-button-859346_640.png);\n"
"color: rgb(255, 255, 255);"));
        tableEnrolledsubj = new QTableView(frame_3);
        tableEnrolledsubj->setObjectName(QStringLiteral("tableEnrolledsubj"));
        tableEnrolledsubj->setGeometry(QRect(10, 330, 591, 181));
        cancel = new QPushButton(frame_3);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(180, 70, 151, 61));
        sizePolicy.setHeightForWidth(cancel->sizePolicy().hasHeightForWidth());
        cancel->setSizePolicy(sizePolicy);
        cancel->setFont(font1);
        cancel->setStyleSheet(QLatin1String("border-image: url(:/icons/the-button-859346_640.png);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_12 = new QLineEdit(frame_3);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(60, 370, 113, 20));
        lineEdit_13 = new QLineEdit(frame_3);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(50, 400, 113, 20));
        lineEdit_14 = new QLineEdit(frame_3);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        lineEdit_14->setGeometry(QRect(50, 440, 113, 20));
        removeSub = new QPushButton(frame_3);
        removeSub->setObjectName(QStringLiteral("removeSub"));
        removeSub->setGeometry(QRect(610, 200, 171, 71));
        sizePolicy.setHeightForWidth(removeSub->sizePolicy().hasHeightForWidth());
        removeSub->setSizePolicy(sizePolicy);
        removeSub->setFont(font1);
        removeSub->setStyleSheet(QLatin1String("border-image: url(:/icons/the-button-859346_640.png);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_14->raise();
        lineEdit_13->raise();
        lineEdit_12->raise();
        layoutWidget_2->raise();
        unenrollSub->raise();
        tableViewSubjectList_2->raise();
        label_3->raise();
        enrollsubj->raise();
        addsubj->raise();
        tableEnrolledsubj->raise();
        cancel->raise();
        removeSub->raise();
        frame_37 = new QFrame(page);
        frame_37->setObjectName(QStringLiteral("frame_37"));
        frame_37->setGeometry(QRect(0, -40, 821, 591));
        frame_37->setStyleSheet(QStringLiteral("border-image: url(:/icons/84239945.jpg);"));
        frame_37->setFrameShape(QFrame::StyledPanel);
        frame_37->setFrameShadow(QFrame::Raised);
        stackedWidget->addWidget(page);
        frame_37->raise();
        lineEdit_4->raise();
        lineEdit_10->raise();
        label_4->raise();
        frame_3->raise();
        frame_21 = new QFrame(enrollment);
        frame_21->setObjectName(QStringLiteral("frame_21"));
        frame_21->setGeometry(QRect(10, 0, 371, 51));
        frame_21->setFrameShape(QFrame::StyledPanel);
        frame_21->setFrameShadow(QFrame::Raised);
        date_2 = new QLabel(frame_21);
        date_2->setObjectName(QStringLiteral("date_2"));
        date_2->setGeometry(QRect(10, 10, 211, 31));
        sizePolicy.setHeightForWidth(date_2->sizePolicy().hasHeightForWidth());
        date_2->setSizePolicy(sizePolicy);
        QFont font5;
        font5.setFamily(QStringLiteral("Microsoft JhengHei UI Light"));
        font5.setPointSize(14);
        date_2->setFont(font5);
        date_2->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));
        date_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        time_2 = new QLabel(frame_21);
        time_2->setObjectName(QStringLiteral("time_2"));
        time_2->setGeometry(QRect(230, 10, 131, 31));
        sizePolicy.setHeightForWidth(time_2->sizePolicy().hasHeightForWidth());
        time_2->setSizePolicy(sizePolicy);
        time_2->setFont(font5);
        time_2->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));
        frame_35 = new QFrame(enrollment);
        frame_35->setObjectName(QStringLiteral("frame_35"));
        frame_35->setGeometry(QRect(0, 0, 821, 591));
        frame_35->setStyleSheet(QStringLiteral("border-image: url(:/icons/84239945.jpg);"));
        frame_35->setFrameShape(QFrame::StyledPanel);
        frame_35->setFrameShadow(QFrame::Raised);
        frame_35->raise();
        stackedWidget->raise();
        frame_21->raise();

        retranslateUi(enrollment);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(enrollment);
    } // setupUi

    void retranslateUi(QWidget *enrollment)
    {
        enrollment->setWindowTitle(QApplication::translate("enrollment", "Form", Q_NULLPTR));
        pushButtonCancel->setText(QApplication::translate("enrollment", "CANCEL", Q_NULLPTR));
        pushButtonSearch->setText(QApplication::translate("enrollment", "Search", Q_NULLPTR));
        enrollstudent->setText(QApplication::translate("enrollment", "ENROLL STUDENT", Q_NULLPTR));
        pushButtonSearch_2->setText(QApplication::translate("enrollment", "Search", Q_NULLPTR));
        cancel_2->setText(QApplication::translate("enrollment", "CANCEL", Q_NULLPTR));
        addsubjtodata->setText(QApplication::translate("enrollment", "ADD SUBJECT", Q_NULLPTR));
        label->setText(QApplication::translate("enrollment", "Sections available:", Q_NULLPTR));
        pushButtonAddSection->setText(QApplication::translate("enrollment", "ENROLL", Q_NULLPTR));
        pushButtonCancelSection->setText(QApplication::translate("enrollment", "CANCEL", Q_NULLPTR));
        label_2->setText(QString());
        label_4->setText(QString());
        labelName_3->setText(QApplication::translate("enrollment", "Name:", Q_NULLPTR));
        labelIDno_3->setText(QApplication::translate("enrollment", "ID No.:", Q_NULLPTR));
        username->setText(QString());
        name->setText(QString());
        labelYearLevel_3->setText(QApplication::translate("enrollment", "Year Level:", Q_NULLPTR));
        yearlevel->setText(QString());
        labelDepartment_3->setText(QApplication::translate("enrollment", "Department:", Q_NULLPTR));
        department->setText(QString());
        unenrollSub->setText(QApplication::translate("enrollment", "UNENROLL SUBJECT", Q_NULLPTR));
        label_3->setText(QApplication::translate("enrollment", "Schedule", Q_NULLPTR));
        enrollsubj->setText(QApplication::translate("enrollment", "ENROLL SUBJECT", Q_NULLPTR));
        addsubj->setText(QApplication::translate("enrollment", "ADD SUBJECT", Q_NULLPTR));
        cancel->setText(QApplication::translate("enrollment", "CANCEL", Q_NULLPTR));
        removeSub->setText(QApplication::translate("enrollment", "REMOVE SUBJECT", Q_NULLPTR));
        date_2->setText(QApplication::translate("enrollment", "D", Q_NULLPTR));
        time_2->setText(QApplication::translate("enrollment", "D", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class enrollment: public Ui_enrollment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENROLLMENT_H
