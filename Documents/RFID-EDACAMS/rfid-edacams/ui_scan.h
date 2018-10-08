/********************************************************************************
** Form generated from reading UI file 'scan.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCAN_H
#define UI_SCAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_scan
{
public:
    QStackedWidget *stackedWidget;
    QWidget *scanning;
    QFrame *frame;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QWidget *uniqueshow;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QLabel *cardUID;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_3;
    QPushButton *okID;

    void setupUi(QWidget *scan)
    {
        if (scan->objectName().isEmpty())
            scan->setObjectName(QStringLiteral("scan"));
        scan->resize(400, 300);
        scan->setLayoutDirection(Qt::LeftToRight);
        stackedWidget = new QStackedWidget(scan);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 401, 301));
        scanning = new QWidget();
        scanning->setObjectName(QStringLiteral("scanning"));
        frame = new QFrame(scanning);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 381, 281));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Playbill"));
        font.setPointSize(48);
        label->setFont(font);

        gridLayout->addWidget(label, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        line = new QFrame(frame);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 1, 1, 1);

        stackedWidget->addWidget(scanning);
        uniqueshow = new QWidget();
        uniqueshow->setObjectName(QStringLiteral("uniqueshow"));
        gridLayout_2 = new QGridLayout(uniqueshow);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_8, 6, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 0, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 6, 0, 1, 1);

        label_2 = new QLabel(uniqueshow);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setPointSize(24);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 1, 4, 1, 1);

        cardUID = new QLabel(uniqueshow);
        cardUID->setObjectName(QStringLiteral("cardUID"));
        QFont font2;
        font2.setPointSize(36);
        font2.setBold(true);
        font2.setWeight(75);
        cardUID->setFont(font2);
        cardUID->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(cardUID, 2, 4, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 6, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 6, 6, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 6, 8, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 6, 7, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 4, 4, 1, 1);

        okID = new QPushButton(uniqueshow);
        okID->setObjectName(QStringLiteral("okID"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(okID->sizePolicy().hasHeightForWidth());
        okID->setSizePolicy(sizePolicy);
        okID->setToolTipDuration(-4);
        okID->setLayoutDirection(Qt::LeftToRight);
        QIcon icon;
        QString iconThemeName = QStringLiteral("CLOSE");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        okID->setIcon(icon);
        okID->setAutoDefault(false);
        okID->setFlat(false);

        gridLayout_2->addWidget(okID, 6, 4, 1, 1);

        stackedWidget->addWidget(uniqueshow);

        retranslateUi(scan);

        stackedWidget->setCurrentIndex(1);
        okID->setDefault(false);


        QMetaObject::connectSlotsByName(scan);
    } // setupUi

    void retranslateUi(QWidget *scan)
    {
        scan->setWindowTitle(QApplication::translate("scan", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("scan", "Scanning", Q_NULLPTR));
        label_2->setText(QApplication::translate("scan", "Your RFID card number:", Q_NULLPTR));
        cardUID->setText(QString());
        okID->setText(QApplication::translate("scan", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class scan: public Ui_scan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCAN_H
