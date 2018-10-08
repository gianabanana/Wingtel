/********************************************************************************
** Form generated from reading UI file 'scanid.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCANID_H
#define UI_SCANID_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_scanID
{
public:

    void setupUi(QWidget *scanID)
    {
        if (scanID->objectName().isEmpty())
            scanID->setObjectName(QStringLiteral("scanID"));
        scanID->resize(400, 300);

        retranslateUi(scanID);

        QMetaObject::connectSlotsByName(scanID);
    } // setupUi

    void retranslateUi(QWidget *scanID)
    {
        scanID->setWindowTitle(QApplication::translate("scanID", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class scanID: public Ui_scanID {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCANID_H
