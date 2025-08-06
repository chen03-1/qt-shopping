/********************************************************************************
** Form generated from reading UI file 'addgoods_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDGOODS_DIALOG_H
#define UI_ADDGOODS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_addgoods_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QTableWidget *tableWidget;

    void setupUi(QDialog *addgoods_Dialog)
    {
        if (addgoods_Dialog->objectName().isEmpty())
            addgoods_Dialog->setObjectName("addgoods_Dialog");
        addgoods_Dialog->resize(448, 359);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addgoods_Dialog->sizePolicy().hasHeightForWidth());
        addgoods_Dialog->setSizePolicy(sizePolicy);
        buttonBox = new QDialogButtonBox(addgoods_Dialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(250, 10, 141, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        tableWidget = new QTableWidget(addgoods_Dialog);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (tableWidget->rowCount() < 5)
            tableWidget->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem5);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 0, 171, 291));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy1);
        tableWidget->setMinimumSize(QSize(0, 291));

        retranslateUi(addgoods_Dialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, addgoods_Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, addgoods_Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(addgoods_Dialog);
    } // setupUi

    void retranslateUi(QDialog *addgoods_Dialog)
    {
        addgoods_Dialog->setWindowTitle(QCoreApplication::translate("addgoods_Dialog", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("addgoods_Dialog", "\345\225\206\345\223\201\345\261\236\346\200\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("addgoods_Dialog", "\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("addgoods_Dialog", "skc", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("addgoods_Dialog", "\346\210\220\346\234\254", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("addgoods_Dialog", "\345\256\232\344\273\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("addgoods_Dialog", "\344\276\233\345\272\224\345\225\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addgoods_Dialog: public Ui_addgoods_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDGOODS_DIALOG_H
