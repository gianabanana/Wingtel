/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registration
{
public:
    QStackedWidget *stackedWidget;
    QWidget *addmain;
    QFrame *frame;
    QPushButton *addRecords;
    QPushButton *addStaff;
    QPushButton *main;
    QLabel *label;
    QPushButton *addDepartment;
    QFrame *frame_42;
    QWidget *addfaculty;
    QLabel *label_5;
    QFrame *frame_2;
    QFrame *frame_7;
    QGridLayout *gridLayout_10;
    QLabel *label_46;
    QLabel *label_43;
    QLineEdit *rtypepw;
    QLineEdit *pw;
    QLabel *notification_1;
    QLineEdit *username;
    QLabel *label_47;
    QLabel *notification;
    QFrame *frame_8;
    QGridLayout *gridLayout_11;
    QLabel *label_48;
    QLineEdit *city_2;
    QLineEdit *brgy_2;
    QLabel *label_11;
    QLabel *label_13;
    QLineEdit *province_2;
    QLabel *label_17;
    QLineEdit *street_2;
    QLabel *label_49;
    QLabel *label_10;
    QLabel *label_18;
    QPushButton *add_2;
    QLabel *label_3;
    QPushButton *cancel_2;
    QFrame *frame_9;
    QGridLayout *gridLayout_12;
    QLineEdit *middlename_2;
    QLabel *label_9;
    QLabel *label_8;
    QLineEdit *lastname_2;
    QLabel *label_6;
    QLineEdit *firstname_2;
    QLineEdit *thirdname_2;
    QLabel *label_51;
    QLabel *label_4;
    QLineEdit *secondname_2;
    QLabel *label_12;
    QComboBox *department;
    QRadioButton *male_2;
    QRadioButton *female_2;
    QLabel *gender_2;
    QRadioButton *admin;
    QRadioButton *student;
    QPushButton *scanID;
    QLabel *label_2;
    QLabel *label_52;
    QComboBox *yearlevel;
    QFrame *frame_6;
    QGridLayout *gridLayout_9;
    QLabel *label_41;
    QLineEdit *contactnum_2;
    QLabel *label_42;
    QLineEdit *emailadd_2;
    QGraphicsView *graphicsView_3;
    QLabel *label_7;
    QFrame *frame_36;
    QWidget *addsubject;
    QFrame *frame_3;
    QLabel *label_53;
    QPushButton *add_3;
    QPushButton *addsection;
    QFrame *frame_10;
    QGridLayout *gridLayout_16;
    QLabel *label_69;
    QLabel *label_71;
    QLabel *label_72;
    QLineEdit *subject_4;
    QLabel *label_73;
    QLabel *label_74;
    QComboBox *subjectfor_2;
    QLineEdit *description_2;
    QComboBox *subjecttype_2;
    QLineEdit *prerequisite_2;
    QLabel *label_75;
    QComboBox *units_2;
    QPushButton *cancel_3;
    QFrame *frame_35;
    QWidget *addsection_2;
    QLabel *label_19;
    QLabel *teacher;
    QLabel *teacher_2;
    QLabel *label_16;
    QFrame *frame_4;
    QPushButton *add_4;
    QTableView *teacherList;
    QPushButton *cancel_4;
    QLabel *label_60;
    QTableView *clickSubj;
    QFrame *frame_11;
    QGridLayout *gridLayout_14;
    QLabel *label_62;
    QLabel *fullname;
    QLabel *dayslabel;
    QLabel *subject_3;
    QTimeEdit *timeEdit;
    QLabel *label_61;
    QLabel *label_68;
    QComboBox *section;
    QLabel *label_63;
    QLabel *label_64;
    QLabel *label_65;
    QComboBox *days;
    QLabel *label_70;
    QTimeEdit *timeEdit_2;
    QLineEdit *room;
    QFrame *frame_37;
    QWidget *addcourse;
    QFrame *frame_5;
    QPushButton *add_5;
    QLabel *label_66;
    QFrame *frame_12;
    QGridLayout *gridLayout_15;
    QLabel *label_67;
    QLineEdit *courseedit;
    QPushButton *cancel_5;
    QFrame *frame_38;
    QWidget *scan;
    QStackedWidget *stackedWidget_2;
    QWidget *scanning;
    QFrame *frame_14;
    QLabel *label_14;
    QFrame *frame_40;
    QWidget *uniqueshow;
    QFrame *frame_13;
    QLabel *label_15;
    QPushButton *okID;
    QLabel *cardUID;
    QFrame *frame_41;
    QFrame *frame_39;
    QFrame *frame_21;
    QLabel *date_2;
    QLabel *time_2;
    QFrame *frame_34;

    void setupUi(QWidget *registration)
    {
        if (registration->objectName().isEmpty())
            registration->setObjectName(QStringLiteral("registration"));
        registration->setWindowModality(Qt::WindowModal);
        registration->resize(826, 595);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(registration->sizePolicy().hasHeightForWidth());
        registration->setSizePolicy(sizePolicy);
        registration->setMinimumSize(QSize(826, 595));
        registration->setMaximumSize(QSize(16777215, 16777215));
        registration->setStyleSheet(QStringLiteral(""));
        stackedWidget = new QStackedWidget(registration);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 50, 831, 551));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Microsoft JhengHei UI Light"));
        font.setPointSize(12);
        stackedWidget->setFont(font);
        stackedWidget->setStyleSheet(QStringLiteral(""));
        addmain = new QWidget();
        addmain->setObjectName(QStringLiteral("addmain"));
        frame = new QFrame(addmain);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(50, 10, 751, 521));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        addRecords = new QPushButton(frame);
        addRecords->setObjectName(QStringLiteral("addRecords"));
        addRecords->setGeometry(QRect(540, 190, 181, 81));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addRecords->sizePolicy().hasHeightForWidth());
        addRecords->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QStringLiteral("Microsoft JhengHei UI Light"));
        font1.setPointSize(18);
        addRecords->setFont(font1);
        addStaff = new QPushButton(frame);
        addStaff->setObjectName(QStringLiteral("addStaff"));
        addStaff->setGeometry(QRect(540, 118, 181, 81));
        sizePolicy1.setHeightForWidth(addStaff->sizePolicy().hasHeightForWidth());
        addStaff->setSizePolicy(sizePolicy1);
        addStaff->setFont(font1);
        main = new QPushButton(frame);
        main->setObjectName(QStringLiteral("main"));
        main->setGeometry(QRect(20, 470, 111, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Microsoft JhengHei UI Light"));
        main->setFont(font2);
        main->setAutoFillBackground(false);
        main->setStyleSheet(QLatin1String("border-image: url(:/icons/the-button-859346_640.png);\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(520, 18, 221, 81));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(10);
        sizePolicy2.setVerticalStretch(10);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        QFont font3;
        font3.setFamily(QStringLiteral("Microsoft JhengHei UI Light"));
        font3.setPointSize(24);
        label->setFont(font3);
        label->setAcceptDrops(false);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QLatin1String("border-image: url(:/icons/white.jpg);\n"
"border-image: url(:/icons/gray transparent.png);"));
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);
        label->setMargin(5);
        label->setOpenExternalLinks(false);
        addDepartment = new QPushButton(frame);
        addDepartment->setObjectName(QStringLiteral("addDepartment"));
        addDepartment->setGeometry(QRect(540, 260, 181, 81));
        sizePolicy1.setHeightForWidth(addDepartment->sizePolicy().hasHeightForWidth());
        addDepartment->setSizePolicy(sizePolicy1);
        addDepartment->setFont(font1);
        frame_42 = new QFrame(addmain);
        frame_42->setObjectName(QStringLiteral("frame_42"));
        frame_42->setGeometry(QRect(0, -40, 831, 591));
        frame_42->setStyleSheet(QStringLiteral("border-image: url(:/icons/84239945.jpg);"));
        frame_42->setFrameShape(QFrame::StyledPanel);
        frame_42->setFrameShadow(QFrame::Raised);
        stackedWidget->addWidget(addmain);
        frame_42->raise();
        frame->raise();
        addfaculty = new QWidget();
        addfaculty->setObjectName(QStringLiteral("addfaculty"));
        label_5 = new QLabel(addfaculty);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 540, 251, 20));
        label_5->setFont(font);
        frame_2 = new QFrame(addfaculty);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(20, 10, 791, 521));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_7 = new QFrame(frame_2);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setGeometry(QRect(30, 370, 371, 141));
        frame_7->setFont(font);
        frame_7->setStyleSheet(QStringLiteral(""));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        gridLayout_10 = new QGridLayout(frame_7);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        label_46 = new QLabel(frame_7);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setFont(font);
        label_46->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_10->addWidget(label_46, 7, 0, 1, 1);

        label_43 = new QLabel(frame_7);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setFont(font);
        label_43->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_10->addWidget(label_43, 11, 0, 1, 1);

        rtypepw = new QLineEdit(frame_7);
        rtypepw->setObjectName(QStringLiteral("rtypepw"));
        rtypepw->setFont(font);
        rtypepw->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_10->addWidget(rtypepw, 11, 2, 1, 1);

        pw = new QLineEdit(frame_7);
        pw->setObjectName(QStringLiteral("pw"));
        pw->setFont(font);
        pw->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_10->addWidget(pw, 10, 2, 1, 1);

        notification_1 = new QLabel(frame_7);
        notification_1->setObjectName(QStringLiteral("notification_1"));
        notification_1->setFont(font);
        notification_1->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_10->addWidget(notification_1, 12, 0, 1, 3);

        username = new QLineEdit(frame_7);
        username->setObjectName(QStringLiteral("username"));
        username->setFont(font);
        username->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_10->addWidget(username, 7, 2, 1, 1);

        label_47 = new QLabel(frame_7);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setFont(font);
        label_47->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_10->addWidget(label_47, 10, 0, 1, 1);

        notification = new QLabel(frame_7);
        notification->setObjectName(QStringLiteral("notification"));
        notification->setFont(font);
        notification->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_10->addWidget(notification, 8, 0, 1, 3);

        frame_8 = new QFrame(frame_2);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setGeometry(QRect(300, 210, 471, 141));
        frame_8->setFont(font);
        frame_8->setStyleSheet(QStringLiteral(""));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        gridLayout_11 = new QGridLayout(frame_8);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        label_48 = new QLabel(frame_8);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setFont(font);
        label_48->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_11->addWidget(label_48, 6, 0, 1, 1);

        city_2 = new QLineEdit(frame_8);
        city_2->setObjectName(QStringLiteral("city_2"));
        city_2->setFont(font);
        city_2->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_11->addWidget(city_2, 7, 2, 1, 1);

        brgy_2 = new QLineEdit(frame_8);
        brgy_2->setObjectName(QStringLiteral("brgy_2"));
        brgy_2->setFont(font);
        brgy_2->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_11->addWidget(brgy_2, 6, 2, 1, 1);

        label_11 = new QLabel(frame_8);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);
        label_11->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_11->addWidget(label_11, 7, 0, 1, 1);

        label_13 = new QLabel(frame_8);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font);
        label_13->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_11->addWidget(label_13, 8, 0, 1, 1);

        province_2 = new QLineEdit(frame_8);
        province_2->setObjectName(QStringLiteral("province_2"));
        province_2->setFont(font);
        province_2->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_11->addWidget(province_2, 8, 2, 1, 1);

        label_17 = new QLabel(frame_8);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font);
        label_17->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_11->addWidget(label_17, 1, 0, 1, 1);

        street_2 = new QLineEdit(frame_8);
        street_2->setObjectName(QStringLiteral("street_2"));
        street_2->setFont(font);
        street_2->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_11->addWidget(street_2, 1, 2, 1, 1);

        label_49 = new QLabel(frame_8);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setFont(font);
        label_49->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_11->addWidget(label_49, 0, 0, 1, 1);

        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(40, 350, 231, 21));
        QFont font4;
        font4.setFamily(QStringLiteral("Microsoft JhengHei UI Light"));
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        label_10->setFont(font4);
        label_10->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_18 = new QLabel(frame_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(410, 350, 231, 21));
        label_18->setFont(font4);
        label_18->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        add_2 = new QPushButton(frame_2);
        add_2->setObjectName(QStringLiteral("add_2"));
        add_2->setGeometry(QRect(490, 470, 91, 51));
        sizePolicy1.setHeightForWidth(add_2->sizePolicy().hasHeightForWidth());
        add_2->setSizePolicy(sizePolicy1);
        add_2->setFont(font);
        add_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-image: url(:/icons/the-button-859346_640.png);"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setEnabled(true);
        label_3->setGeometry(QRect(20, 20, 231, 61));
        label_3->setFont(font);
        label_3->setAcceptDrops(false);
        label_3->setAutoFillBackground(false);
        label_3->setStyleSheet(QLatin1String("color: rgb(255, 170, 127);\n"
"background-color: rgb(125, 125, 125);\n"
"background-color: rgb(80, 80, 80);"));
        label_3->setTextFormat(Qt::AutoText);
        label_3->setScaledContents(true);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(true);
        label_3->setMargin(5);
        label_3->setOpenExternalLinks(false);
        cancel_2 = new QPushButton(frame_2);
        cancel_2->setObjectName(QStringLiteral("cancel_2"));
        cancel_2->setGeometry(QRect(590, 470, 91, 51));
        sizePolicy1.setHeightForWidth(cancel_2->sizePolicy().hasHeightForWidth());
        cancel_2->setSizePolicy(sizePolicy1);
        cancel_2->setFont(font);
        cancel_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-image: url(:/icons/the-button-859346_640.png);"));
        frame_9 = new QFrame(frame_2);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        frame_9->setGeometry(QRect(300, 20, 471, 191));
        frame_9->setFont(font);
        frame_9->setStyleSheet(QStringLiteral(""));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        gridLayout_12 = new QGridLayout(frame_9);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        middlename_2 = new QLineEdit(frame_9);
        middlename_2->setObjectName(QStringLiteral("middlename_2"));
        middlename_2->setFont(font);
        middlename_2->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_12->addWidget(middlename_2, 8, 2, 1, 1);

        label_9 = new QLabel(frame_9);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);
        label_9->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_12->addWidget(label_9, 9, 0, 1, 1);

        label_8 = new QLabel(frame_9);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);
        label_8->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_12->addWidget(label_8, 8, 0, 1, 1);

        lastname_2 = new QLineEdit(frame_9);
        lastname_2->setObjectName(QStringLiteral("lastname_2"));
        lastname_2->setFont(font);
        lastname_2->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_12->addWidget(lastname_2, 9, 2, 1, 1);

        label_6 = new QLabel(frame_9);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_12->addWidget(label_6, 7, 0, 1, 1);

        firstname_2 = new QLineEdit(frame_9);
        firstname_2->setObjectName(QStringLiteral("firstname_2"));
        firstname_2->setFont(font);
        firstname_2->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_12->addWidget(firstname_2, 5, 2, 1, 1);

        thirdname_2 = new QLineEdit(frame_9);
        thirdname_2->setObjectName(QStringLiteral("thirdname_2"));
        thirdname_2->setFont(font);
        thirdname_2->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_12->addWidget(thirdname_2, 7, 2, 1, 1);

        label_51 = new QLabel(frame_9);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setFont(font);
        label_51->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_12->addWidget(label_51, 10, 0, 1, 1);

        label_4 = new QLabel(frame_9);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_12->addWidget(label_4, 6, 0, 1, 1);

        secondname_2 = new QLineEdit(frame_9);
        secondname_2->setObjectName(QStringLiteral("secondname_2"));
        secondname_2->setFont(font);
        secondname_2->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_12->addWidget(secondname_2, 6, 2, 1, 1);

        label_12 = new QLabel(frame_9);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font);
        label_12->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_12->addWidget(label_12, 5, 0, 1, 1);

        department = new QComboBox(frame_9);
        department->setObjectName(QStringLiteral("department"));
        department->setFont(font);
        department->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_12->addWidget(department, 10, 2, 1, 1);

        male_2 = new QRadioButton(frame_9);
        male_2->setObjectName(QStringLiteral("male_2"));
        male_2->setFont(font);

        gridLayout_12->addWidget(male_2, 5, 4, 1, 1);

        female_2 = new QRadioButton(frame_9);
        female_2->setObjectName(QStringLiteral("female_2"));
        female_2->setFont(font);

        gridLayout_12->addWidget(female_2, 6, 4, 1, 1);

        gender_2 = new QLabel(frame_9);
        gender_2->setObjectName(QStringLiteral("gender_2"));
        gender_2->setFont(font);
        gender_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_12->addWidget(gender_2, 5, 3, 1, 1);

        admin = new QRadioButton(frame_9);
        admin->setObjectName(QStringLiteral("admin"));
        admin->setFont(font);

        gridLayout_12->addWidget(admin, 11, 4, 1, 1);

        student = new QRadioButton(frame_9);
        student->setObjectName(QStringLiteral("student"));
        student->setFont(font);

        gridLayout_12->addWidget(student, 10, 4, 1, 1);

        scanID = new QPushButton(frame_9);
        scanID->setObjectName(QStringLiteral("scanID"));
        sizePolicy.setHeightForWidth(scanID->sizePolicy().hasHeightForWidth());
        scanID->setSizePolicy(sizePolicy);
        scanID->setFont(font);
        scanID->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-image: url(:/icons/the-button-859346_640.png);"));

        gridLayout_12->addWidget(scanID, 7, 3, 3, 2);

        label_2 = new QLabel(frame_9);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_12->addWidget(label_2, 10, 3, 1, 1);

        label_52 = new QLabel(frame_9);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setFont(font);
        label_52->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_12->addWidget(label_52, 11, 0, 1, 1);

        yearlevel = new QComboBox(frame_9);
        yearlevel->setObjectName(QStringLiteral("yearlevel"));
        yearlevel->setFont(font);
        yearlevel->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_12->addWidget(yearlevel, 11, 2, 1, 1);

        frame_6 = new QFrame(frame_2);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(410, 370, 351, 91));
        frame_6->setFont(font);
        frame_6->setStyleSheet(QStringLiteral(""));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        gridLayout_9 = new QGridLayout(frame_6);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        label_41 = new QLabel(frame_6);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setFont(font);
        label_41->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_9->addWidget(label_41, 8, 0, 1, 1);

        contactnum_2 = new QLineEdit(frame_6);
        contactnum_2->setObjectName(QStringLiteral("contactnum_2"));
        contactnum_2->setFont(font);
        contactnum_2->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_9->addWidget(contactnum_2, 9, 2, 1, 1);

        label_42 = new QLabel(frame_6);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setFont(font);
        label_42->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_9->addWidget(label_42, 9, 0, 1, 1);

        emailadd_2 = new QLineEdit(frame_6);
        emailadd_2->setObjectName(QStringLiteral("emailadd_2"));
        emailadd_2->setFont(font);
        emailadd_2->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_9->addWidget(emailadd_2, 8, 2, 1, 1);

        graphicsView_3 = new QGraphicsView(frame_2);
        graphicsView_3->setObjectName(QStringLiteral("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(30, 90, 211, 192));
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(300, 0, 231, 21));
        label_7->setFont(font4);
        label_7->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        frame_36 = new QFrame(addfaculty);
        frame_36->setObjectName(QStringLiteral("frame_36"));
        frame_36->setGeometry(QRect(0, -50, 831, 591));
        frame_36->setStyleSheet(QStringLiteral("border-image: url(:/icons/84239945.jpg);"));
        frame_36->setFrameShape(QFrame::StyledPanel);
        frame_36->setFrameShadow(QFrame::Raised);
        frame_2->raise();
        stackedWidget->addWidget(addfaculty);
        frame_36->raise();
        label_5->raise();
        frame_2->raise();
        addsubject = new QWidget();
        addsubject->setObjectName(QStringLiteral("addsubject"));
        frame_3 = new QFrame(addsubject);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(100, 20, 601, 481));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_53 = new QLabel(frame_3);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setEnabled(true);
        label_53->setGeometry(QRect(170, 20, 271, 61));
        label_53->setFont(font);
        label_53->setAcceptDrops(false);
        label_53->setAutoFillBackground(false);
        label_53->setStyleSheet(QLatin1String("color: rgb(255, 170, 127);\n"
"background-color: rgb(125, 125, 125);\n"
"background-color: rgb(80, 80, 80);"));
        label_53->setTextFormat(Qt::AutoText);
        label_53->setScaledContents(true);
        label_53->setAlignment(Qt::AlignCenter);
        label_53->setWordWrap(true);
        label_53->setMargin(5);
        label_53->setOpenExternalLinks(false);
        add_3 = new QPushButton(frame_3);
        add_3->setObjectName(QStringLiteral("add_3"));
        add_3->setGeometry(QRect(350, 420, 112, 59));
        sizePolicy1.setHeightForWidth(add_3->sizePolicy().hasHeightForWidth());
        add_3->setSizePolicy(sizePolicy1);
        add_3->setFont(font);
        add_3->setStyleSheet(QLatin1String("border-image: url(:/icons/the-button-859346_640.png);\n"
"color: rgb(255, 255, 255);"));
        addsection = new QPushButton(frame_3);
        addsection->setObjectName(QStringLiteral("addsection"));
        addsection->setGeometry(QRect(10, 420, 241, 61));
        QFont font5;
        font5.setFamily(QStringLiteral("Microsoft JhengHei UI Light"));
        font5.setPointSize(12);
        font5.setBold(false);
        font5.setWeight(50);
        addsection->setFont(font5);
        addsection->setStyleSheet(QLatin1String("border-image: url(:/icons/the-button-859346_640.png);\n"
"color: rgb(255, 255, 255);"));
        frame_10 = new QFrame(frame_3);
        frame_10->setObjectName(QStringLiteral("frame_10"));
        frame_10->setGeometry(QRect(10, 100, 581, 311));
        frame_10->setStyleSheet(QStringLiteral(""));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        gridLayout_16 = new QGridLayout(frame_10);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        label_69 = new QLabel(frame_10);
        label_69->setObjectName(QStringLiteral("label_69"));
        label_69->setFont(font);
        label_69->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_69->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_69, 6, 0, 1, 1);

        label_71 = new QLabel(frame_10);
        label_71->setObjectName(QStringLiteral("label_71"));
        label_71->setFont(font);
        label_71->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_71->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_71, 9, 0, 1, 1);

        label_72 = new QLabel(frame_10);
        label_72->setObjectName(QStringLiteral("label_72"));
        label_72->setFont(font);
        label_72->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_72->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_72, 10, 0, 1, 1);

        subject_4 = new QLineEdit(frame_10);
        subject_4->setObjectName(QStringLiteral("subject_4"));
        subject_4->setFont(font);
        subject_4->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_16->addWidget(subject_4, 1, 1, 1, 2);

        label_73 = new QLabel(frame_10);
        label_73->setObjectName(QStringLiteral("label_73"));
        label_73->setFont(font);
        label_73->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_73->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_73, 8, 0, 1, 1);

        label_74 = new QLabel(frame_10);
        label_74->setObjectName(QStringLiteral("label_74"));
        label_74->setFont(font);
        label_74->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_74->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_74, 2, 0, 1, 1);

        subjectfor_2 = new QComboBox(frame_10);
        subjectfor_2->setObjectName(QStringLiteral("subjectfor_2"));
        subjectfor_2->setFont(font);
        subjectfor_2->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_16->addWidget(subjectfor_2, 9, 1, 1, 2);

        description_2 = new QLineEdit(frame_10);
        description_2->setObjectName(QStringLiteral("description_2"));
        sizePolicy.setHeightForWidth(description_2->sizePolicy().hasHeightForWidth());
        description_2->setSizePolicy(sizePolicy);
        description_2->setFont(font);
        description_2->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_16->addWidget(description_2, 2, 1, 2, 2);

        subjecttype_2 = new QComboBox(frame_10);
        subjecttype_2->setObjectName(QStringLiteral("subjecttype_2"));
        subjecttype_2->setFont(font);
        subjecttype_2->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_16->addWidget(subjecttype_2, 10, 1, 1, 2);

        prerequisite_2 = new QLineEdit(frame_10);
        prerequisite_2->setObjectName(QStringLiteral("prerequisite_2"));
        prerequisite_2->setFont(font);
        prerequisite_2->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_16->addWidget(prerequisite_2, 8, 1, 1, 2);

        label_75 = new QLabel(frame_10);
        label_75->setObjectName(QStringLiteral("label_75"));
        label_75->setFont(font);
        label_75->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_75->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_75, 1, 0, 1, 1);

        units_2 = new QComboBox(frame_10);
        units_2->setObjectName(QStringLiteral("units_2"));
        units_2->setFont(font);
        units_2->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_16->addWidget(units_2, 6, 1, 1, 2);

        cancel_3 = new QPushButton(frame_3);
        cancel_3->setObjectName(QStringLiteral("cancel_3"));
        cancel_3->setGeometry(QRect(470, 420, 121, 61));
        sizePolicy1.setHeightForWidth(cancel_3->sizePolicy().hasHeightForWidth());
        cancel_3->setSizePolicy(sizePolicy1);
        cancel_3->setFont(font);
        cancel_3->setStyleSheet(QLatin1String("border-image: url(:/icons/the-button-859346_640.png);\n"
"color: rgb(255, 255, 255);"));
        label_53->raise();
        add_3->raise();
        addsection->raise();
        frame_10->raise();
        cancel_3->raise();
        frame_35 = new QFrame(addsubject);
        frame_35->setObjectName(QStringLiteral("frame_35"));
        frame_35->setGeometry(QRect(0, -50, 831, 591));
        frame_35->setStyleSheet(QStringLiteral("border-image: url(:/icons/84239945.jpg);"));
        frame_35->setFrameShape(QFrame::StyledPanel);
        frame_35->setFrameShadow(QFrame::Raised);
        stackedWidget->addWidget(addsubject);
        frame_35->raise();
        frame_3->raise();
        addsection_2 = new QWidget();
        addsection_2->setObjectName(QStringLiteral("addsection_2"));
        label_19 = new QLabel(addsection_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(430, 530, 47, 13));
        label_19->setFont(font);
        teacher = new QLabel(addsection_2);
        teacher->setObjectName(QStringLiteral("teacher"));
        teacher->setGeometry(QRect(300, 510, 200, 30));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(teacher->sizePolicy().hasHeightForWidth());
        teacher->setSizePolicy(sizePolicy3);
        teacher->setFont(font);
        teacher_2 = new QLabel(addsection_2);
        teacher_2->setObjectName(QStringLiteral("teacher_2"));
        teacher_2->setGeometry(QRect(70, 510, 200, 32));
        sizePolicy3.setHeightForWidth(teacher_2->sizePolicy().hasHeightForWidth());
        teacher_2->setSizePolicy(sizePolicy3);
        teacher_2->setFont(font);
        label_16 = new QLabel(addsection_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(530, 520, 47, 13));
        label_16->setFont(font);
        frame_4 = new QFrame(addsection_2);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(30, 0, 741, 521));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        add_4 = new QPushButton(frame_4);
        add_4->setObjectName(QStringLiteral("add_4"));
        add_4->setGeometry(QRect(450, 400, 112, 59));
        sizePolicy1.setHeightForWidth(add_4->sizePolicy().hasHeightForWidth());
        add_4->setSizePolicy(sizePolicy1);
        add_4->setFont(font);
        add_4->setStyleSheet(QLatin1String("border-image: url(:/icons/the-button-859346_640.png);\n"
"color: rgb(255, 255, 255);"));
        teacherList = new QTableView(frame_4);
        teacherList->setObjectName(QStringLiteral("teacherList"));
        teacherList->setGeometry(QRect(10, 280, 351, 231));
        cancel_4 = new QPushButton(frame_4);
        cancel_4->setObjectName(QStringLiteral("cancel_4"));
        cancel_4->setGeometry(QRect(580, 400, 111, 59));
        sizePolicy1.setHeightForWidth(cancel_4->sizePolicy().hasHeightForWidth());
        cancel_4->setSizePolicy(sizePolicy1);
        cancel_4->setFont(font);
        cancel_4->setStyleSheet(QLatin1String("border-image: url(:/icons/the-button-859346_640.png);\n"
"color: rgb(255, 255, 255);"));
        label_60 = new QLabel(frame_4);
        label_60->setObjectName(QStringLiteral("label_60"));
        label_60->setEnabled(true);
        label_60->setGeometry(QRect(440, 10, 261, 61));
        label_60->setFont(font);
        label_60->setAcceptDrops(false);
        label_60->setAutoFillBackground(false);
        label_60->setStyleSheet(QLatin1String("color: rgb(255, 170, 127);\n"
"background-color: rgb(125, 125, 125);\n"
"background-color: rgb(80, 80, 80);"));
        label_60->setTextFormat(Qt::AutoText);
        label_60->setScaledContents(true);
        label_60->setAlignment(Qt::AlignCenter);
        label_60->setWordWrap(true);
        label_60->setMargin(5);
        label_60->setOpenExternalLinks(false);
        clickSubj = new QTableView(frame_4);
        clickSubj->setObjectName(QStringLiteral("clickSubj"));
        clickSubj->setGeometry(QRect(10, 30, 351, 221));
        frame_11 = new QFrame(frame_4);
        frame_11->setObjectName(QStringLiteral("frame_11"));
        frame_11->setGeometry(QRect(400, 80, 331, 321));
        frame_11->setFont(font);
        frame_11->setStyleSheet(QStringLiteral(""));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        gridLayout_14 = new QGridLayout(frame_11);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        label_62 = new QLabel(frame_11);
        label_62->setObjectName(QStringLiteral("label_62"));
        label_62->setFont(font4);
        label_62->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_14->addWidget(label_62, 3, 0, 1, 1);

        fullname = new QLabel(frame_11);
        fullname->setObjectName(QStringLiteral("fullname"));
        sizePolicy3.setHeightForWidth(fullname->sizePolicy().hasHeightForWidth());
        fullname->setSizePolicy(sizePolicy3);
        fullname->setFont(font);
        fullname->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_14->addWidget(fullname, 10, 1, 1, 1);

        dayslabel = new QLabel(frame_11);
        dayslabel->setObjectName(QStringLiteral("dayslabel"));
        dayslabel->setFont(font4);
        dayslabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_14->addWidget(dayslabel, 7, 0, 1, 1);

        subject_3 = new QLabel(frame_11);
        subject_3->setObjectName(QStringLiteral("subject_3"));
        sizePolicy3.setHeightForWidth(subject_3->sizePolicy().hasHeightForWidth());
        subject_3->setSizePolicy(sizePolicy3);
        subject_3->setFont(font);
        subject_3->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_14->addWidget(subject_3, 1, 1, 1, 1);

        timeEdit = new QTimeEdit(frame_11);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        sizePolicy1.setHeightForWidth(timeEdit->sizePolicy().hasHeightForWidth());
        timeEdit->setSizePolicy(sizePolicy1);
        timeEdit->setFont(font);
        timeEdit->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_14->addWidget(timeEdit, 4, 1, 1, 1);

        label_61 = new QLabel(frame_11);
        label_61->setObjectName(QStringLiteral("label_61"));
        label_61->setFont(font);
        label_61->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_14->addWidget(label_61, 1, 0, 1, 1);

        label_68 = new QLabel(frame_11);
        label_68->setObjectName(QStringLiteral("label_68"));
        label_68->setFont(font);
        label_68->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_14->addWidget(label_68, 10, 0, 1, 1);

        section = new QComboBox(frame_11);
        section->setObjectName(QStringLiteral("section"));
        sizePolicy3.setHeightForWidth(section->sizePolicy().hasHeightForWidth());
        section->setSizePolicy(sizePolicy3);
        section->setFont(font);
        section->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_14->addWidget(section, 2, 1, 1, 2);

        label_63 = new QLabel(frame_11);
        label_63->setObjectName(QStringLiteral("label_63"));
        label_63->setFont(font);
        label_63->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_14->addWidget(label_63, 2, 0, 1, 1);

        label_64 = new QLabel(frame_11);
        label_64->setObjectName(QStringLiteral("label_64"));
        label_64->setFont(font);
        label_64->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_14->addWidget(label_64, 4, 0, 1, 1);

        label_65 = new QLabel(frame_11);
        label_65->setObjectName(QStringLiteral("label_65"));
        label_65->setFont(font);

        gridLayout_14->addWidget(label_65, 5, 0, 1, 1);

        days = new QComboBox(frame_11);
        days->setObjectName(QStringLiteral("days"));
        sizePolicy3.setHeightForWidth(days->sizePolicy().hasHeightForWidth());
        days->setSizePolicy(sizePolicy3);
        days->setFont(font);
        days->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_14->addWidget(days, 7, 1, 1, 1);

        label_70 = new QLabel(frame_11);
        label_70->setObjectName(QStringLiteral("label_70"));
        label_70->setFont(font);
        label_70->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_14->addWidget(label_70, 8, 0, 1, 1);

        timeEdit_2 = new QTimeEdit(frame_11);
        timeEdit_2->setObjectName(QStringLiteral("timeEdit_2"));
        sizePolicy1.setHeightForWidth(timeEdit_2->sizePolicy().hasHeightForWidth());
        timeEdit_2->setSizePolicy(sizePolicy1);
        timeEdit_2->setFont(font);
        timeEdit_2->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_14->addWidget(timeEdit_2, 5, 1, 1, 1);

        room = new QLineEdit(frame_11);
        room->setObjectName(QStringLiteral("room"));
        sizePolicy.setHeightForWidth(room->sizePolicy().hasHeightForWidth());
        room->setSizePolicy(sizePolicy);
        room->setFont(font);
        room->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_14->addWidget(room, 8, 1, 1, 1);

        frame_37 = new QFrame(addsection_2);
        frame_37->setObjectName(QStringLiteral("frame_37"));
        frame_37->setGeometry(QRect(0, -50, 831, 591));
        frame_37->setStyleSheet(QStringLiteral("border-image: url(:/icons/84239945.jpg);"));
        frame_37->setFrameShape(QFrame::StyledPanel);
        frame_37->setFrameShadow(QFrame::Raised);
        stackedWidget->addWidget(addsection_2);
        frame_37->raise();
        label_19->raise();
        teacher->raise();
        teacher_2->raise();
        label_16->raise();
        frame_4->raise();
        addcourse = new QWidget();
        addcourse->setObjectName(QStringLiteral("addcourse"));
        frame_5 = new QFrame(addcourse);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(270, 90, 291, 281));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        add_5 = new QPushButton(frame_5);
        add_5->setObjectName(QStringLiteral("add_5"));
        add_5->setGeometry(QRect(50, 200, 101, 61));
        sizePolicy1.setHeightForWidth(add_5->sizePolicy().hasHeightForWidth());
        add_5->setSizePolicy(sizePolicy1);
        add_5->setFont(font);
        add_5->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-image: url(:/icons/the-button-859346_640.png);"));
        label_66 = new QLabel(frame_5);
        label_66->setObjectName(QStringLiteral("label_66"));
        label_66->setEnabled(true);
        label_66->setGeometry(QRect(10, 10, 271, 61));
        QFont font6;
        font6.setFamily(QStringLiteral("Franklin Gothic Medium"));
        font6.setPointSize(16);
        label_66->setFont(font6);
        label_66->setAcceptDrops(false);
        label_66->setAutoFillBackground(false);
        label_66->setStyleSheet(QLatin1String("color: rgb(255, 170, 127);\n"
"background-color: rgb(125, 125, 125);\n"
"background-color: rgb(80, 80, 80);"));
        label_66->setTextFormat(Qt::AutoText);
        label_66->setScaledContents(true);
        label_66->setAlignment(Qt::AlignCenter);
        label_66->setWordWrap(true);
        label_66->setMargin(5);
        label_66->setOpenExternalLinks(false);
        frame_12 = new QFrame(frame_5);
        frame_12->setObjectName(QStringLiteral("frame_12"));
        frame_12->setGeometry(QRect(30, 80, 241, 111));
        frame_12->setStyleSheet(QStringLiteral(""));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        gridLayout_15 = new QGridLayout(frame_12);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        label_67 = new QLabel(frame_12);
        label_67->setObjectName(QStringLiteral("label_67"));
        label_67->setFont(font);
        label_67->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_15->addWidget(label_67, 1, 0, 1, 1);

        courseedit = new QLineEdit(frame_12);
        courseedit->setObjectName(QStringLiteral("courseedit"));
        sizePolicy.setHeightForWidth(courseedit->sizePolicy().hasHeightForWidth());
        courseedit->setSizePolicy(sizePolicy);
        courseedit->setFont(font);
        courseedit->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));

        gridLayout_15->addWidget(courseedit, 1, 1, 1, 2);

        cancel_5 = new QPushButton(frame_5);
        cancel_5->setObjectName(QStringLiteral("cancel_5"));
        cancel_5->setGeometry(QRect(158, 200, 101, 61));
        sizePolicy1.setHeightForWidth(cancel_5->sizePolicy().hasHeightForWidth());
        cancel_5->setSizePolicy(sizePolicy1);
        cancel_5->setFont(font);
        cancel_5->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-image: url(:/icons/the-button-859346_640.png);"));
        frame_38 = new QFrame(addcourse);
        frame_38->setObjectName(QStringLiteral("frame_38"));
        frame_38->setGeometry(QRect(0, -50, 831, 591));
        frame_38->setStyleSheet(QStringLiteral("border-image: url(:/icons/84239945.jpg);"));
        frame_38->setFrameShape(QFrame::StyledPanel);
        frame_38->setFrameShadow(QFrame::Raised);
        stackedWidget->addWidget(addcourse);
        frame_38->raise();
        frame_5->raise();
        scan = new QWidget();
        scan->setObjectName(QStringLiteral("scan"));
        stackedWidget_2 = new QStackedWidget(scan);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(90, 100, 643, 331));
        scanning = new QWidget();
        scanning->setObjectName(QStringLiteral("scanning"));
        frame_14 = new QFrame(scanning);
        frame_14->setObjectName(QStringLiteral("frame_14"));
        frame_14->setGeometry(QRect(180, 130, 281, 91));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        label_14 = new QLabel(frame_14);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 0, 264, 81));
        QFont font7;
        font7.setFamily(QStringLiteral("Microsoft JhengHei UI Light"));
        font7.setPointSize(48);
        label_14->setFont(font7);
        frame_40 = new QFrame(scanning);
        frame_40->setObjectName(QStringLiteral("frame_40"));
        frame_40->setGeometry(QRect(-90, -150, 831, 591));
        frame_40->setStyleSheet(QStringLiteral("border-image: url(:/icons/84239945.jpg);"));
        frame_40->setFrameShape(QFrame::StyledPanel);
        frame_40->setFrameShadow(QFrame::Raised);
        stackedWidget_2->addWidget(scanning);
        frame_40->raise();
        frame_14->raise();
        uniqueshow = new QWidget();
        uniqueshow->setObjectName(QStringLiteral("uniqueshow"));
        frame_13 = new QFrame(uniqueshow);
        frame_13->setObjectName(QStringLiteral("frame_13"));
        frame_13->setGeometry(QRect(130, 70, 371, 201));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        label_15 = new QLabel(frame_13);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 20, 342, 41));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy4);
        label_15->setFont(font3);
        label_15->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_15->setAlignment(Qt::AlignCenter);
        okID = new QPushButton(frame_13);
        okID->setObjectName(QStringLiteral("okID"));
        okID->setGeometry(QRect(139, 137, 101, 61));
        sizePolicy.setHeightForWidth(okID->sizePolicy().hasHeightForWidth());
        okID->setSizePolicy(sizePolicy);
        okID->setFont(font);
        okID->setToolTipDuration(-4);
        okID->setLayoutDirection(Qt::LeftToRight);
        okID->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-image: url(:/icons/the-button-859346_640.png);"));
        QIcon icon;
        QString iconThemeName = QStringLiteral("CLOSE");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        okID->setIcon(icon);
        okID->setAutoDefault(false);
        okID->setDefault(false);
        okID->setFlat(false);
        cardUID = new QLabel(frame_13);
        cardUID->setObjectName(QStringLiteral("cardUID"));
        cardUID->setGeometry(QRect(19, 57, 331, 58));
        sizePolicy4.setHeightForWidth(cardUID->sizePolicy().hasHeightForWidth());
        cardUID->setSizePolicy(sizePolicy4);
        QFont font8;
        font8.setPointSize(36);
        font8.setBold(true);
        font8.setWeight(75);
        cardUID->setFont(font8);
        cardUID->setStyleSheet(QStringLiteral("border-image: url(:/icons/gray transparent.png);"));
        cardUID->setAlignment(Qt::AlignCenter);
        frame_41 = new QFrame(uniqueshow);
        frame_41->setObjectName(QStringLiteral("frame_41"));
        frame_41->setGeometry(QRect(-90, -150, 831, 591));
        frame_41->setStyleSheet(QStringLiteral("border-image: url(:/icons/84239945.jpg);"));
        frame_41->setFrameShape(QFrame::StyledPanel);
        frame_41->setFrameShadow(QFrame::Raised);
        stackedWidget_2->addWidget(uniqueshow);
        frame_41->raise();
        frame_13->raise();
        frame_39 = new QFrame(scan);
        frame_39->setObjectName(QStringLiteral("frame_39"));
        frame_39->setGeometry(QRect(0, -50, 831, 591));
        frame_39->setStyleSheet(QStringLiteral("border-image: url(:/icons/84239945.jpg);"));
        frame_39->setFrameShape(QFrame::StyledPanel);
        frame_39->setFrameShadow(QFrame::Raised);
        stackedWidget->addWidget(scan);
        frame_39->raise();
        stackedWidget_2->raise();
        frame_21 = new QFrame(registration);
        frame_21->setObjectName(QStringLiteral("frame_21"));
        frame_21->setGeometry(QRect(10, 0, 371, 51));
        frame_21->setFrameShape(QFrame::StyledPanel);
        frame_21->setFrameShadow(QFrame::Raised);
        date_2 = new QLabel(frame_21);
        date_2->setObjectName(QStringLiteral("date_2"));
        date_2->setGeometry(QRect(10, 10, 211, 31));
        sizePolicy.setHeightForWidth(date_2->sizePolicy().hasHeightForWidth());
        date_2->setSizePolicy(sizePolicy);
        QFont font9;
        font9.setFamily(QStringLiteral("Microsoft JhengHei UI Light"));
        font9.setPointSize(14);
        date_2->setFont(font9);
        date_2->setStyleSheet(QLatin1String("border-image: url(:/icons/gray transparent.png);\n"
"color: rgb(255, 255, 255);"));
        date_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        time_2 = new QLabel(frame_21);
        time_2->setObjectName(QStringLiteral("time_2"));
        time_2->setGeometry(QRect(230, 10, 131, 31));
        sizePolicy.setHeightForWidth(time_2->sizePolicy().hasHeightForWidth());
        time_2->setSizePolicy(sizePolicy);
        time_2->setFont(font9);
        time_2->setStyleSheet(QLatin1String("border-image: url(:/icons/gray transparent.png);\n"
"color: rgb(255, 255, 255);"));
        frame_34 = new QFrame(registration);
        frame_34->setObjectName(QStringLiteral("frame_34"));
        frame_34->setGeometry(QRect(0, 0, 831, 591));
        frame_34->setStyleSheet(QStringLiteral("border-image: url(:/icons/84239945.jpg);"));
        frame_34->setFrameShape(QFrame::StyledPanel);
        frame_34->setFrameShadow(QFrame::Raised);
        frame_34->raise();
        stackedWidget->raise();
        frame_21->raise();

        retranslateUi(registration);

        stackedWidget->setCurrentIndex(4);
        stackedWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(registration);
    } // setupUi

    void retranslateUi(QWidget *registration)
    {
        registration->setWindowTitle(QApplication::translate("registration", "Form", 0));
        addRecords->setStyleSheet(QApplication::translate("registration", "border-image: url(:/icons/the-button-859346_640.png);\n"
"color: rgb(255, 255, 255);", 0));
        addRecords->setText(QApplication::translate("registration", "SUBJECT", 0));
        addStaff->setStyleSheet(QApplication::translate("registration", "border-image: url(:/icons/the-button-859346_640.png);\n"
"color: rgb(255, 255, 255);", 0));
        addStaff->setText(QApplication::translate("registration", "ACCOUNT", 0));
        main->setText(QApplication::translate("registration", "Back to Main", 0));
        label->setText(QApplication::translate("registration", "ADD", 0));
        addDepartment->setStyleSheet(QApplication::translate("registration", "border-image: url(:/icons/the-button-859346_640.png);\n"
"color: rgb(255, 255, 255);", 0));
        addDepartment->setText(QApplication::translate("registration", "DEPARTMENT", 0));
        label_5->setText(QString());
        label_46->setText(QApplication::translate("registration", "Username/ID Number", 0));
        label_43->setText(QApplication::translate("registration", "Retype Password", 0));
        notification_1->setText(QString());
        label_47->setText(QApplication::translate("registration", "Password", 0));
        notification->setText(QString());
        label_48->setText(QApplication::translate("registration", "Barangay:", 0));
        label_11->setText(QApplication::translate("registration", "City:", 0));
        label_13->setText(QApplication::translate("registration", "Province:", 0));
        label_17->setText(QApplication::translate("registration", "Street:", 0));
        label_49->setText(QApplication::translate("registration", "Address Information", 0));
        label_10->setText(QApplication::translate("registration", "Account Information", 0));
        label_18->setText(QApplication::translate("registration", "Contact Information", 0));
        add_2->setText(QApplication::translate("registration", "ADD", 0));
        label_3->setText(QApplication::translate("registration", "ADD ACCOUNT", 0));
        cancel_2->setText(QApplication::translate("registration", "CANCEL", 0));
        label_9->setText(QApplication::translate("registration", "Last Name", 0));
        label_8->setText(QApplication::translate("registration", "Middle Name", 0));
        label_6->setText(QApplication::translate("registration", "Third Name", 0));
        label_51->setText(QApplication::translate("registration", "Department", 0));
        label_4->setText(QApplication::translate("registration", "Second Name", 0));
        label_12->setText(QApplication::translate("registration", "First Name", 0));
        department->clear();
        department->insertItems(0, QStringList()
         << QString()
        );
        male_2->setText(QApplication::translate("registration", "Male", 0));
        female_2->setText(QApplication::translate("registration", "Female", 0));
        gender_2->setText(QApplication::translate("registration", "Gender", 0));
        admin->setText(QApplication::translate("registration", "Admin", 0));
        student->setText(QApplication::translate("registration", "Student", 0));
        scanID->setText(QApplication::translate("registration", "Click here to scan ID", 0));
        label_2->setText(QApplication::translate("registration", "User type", 0));
        label_52->setText(QApplication::translate("registration", "Year Level", 0));
        yearlevel->clear();
        yearlevel->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("registration", "I", 0)
         << QApplication::translate("registration", "II", 0)
         << QApplication::translate("registration", "III", 0)
         << QApplication::translate("registration", "IV", 0)
         << QApplication::translate("registration", "V", 0)
        );
        label_41->setText(QApplication::translate("registration", "Email:", 0));
        label_42->setText(QApplication::translate("registration", "Phone Number:", 0));
        label_7->setText(QApplication::translate("registration", "Personal Information", 0));
        label_53->setText(QApplication::translate("registration", "ADD A SUBJECT", 0));
        add_3->setText(QApplication::translate("registration", "ADD", 0));
        addsection->setText(QApplication::translate("registration", "ADD A SECTION HERE", 0));
        label_69->setText(QApplication::translate("registration", "Units", 0));
        label_71->setText(QApplication::translate("registration", "Subject for", 0));
        label_72->setText(QApplication::translate("registration", "Subject Type", 0));
        label_73->setText(QApplication::translate("registration", "Pre-requsite", 0));
        label_74->setText(QApplication::translate("registration", "Description", 0));
        subjectfor_2->clear();
        subjectfor_2->insertItems(0, QStringList()
         << QString()
        );
        subjecttype_2->clear();
        subjecttype_2->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("registration", "LECTURE", 0)
         << QApplication::translate("registration", "LABORATORY", 0)
         << QApplication::translate("registration", "LECLAB", 0)
        );
        label_75->setText(QApplication::translate("registration", "Subject", 0));
        units_2->clear();
        units_2->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("registration", "1.0", 0)
         << QApplication::translate("registration", "2.0", 0)
         << QApplication::translate("registration", "3.0", 0)
         << QApplication::translate("registration", "4.0", 0)
         << QApplication::translate("registration", "5.0", 0)
         << QApplication::translate("registration", "6.0", 0)
        );
        cancel_3->setText(QApplication::translate("registration", "CANCEL", 0));
        label_19->setText(QString());
        teacher->setText(QString());
        teacher_2->setText(QString());
        label_16->setText(QString());
        add_4->setText(QApplication::translate("registration", "ADD", 0));
        cancel_4->setText(QApplication::translate("registration", "CANCEL", 0));
        label_60->setText(QApplication::translate("registration", "ADD A SECTION", 0));
        label_62->setText(QApplication::translate("registration", "Class Starts", 0));
        fullname->setText(QString());
        dayslabel->setText(QApplication::translate("registration", "Class Days", 0));
        subject_3->setText(QString());
        label_61->setText(QApplication::translate("registration", "Subject", 0));
        label_68->setText(QApplication::translate("registration", "Instructor", 0));
        section->clear();
        section->insertItems(0, QStringList()
         << QString()
        );
        label_63->setText(QApplication::translate("registration", "Section", 0));
        label_64->setText(QApplication::translate("registration", "From", 0));
        label_65->setText(QApplication::translate("registration", "To", 0));
        days->clear();
        days->insertItems(0, QStringList()
         << QString()
        );
        label_70->setText(QApplication::translate("registration", "Room", 0));
        add_5->setText(QApplication::translate("registration", "ADD", 0));
        label_66->setText(QApplication::translate("registration", "ADD A COURSE", 0));
        label_67->setText(QApplication::translate("registration", "Course", 0));
        cancel_5->setText(QApplication::translate("registration", "CANCEL", 0));
        label_14->setText(QApplication::translate("registration", "Scanning", 0));
        label_15->setText(QApplication::translate("registration", "Your RFID card number:", 0));
        okID->setText(QApplication::translate("registration", "OK", 0));
        cardUID->setText(QString());
        date_2->setText(QApplication::translate("registration", "D", 0));
        time_2->setText(QApplication::translate("registration", "D", 0));
    } // retranslateUi

};

namespace Ui {
    class registration: public Ui_registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
