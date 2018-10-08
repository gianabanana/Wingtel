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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralWidget;
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
    QWidget *loginpage;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *usertypelabel;
    QLabel *fullname;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(821, 595);
        centralWidget = new QWidget(login);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 811, 571));
        scanCard = new QWidget();
        scanCard->setObjectName(QStringLiteral("scanCard"));
        layoutWidget = new QWidget(scanCard);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(130, 90, 489, 380));
        mainpage = new QGridLayout(layoutWidget);
        mainpage->setSpacing(6);
        mainpage->setContentsMargins(11, 11, 11, 11);
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
        loginpage = new QWidget();
        loginpage->setObjectName(QStringLiteral("loginpage"));
        label = new QLabel(loginpage);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(250, 110, 281, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("Franklin Gothic Medium"));
        font1.setPointSize(36);
        label->setFont(font1);
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
        label_5 = new QLabel(loginpage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(290, 530, 231, 21));
        label_36 = new QLabel(loginpage);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(80, 380, 47, 13));
        label_37 = new QLabel(loginpage);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(90, 430, 47, 13));
        usertypelabel = new QLabel(loginpage);
        usertypelabel->setObjectName(QStringLiteral("usertypelabel"));
        usertypelabel->setGeometry(QRect(300, 170, 201, 61));
        QFont font2;
        font2.setFamily(QStringLiteral("Century Gothic"));
        font2.setPointSize(22);
        font2.setBold(true);
        font2.setWeight(75);
        usertypelabel->setFont(font2);
        usertypelabel->setStyleSheet(QLatin1String("color: rgb(53, 53, 53);\n"
"background-color: rgb(255, 170, 127);\n"
""));
        usertypelabel->setAlignment(Qt::AlignCenter);
        fullname = new QLabel(loginpage);
        fullname->setObjectName(QStringLiteral("fullname"));
        fullname->setGeometry(QRect(190, 230, 421, 81));
        QFont font3;
        font3.setPointSize(26);
        fullname->setFont(font3);
        fullname->setStyleSheet(QStringLiteral("background-color: rgb(125, 125, 125);"));
        fullname->setAlignment(Qt::AlignCenter);
        fullname->setWordWrap(true);
        label_2 = new QLabel(loginpage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(370, 480, 47, 13));
        label_3 = new QLabel(loginpage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(370, 510, 47, 13));
        label_4 = new QLabel(loginpage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(480, 480, 47, 13));
        stackedWidget->addWidget(loginpage);
        login->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(login);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        login->setStatusBar(statusBar);

        retranslateUi(login);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QApplication::translate("login", "login", Q_NULLPTR));
        scanid->setText(QApplication::translate("login", "Scan your ID here!", Q_NULLPTR));
        label->setText(QApplication::translate("login", "WELCOME", Q_NULLPTR));
        label_5->setText(QString());
        label_36->setText(QString());
        label_37->setText(QString());
        usertypelabel->setText(QString());
        fullname->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
