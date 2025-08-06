/********************************************************************************
** Form generated from reading UI file 'goods.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOODS_H
#define UI_GOODS_H

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

class Ui_goods
{
public:
    QAction *actionnew;
    QAction *actiondele;
    QAction *actiontime;
    QAction *sellaction;
    QAction *money_actions;
    QAction *inactions;
    QAction *out_actions;
    QAction *action;
    QAction *actionexit;
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QStatusBar *statusbar;
    QMenuBar *menuBar;
    QMenu *menumenu;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *exit_menu;

    void setupUi(QMainWindow *goods)
    {
        if (goods->objectName().isEmpty())
            goods->setObjectName("goods");
        goods->resize(1077, 670);
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(goods->sizePolicy().hasHeightForWidth());
        goods->setSizePolicy(sizePolicy);
        goods->setMinimumSize(QSize(1014, 0));
        actionnew = new QAction(goods);
        actionnew->setObjectName("actionnew");
        actiondele = new QAction(goods);
        actiondele->setObjectName("actiondele");
        actiontime = new QAction(goods);
        actiontime->setObjectName("actiontime");
        sellaction = new QAction(goods);
        sellaction->setObjectName("sellaction");
        money_actions = new QAction(goods);
        money_actions->setObjectName("money_actions");
        inactions = new QAction(goods);
        inactions->setObjectName("inactions");
        out_actions = new QAction(goods);
        out_actions->setObjectName("out_actions");
        action = new QAction(goods);
        action->setObjectName("action");
        action->setEnabled(true);
        actionexit = new QAction(goods);
        actionexit->setObjectName("actionexit");
        centralwidget = new QWidget(goods);
        centralwidget->setObjectName("centralwidget");
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 14)
            tableWidget->setColumnCount(14);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(13, __qtablewidgetitem13);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem14);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 0, 1011, 221));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy1);
        tableWidget->setMaximumSize(QSize(1011, 16777215));
        goods->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(goods);
        statusbar->setObjectName("statusbar");
        statusbar->setSizeGripEnabled(true);
        goods->setStatusBar(statusbar);
        menuBar = new QMenuBar(goods);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1077, 18));
        menumenu = new QMenu(menuBar);
        menumenu->setObjectName("menumenu");
        menu = new QMenu(menuBar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName("menu_2");
        exit_menu = new QMenu(menuBar);
        exit_menu->setObjectName("exit_menu");
        goods->setMenuBar(menuBar);

        menuBar->addAction(menumenu->menuAction());
        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(exit_menu->menuAction());
        menumenu->addAction(actionnew);
        menumenu->addAction(actiondele);
        menu->addAction(actiontime);
        menu->addAction(sellaction);
        menu->addAction(money_actions);
        menu_2->addAction(inactions);
        menu_2->addAction(out_actions);
        exit_menu->addAction(actionexit);

        retranslateUi(goods);

        QMetaObject::connectSlotsByName(goods);
    } // setupUi

    void retranslateUi(QMainWindow *goods)
    {
        goods->setWindowTitle(QCoreApplication::translate("goods", "MainWindow", nullptr));
        actionnew->setText(QCoreApplication::translate("goods", "\346\226\260\345\273\272", nullptr));
        actiondele->setText(QCoreApplication::translate("goods", "\345\210\240\351\231\244", nullptr));
        actiontime->setText(QCoreApplication::translate("goods", "\346\227\266\351\227\264", nullptr));
        sellaction->setText(QCoreApplication::translate("goods", "\345\271\263\345\235\207\351\224\200\345\224\256\351\207\217", nullptr));
        money_actions->setText(QCoreApplication::translate("goods", "\351\224\200\345\224\256\346\200\273\351\242\235", nullptr));
        inactions->setText(QCoreApplication::translate("goods", "\345\257\274\345\205\245", nullptr));
        out_actions->setText(QCoreApplication::translate("goods", "\345\257\274\345\207\272", nullptr));
        action->setText(QCoreApplication::translate("goods", "user", nullptr));
        actionexit->setText(QCoreApplication::translate("goods", "\351\200\200\345\207\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("goods", "skc", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("goods", "\345\225\206\345\223\201\346\210\220\346\234\254", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("goods", "\345\225\206\345\223\201\345\256\232\344\273\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("goods", "\350\277\220\350\264\271", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("goods", "\345\225\206\345\223\201\346\257\233\345\210\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("goods", "\346\257\233\345\210\251\347\216\207", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("goods", "\344\273\212\346\227\245\351\224\200\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("goods", "\344\273\212\346\227\245\351\224\200\345\224\256\351\242\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("goods", "\345\221\250\351\224\200\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("goods", "\345\221\250\351\224\200\345\224\256\351\242\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("goods", "\351\224\200\345\224\256\346\200\273\351\242\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("goods", "\345\271\263\345\235\207\345\221\250\351\224\200\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("goods", "\345\272\223\345\255\230", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->horizontalHeaderItem(13);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("goods", "\344\276\233\345\272\224\345\225\206", nullptr));
        menumenu->setTitle(QCoreApplication::translate("goods", "\347\274\226\350\276\221", nullptr));
        menu->setTitle(QCoreApplication::translate("goods", "\346\216\222\345\272\217", nullptr));
        menu_2->setTitle(QCoreApplication::translate("goods", "\346\225\260\346\215\256", nullptr));
        exit_menu->setTitle(QCoreApplication::translate("goods", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class goods: public Ui_goods {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOODS_H
