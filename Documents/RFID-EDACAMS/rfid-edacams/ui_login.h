/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QStackedWidget *stackedWidget;
    QWidget *scanCard;
    QWidget *layoutWidget;
    QGridLayout *mainpage;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLabel *scanid;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QWidget *welcomeName;
    QWidget *layoutWidget_2;
    QGridLayout *welcomepage;
    QSpacerItem *verticalSpacer_8;
    QLabel *notifier;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_10;
    QLabel *firstname;
    QSpacerItem *horizontalSpacer_11;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *verticalSpacer_9;
    QWidget *loginpage;
    QLabel *label;
    QFrame *frame_2;
    QLineEdit *username;
    QLineEdit *password;
    QCheckBox *checkBoxpw;
    QLabel *label_9;
    QLabel *label_10;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *submit;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *cancel;
    QSpacerItem *horizontalSpacer_5;
    QRadioButton *studentButton;
    QRadioButton *adminButton;
    QLabel *label_5;
    QLabel *label_4;
    QWidget *page;
    QStackedWidget *stackedWidget_2;
    QWidget *scanCard_2;
    QWidget *layoutWidget_3;
    QGridLayout *mainpage_2;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *horizontalSpacer_15;
    QLabel *scanid_2;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_11;
    QWidget *welcomeName_2;
    QWidget *layoutWidget_4;
    QGridLayout *welcomepage_2;
    QSpacerItem *verticalSpacer_12;
    QLabel *notifier_2;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_17;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *horizontalSpacer_19;
    QSpacerItem *horizontalSpacer_20;
    QLabel *firstname_2;
    QSpacerItem *horizontalSpacer_21;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_13;
    QSpacerItem *horizontalSpacer_22;
    QSpacerItem *horizontalSpacer_23;
    QSpacerItem *verticalSpacer_14;
    QWidget *loginpage_2;
    QLabel *label_6;
    QFrame *frame_3;
    QLineEdit *username_2;
    QLineEdit *password_2;
    QCheckBox *checkBoxpw_2;
    QLabel *label_11;
    QLabel *label_12;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_24;
    QPushButton *submit_2;
    QSpacerItem *horizontalSpacer_25;
    QPushButton *cancel_2;
    QSpacerItem *horizontalSpacer_26;
    QRadioButton *studentButton_2;
    QRadioButton *adminButton_2;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *page_2;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(719, 550);
        login->setStyleSheet(QStringLiteral("background-color: rgb(102, 102, 102);"));
        stackedWidget = new QStackedWidget(login);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 30, 671, 481));
        scanCard = new QWidget();
        scanCard->setObjectName(QStringLiteral("scanCard"));
        layoutWidget = new QWidget(scanCard);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 60, 489, 380));
        mainpage = new QGridLayout(layoutWidget);
        mainpage->setObjectName(QStringLiteral("mainpage"));
        mainpage->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mainpage->addItem(verticalSpacer_3, 0, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mainpage->addItem(verticalSpacer_4, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mainpage->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mainpage->addItem(horizontalSpacer, 2, 0, 1, 1);

        scanid = new QLabel(layoutWidget);
        scanid->setObjectName(QStringLiteral("scanid"));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        scanid->setFont(font);

        mainpage->addWidget(scanid, 2, 1, 2, 2);

        verticalSpacer = new QSpacerItem(38, 178, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mainpage->addItem(verticalSpacer, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(48, 168, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mainpage->addItem(verticalSpacer_2, 4, 2, 1, 1);

        stackedWidget->addWidget(scanCard);
        welcomeName = new QWidget();
        welcomeName->setObjectName(QStringLiteral("welcomeName"));
        layoutWidget_2 = new QWidget(welcomeName);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 20, 551, 401));
        welcomepage = new QGridLayout(layoutWidget_2);
        welcomepage->setObjectName(QStringLiteral("welcomepage"));
        welcomepage->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        welcomepage->addItem(verticalSpacer_8, 6, 3, 1, 1);

        notifier = new QLabel(layoutWidget_2);
        notifier->setObjectName(QStringLiteral("notifier"));
        QFont font1;
        font1.setFamily(QStringLiteral("Trebuchet MS"));
        font1.setPointSize(16);
        notifier->setFont(font1);

        welcomepage->addWidget(notifier, 5, 3, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        welcomepage->addItem(horizontalSpacer_7, 2, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        welcomepage->addItem(horizontalSpacer_8, 2, 5, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        welcomepage->addItem(horizontalSpacer_6, 5, 0, 1, 3);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        welcomepage->addItem(horizontalSpacer_9, 2, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        welcomepage->addItem(horizontalSpacer_10, 2, 6, 1, 1);

        firstname = new QLabel(layoutWidget_2);
        firstname->setObjectName(QStringLiteral("firstname"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(firstname->sizePolicy().hasHeightForWidth());
        firstname->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(22);
        firstname->setFont(font2);
        firstname->setAlignment(Qt::AlignCenter);

        welcomepage->addWidget(firstname, 2, 2, 1, 2);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        welcomepage->addItem(horizontalSpacer_11, 5, 4, 1, 3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(26);
        font3.setBold(true);
        font3.setWeight(75);
        label_2->setFont(font3);
        label_2->setLayoutDirection(Qt::RightToLeft);
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 1, 1, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_12, 2, 2, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_13, 2, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_9, 0, 1, 1, 1);


        welcomepage->addLayout(gridLayout, 1, 1, 1, 5);

        stackedWidget->addWidget(welcomeName);
        loginpage = new QWidget();
        loginpage->setObjectName(QStringLiteral("loginpage"));
        label = new QLabel(loginpage);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(100, 60, 451, 131));
        QFont font4;
        font4.setFamily(QStringLiteral("Franklin Gothic Medium"));
        font4.setPointSize(16);
        label->setFont(font4);
        label->setAcceptDrops(false);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QLatin1String("color: rgb(255, 170, 127);\n"
"background-color: rgb(125, 125, 125);"));
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);
        label->setMargin(5);
        label->setOpenExternalLinks(false);
        frame_2 = new QFrame(loginpage);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(160, 180, 331, 231));
        frame_2->setStyleSheet(QLatin1String("background-color: rgb(255, 170, 127);\n"
"selection-color: rgb(170, 170, 127);\n"
"border-color: rgb(121, 121, 121);\n"
"color: rgb(0, 0, 0);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        username = new QLineEdit(frame_2);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(130, 80, 151, 22));
        password = new QLineEdit(frame_2);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(130, 110, 151, 22));
        password->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/clear.png);"));
        checkBoxpw = new QCheckBox(frame_2);
        checkBoxpw->setObjectName(QStringLiteral("checkBoxpw"));
        checkBoxpw->setGeometry(QRect(180, 140, 100, 19));
        checkBoxpw->setStyleSheet(QLatin1String("color: rgb(53, 53, 53);\n"
"image: url(:/new/prefix1/clear.png);"));
        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(67, 80, 51, 20));
        label_9->setStyleSheet(QLatin1String("color: rgb(53, 53, 53);\n"
"image: url(:/new/prefix1/clear.png);"));
        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(70, 110, 46, 16));
        label_10->setStyleSheet(QLatin1String("color: rgb(53, 53, 53);\n"
"image: url(:/new/prefix1/clear.png);"));
        groupBox_3 = new QGroupBox(frame_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 160, 301, 51));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        submit = new QPushButton(groupBox_3);
        submit->setObjectName(QStringLiteral("submit"));
        submit->setStyleSheet(QLatin1String("border-color: rgb(131, 126, 125);\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(2, 2, 2);"));

        horizontalLayout_3->addWidget(submit);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        cancel = new QPushButton(groupBox_3);
        cancel->setObjectName(QStringLiteral("cancel"));

        horizontalLayout_3->addWidget(cancel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        studentButton = new QRadioButton(frame_2);
        studentButton->setObjectName(QStringLiteral("studentButton"));
        studentButton->setGeometry(QRect(90, 50, 82, 17));
        adminButton = new QRadioButton(frame_2);
        adminButton->setObjectName(QStringLiteral("adminButton"));
        adminButton->setGeometry(QRect(170, 50, 82, 17));
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 200, 231, 21));
        label_4 = new QLabel(loginpage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(240, 200, 191, 21));
        QFont font5;
        font5.setFamily(QStringLiteral("Chocolate Covered Raindrops Bol"));
        font5.setPointSize(20);
        label_4->setFont(font5);
        label_4->setStyleSheet(QStringLiteral("color: rgb(53, 53, 53);"));
        stackedWidget->addWidget(loginpage);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget_2 = new QStackedWidget(page);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(100, 160, 671, 481));
        scanCard_2 = new QWidget();
        scanCard_2->setObjectName(QStringLiteral("scanCard_2"));
        layoutWidget_3 = new QWidget(scanCard_2);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(100, 60, 489, 380));
        mainpage_2 = new QGridLayout(layoutWidget_3);
        mainpage_2->setObjectName(QStringLiteral("mainpage_2"));
        mainpage_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mainpage_2->addItem(verticalSpacer_5, 0, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mainpage_2->addItem(verticalSpacer_6, 0, 2, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mainpage_2->addItem(horizontalSpacer_14, 2, 3, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mainpage_2->addItem(horizontalSpacer_15, 2, 0, 1, 1);

        scanid_2 = new QLabel(layoutWidget_3);
        scanid_2->setObjectName(QStringLiteral("scanid_2"));
        scanid_2->setFont(font);

        mainpage_2->addWidget(scanid_2, 2, 1, 2, 2);

        verticalSpacer_10 = new QSpacerItem(38, 178, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mainpage_2->addItem(verticalSpacer_10, 4, 1, 1, 1);

        verticalSpacer_11 = new QSpacerItem(48, 168, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mainpage_2->addItem(verticalSpacer_11, 4, 2, 1, 1);

        stackedWidget_2->addWidget(scanCard_2);
        welcomeName_2 = new QWidget();
        welcomeName_2->setObjectName(QStringLiteral("welcomeName_2"));
        layoutWidget_4 = new QWidget(welcomeName_2);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(20, 20, 551, 401));
        welcomepage_2 = new QGridLayout(layoutWidget_4);
        welcomepage_2->setObjectName(QStringLiteral("welcomepage_2"));
        welcomepage_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        welcomepage_2->addItem(verticalSpacer_12, 6, 3, 1, 1);

        notifier_2 = new QLabel(layoutWidget_4);
        notifier_2->setObjectName(QStringLiteral("notifier_2"));
        notifier_2->setFont(font1);

        welcomepage_2->addWidget(notifier_2, 5, 3, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        welcomepage_2->addItem(horizontalSpacer_16, 2, 0, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        welcomepage_2->addItem(horizontalSpacer_17, 2, 5, 1, 1);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        welcomepage_2->addItem(horizontalSpacer_18, 5, 0, 1, 3);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        welcomepage_2->addItem(horizontalSpacer_19, 2, 1, 1, 1);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        welcomepage_2->addItem(horizontalSpacer_20, 2, 6, 1, 1);

        firstname_2 = new QLabel(layoutWidget_4);
        firstname_2->setObjectName(QStringLiteral("firstname_2"));
        sizePolicy.setHeightForWidth(firstname_2->sizePolicy().hasHeightForWidth());
        firstname_2->setSizePolicy(sizePolicy);
        firstname_2->setFont(font2);
        firstname_2->setAlignment(Qt::AlignCenter);

        welcomepage_2->addWidget(firstname_2, 2, 2, 1, 2);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        welcomepage_2->addItem(horizontalSpacer_21, 5, 4, 1, 3);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(layoutWidget_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font3);
        label_3->setLayoutDirection(Qt::RightToLeft);
        label_3->setScaledContents(true);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(true);

        gridLayout_2->addWidget(label_3, 2, 1, 1, 1);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_13, 1, 1, 1, 1);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_22, 2, 2, 1, 1);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_23, 2, 0, 1, 1);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_14, 0, 1, 1, 1);


        welcomepage_2->addLayout(gridLayout_2, 1, 1, 1, 5);

        stackedWidget_2->addWidget(welcomeName_2);
        loginpage_2 = new QWidget();
        loginpage_2->setObjectName(QStringLiteral("loginpage_2"));
        label_6 = new QLabel(loginpage_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setEnabled(true);
        label_6->setGeometry(QRect(100, 60, 451, 131));
        label_6->setFont(font4);
        label_6->setAcceptDrops(false);
        label_6->setAutoFillBackground(false);
        label_6->setStyleSheet(QLatin1String("color: rgb(255, 170, 127);\n"
"background-color: rgb(125, 125, 125);"));
        label_6->setTextFormat(Qt::AutoText);
        label_6->setScaledContents(true);
        label_6->setAlignment(Qt::AlignCenter);
        label_6->setWordWrap(true);
        label_6->setMargin(5);
        label_6->setOpenExternalLinks(false);
        frame_3 = new QFrame(loginpage_2);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(160, 180, 331, 231));
        frame_3->setStyleSheet(QLatin1String("background-color: rgb(255, 170, 127);\n"
"selection-color: rgb(170, 170, 127);\n"
"border-color: rgb(121, 121, 121);\n"
"color: rgb(0, 0, 0);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        username_2 = new QLineEdit(frame_3);
        username_2->setObjectName(QStringLiteral("username_2"));
        username_2->setGeometry(QRect(130, 80, 151, 22));
        password_2 = new QLineEdit(frame_3);
        password_2->setObjectName(QStringLiteral("password_2"));
        password_2->setGeometry(QRect(130, 110, 151, 22));
        password_2->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/clear.png);"));
        checkBoxpw_2 = new QCheckBox(frame_3);
        checkBoxpw_2->setObjectName(QStringLiteral("checkBoxpw_2"));
        checkBoxpw_2->setGeometry(QRect(180, 140, 100, 19));
        checkBoxpw_2->setStyleSheet(QLatin1String("color: rgb(53, 53, 53);\n"
"image: url(:/new/prefix1/clear.png);"));
        label_11 = new QLabel(frame_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(67, 80, 51, 20));
        label_11->setStyleSheet(QLatin1String("color: rgb(53, 53, 53);\n"
"image: url(:/new/prefix1/clear.png);"));
        label_12 = new QLabel(frame_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(70, 110, 46, 16));
        label_12->setStyleSheet(QLatin1String("color: rgb(53, 53, 53);\n"
"image: url(:/new/prefix1/clear.png);"));
        groupBox_4 = new QGroupBox(frame_3);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 160, 301, 51));
        horizontalLayout_4 = new QHBoxLayout(groupBox_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_24);

        submit_2 = new QPushButton(groupBox_4);
        submit_2->setObjectName(QStringLiteral("submit_2"));
        submit_2->setStyleSheet(QLatin1String("border-color: rgb(131, 126, 125);\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(2, 2, 2);"));

        horizontalLayout_4->addWidget(submit_2);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_25);

        cancel_2 = new QPushButton(groupBox_4);
        cancel_2->setObjectName(QStringLiteral("cancel_2"));

        horizontalLayout_4->addWidget(cancel_2);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_26);

        studentButton_2 = new QRadioButton(frame_3);
        studentButton_2->setObjectName(QStringLiteral("studentButton_2"));
        studentButton_2->setGeometry(QRect(90, 50, 82, 17));
        adminButton_2 = new QRadioButton(frame_3);
        adminButton_2->setObjectName(QStringLiteral("adminButton_2"));
        adminButton_2->setGeometry(QRect(170, 50, 82, 17));
        label_7 = new QLabel(frame_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 200, 231, 21));
        label_8 = new QLabel(loginpage_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(240, 200, 191, 21));
        label_8->setFont(font5);
        label_8->setStyleSheet(QStringLiteral("color: rgb(53, 53, 53);"));
        stackedWidget_2->addWidget(loginpage_2);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget_2->addWidget(page_2);
        stackedWidget->addWidget(page);

        retranslateUi(login);

        stackedWidget->setCurrentIndex(3);
        stackedWidget_2->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Form", Q_NULLPTR));
        scanid->setText(QApplication::translate("login", "Scan your ID here!", Q_NULLPTR));
        notifier->setText(QApplication::translate("login", "Attendance Checked! Come inside :)", Q_NULLPTR));
        firstname->setText(QString());
        label_2->setText(QApplication::translate("login", "Welcome", Q_NULLPTR));
        label->setText(QApplication::translate("login", "RADIO FREQUENCY IDENTIFICATION ENABLED DOOR ACCESS CONTROL AND ATTENDANCE MONITORING SYSTEM", Q_NULLPTR));
        checkBoxpw->setText(QApplication::translate("login", "Show password", Q_NULLPTR));
        label_9->setText(QApplication::translate("login", "ID number", Q_NULLPTR));
        label_10->setText(QApplication::translate("login", "Password", Q_NULLPTR));
        submit->setText(QApplication::translate("login", "SUBMIT", Q_NULLPTR));
        cancel->setText(QApplication::translate("login", "CANCEL", Q_NULLPTR));
        studentButton->setText(QApplication::translate("login", "Student", Q_NULLPTR));
        adminButton->setText(QApplication::translate("login", "Administartor", Q_NULLPTR));
        label_5->setText(QString());
        label_4->setText(QApplication::translate("login", "Login to your credentials", Q_NULLPTR));
        scanid_2->setText(QApplication::translate("login", "Scan your ID here!", Q_NULLPTR));
        notifier_2->setText(QApplication::translate("login", "Attendance Checked! Come inside :)", Q_NULLPTR));
        firstname_2->setText(QString());
        label_3->setText(QApplication::translate("login", "Welcome", Q_NULLPTR));
        label_6->setText(QApplication::translate("login", "RADIO FREQUENCY IDENTIFICATION ENABLED DOOR ACCESS CONTROL AND ATTENDANCE MONITORING SYSTEM", Q_NULLPTR));
        checkBoxpw_2->setText(QApplication::translate("login", "Show password", Q_NULLPTR));
        label_11->setText(QApplication::translate("login", "ID number", Q_NULLPTR));
        label_12->setText(QApplication::translate("login", "Password", Q_NULLPTR));
        submit_2->setText(QApplication::translate("login", "SUBMIT", Q_NULLPTR));
        cancel_2->setText(QApplication::translate("login", "CANCEL", Q_NULLPTR));
        studentButton_2->setText(QApplication::translate("login", "Student", Q_NULLPTR));
        adminButton_2->setText(QApplication::translate("login", "Administartor", Q_NULLPTR));
        label_7->setText(QString());
        label_8->setText(QApplication::translate("login", "Login to your credentials", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
