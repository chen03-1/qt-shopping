/********************************************************************************
** Form generated from reading UI file 'inventory.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVENTORY_H
#define UI_INVENTORY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inventory
{
public:
    QAction *actionexit;
    QAction *actionexit_2;
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *exit_menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *inventory)
    {
        if (inventory->objectName().isEmpty())
            inventory->setObjectName("inventory");
        inventory->resize(800, 600);
        actionexit = new QAction(inventory);
        actionexit->setObjectName("actionexit");
        actionexit_2 = new QAction(inventory);
        actionexit_2->setObjectName("actionexit_2");
        centralwidget = new QWidget(inventory);
        centralwidget->setObjectName("centralwidget");
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 0, 261, 351));
        inventory->setCentralWidget(centralwidget);
        menubar = new QMenuBar(inventory);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        exit_menu = new QMenu(menubar);
        exit_menu->setObjectName("exit_menu");
        inventory->setMenuBar(menubar);
        statusbar = new QStatusBar(inventory);
        statusbar->setObjectName("statusbar");
        inventory->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(exit_menu->menuAction());
        menu->addAction(actionexit);
        exit_menu->addAction(actionexit_2);

        retranslateUi(inventory);

        QMetaObject::connectSlotsByName(inventory);
    } // setupUi

    void retranslateUi(QMainWindow *inventory)
    {
        inventory->setWindowTitle(QCoreApplication::translate("inventory", "MainWindow", nullptr));
        actionexit->setText(QCoreApplication::translate("inventory", "\346\233\264\346\224\271\345\272\223\345\255\230", nullptr));
        actionexit->setIconText(QCoreApplication::translate("inventory", "\346\233\264\346\224\271\345\272\223\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        actionexit->setToolTip(QCoreApplication::translate("inventory", "\346\233\264\346\224\271\345\272\223\345\255\230", nullptr));
#endif // QT_CONFIG(tooltip)
        actionexit_2->setText(QCoreApplication::translate("inventory", "\351\200\200\345\207\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("inventory", "\345\272\223\345\255\230", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("inventory", "\345\221\250\345\206\205\345\271\263\345\235\207\351\224\200\345\224\256\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("inventory", "\345\224\256\345\215\226\347\255\211\347\272\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("inventory", "\346\226\260\345\273\272\350\241\214", nullptr));
        menu->setTitle(QCoreApplication::translate("inventory", "\347\274\226\350\276\221", nullptr));
        exit_menu->setTitle(QCoreApplication::translate("inventory", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inventory: public Ui_inventory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTORY_H
