/********************************************************************************
** Form generated from reading UI file 'goods_analyse.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOODS_ANALYSE_H
#define UI_GOODS_ANALYSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>
#include "register_lable.h"

QT_BEGIN_NAMESPACE

class Ui_goods_analyse
{
public:
    QTableWidget *tableWidget;
    QFrame *frame;
    register_lable *exit_label;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QLabel *find_label;

    void setupUi(QWidget *goods_analyse)
    {
        if (goods_analyse->objectName().isEmpty())
            goods_analyse->setObjectName("goods_analyse");
        goods_analyse->resize(526, 451);
        tableWidget = new QTableWidget(goods_analyse);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 40, 351, 381));
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        frame = new QFrame(goods_analyse);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 351, 34));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        exit_label = new register_lable(frame);
        exit_label->setObjectName("exit_label");
        exit_label->setGeometry(QRect(7, 7, 31, 16));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(140, 0, 201, 33));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        horizontalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        find_label = new QLabel(frame_2);
        find_label->setObjectName("find_label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(find_label->sizePolicy().hasHeightForWidth());
        find_label->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(find_label);


        retranslateUi(goods_analyse);

        QMetaObject::connectSlotsByName(goods_analyse);
    } // setupUi

    void retranslateUi(QWidget *goods_analyse)
    {
        goods_analyse->setWindowTitle(QCoreApplication::translate("goods_analyse", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("goods_analyse", "\346\257\233\345\210\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("goods_analyse", "\345\221\250\351\224\200\345\224\256\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("goods_analyse", "\351\224\200\345\224\256\350\266\213\345\212\277", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("goods_analyse", "\350\257\204\347\272\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("goods_analyse", "\346\226\260\345\273\272\350\241\214", nullptr));
        exit_label->setText(QCoreApplication::translate("goods_analyse", " \351\200\200\345\207\272", nullptr));
        find_label->setText(QCoreApplication::translate("goods_analyse", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class goods_analyse: public Ui_goods_analyse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOODS_ANALYSE_H
