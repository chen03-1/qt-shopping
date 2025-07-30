/********************************************************************************
** Form generated from reading UI file 'usepage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USEPAGE_H
#define UI_USEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_usepage
{
public:
    QFrame *frame;
    QFrame *frame_2;
    QLabel *label_2;
    QLCDNumber *sellgoods_number_lcdNumber;
    QFrame *frame_3;
    QLabel *label_3;
    QLCDNumber *sell_num_lcdNumber;
    QFrame *frame_4;
    QLabel *label_4;
    QLCDNumber *money_lcdNumber;
    QFrame *frame_5;
    QLabel *label_5;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_9;
    QLabel *label_7;
    QLabel *bestgoods_sellnumber_label;
    QFrame *frame_11;
    QLabel *label_10;
    QLabel *bestgoods_money_label;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLabel *bestgoods_name_label;
    QFrame *frame_8;
    QGroupBox *groupBox;
    QToolBox *analyse_page;
    QWidget *goods_page;
    QLabel *add_goods_label;
    QLabel *del_goods_label;
    QLabel *change_goods_label;
    QWidget *inventory_page;
    QLabel *view_inventory_label;
    QLabel *edit_inventory_label;
    QLabel *report_inventory_label;
    QWidget *analyse_page_2;
    QLabel *profit_label;
    QLabel *ranking_label;
    QLabel *unsalabel_label;
    QWidget *data_page;
    QLabel *datain_label;
    QLabel *dataout_label;
    QFrame *frame_10;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *printuser_label;
    QSpacerItem *horizontalSpacer;
    QLabel *label;

    void setupUi(QWidget *usepage)
    {
        if (usepage->objectName().isEmpty())
            usepage->setObjectName("usepage");
        usepage->resize(591, 424);
        frame = new QFrame(usepage);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(120, 50, 421, 361));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(9);
        font.setBold(false);
        frame->setFont(font);
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(10, 10, 120, 80));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 10, 91, 16));
        sellgoods_number_lcdNumber = new QLCDNumber(frame_2);
        sellgoods_number_lcdNumber->setObjectName("sellgoods_number_lcdNumber");
        sellgoods_number_lcdNumber->setGeometry(QRect(20, 40, 64, 23));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(140, 10, 120, 80));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        label_3 = new QLabel(frame_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 10, 91, 21));
        sell_num_lcdNumber = new QLCDNumber(frame_3);
        sell_num_lcdNumber->setObjectName("sell_num_lcdNumber");
        sell_num_lcdNumber->setGeometry(QRect(30, 40, 64, 23));
        frame_4 = new QFrame(frame);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(280, 10, 120, 80));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        label_4 = new QLabel(frame_4);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 10, 91, 21));
        money_lcdNumber = new QLCDNumber(frame_4);
        money_lcdNumber->setObjectName("money_lcdNumber");
        money_lcdNumber->setGeometry(QRect(30, 40, 64, 23));
        frame_5 = new QFrame(frame);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(0, 120, 221, 231));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        label_5 = new QLabel(frame_5);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 10, 131, 41));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        label_5->setFont(font1);
        frame_6 = new QFrame(frame_5);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(10, 120, 201, 71));
        frame_6->setFrameShape(QFrame::Shape::StyledPanel);
        frame_6->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        frame_9 = new QFrame(frame_6);
        frame_9->setObjectName("frame_9");
        frame_9->setFrameShape(QFrame::Shape::StyledPanel);
        frame_9->setFrameShadow(QFrame::Shadow::Raised);
        label_7 = new QLabel(frame_9);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(7, 7, 36, 16));
        label_7->setFont(font);
        bestgoods_sellnumber_label = new QLabel(frame_9);
        bestgoods_sellnumber_label->setObjectName("bestgoods_sellnumber_label");
        bestgoods_sellnumber_label->setGeometry(QRect(47, 7, 101, 16));

        verticalLayout_2->addWidget(frame_9);

        frame_11 = new QFrame(frame_6);
        frame_11->setObjectName("frame_11");
        frame_11->setFrameShape(QFrame::Shape::StyledPanel);
        frame_11->setFrameShadow(QFrame::Shadow::Raised);
        label_10 = new QLabel(frame_11);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(7, 7, 36, 16));
        label_10->setFont(font);
        bestgoods_money_label = new QLabel(frame_11);
        bestgoods_money_label->setObjectName("bestgoods_money_label");
        bestgoods_money_label->setGeometry(QRect(47, 7, 101, 16));

        verticalLayout_2->addWidget(frame_11);

        frame_7 = new QFrame(frame_5);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(10, 60, 201, 51));
        frame_7->setFrameShape(QFrame::Shape::StyledPanel);
        frame_7->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frame_7);
        verticalLayout->setObjectName("verticalLayout");
        label_6 = new QLabel(frame_7);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        bestgoods_name_label = new QLabel(frame_7);
        bestgoods_name_label->setObjectName("bestgoods_name_label");
        bestgoods_name_label->setFont(font);

        verticalLayout->addWidget(bestgoods_name_label);

        frame_8 = new QFrame(usepage);
        frame_8->setObjectName("frame_8");
        frame_8->setGeometry(QRect(0, 50, 111, 371));
        frame_8->setFrameShape(QFrame::Shape::StyledPanel);
        frame_8->setFrameShadow(QFrame::Shadow::Raised);
        groupBox = new QGroupBox(frame_8);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 10, 101, 371));
        groupBox->setMinimumSize(QSize(101, 371));
        groupBox->setMaximumSize(QSize(101, 371));
        analyse_page = new QToolBox(groupBox);
        analyse_page->setObjectName("analyse_page");
        analyse_page->setGeometry(QRect(10, 20, 81, 341));
        analyse_page->setFrameShape(QFrame::Shape::StyledPanel);
        goods_page = new QWidget();
        goods_page->setObjectName("goods_page");
        goods_page->setGeometry(QRect(0, 0, 79, 243));
        add_goods_label = new QLabel(goods_page);
        add_goods_label->setObjectName("add_goods_label");
        add_goods_label->setGeometry(QRect(20, 0, 40, 12));
        del_goods_label = new QLabel(goods_page);
        del_goods_label->setObjectName("del_goods_label");
        del_goods_label->setGeometry(QRect(20, 20, 40, 12));
        change_goods_label = new QLabel(goods_page);
        change_goods_label->setObjectName("change_goods_label");
        change_goods_label->setGeometry(QRect(10, 30, 61, 31));
        analyse_page->addItem(goods_page, QString::fromUtf8("\347\256\241\347\220\206\345\225\206\345\223\201\344\277\241\346\201\257"));
        inventory_page = new QWidget();
        inventory_page->setObjectName("inventory_page");
        inventory_page->setGeometry(QRect(0, 0, 79, 243));
        view_inventory_label = new QLabel(inventory_page);
        view_inventory_label->setObjectName("view_inventory_label");
        view_inventory_label->setGeometry(QRect(20, 0, 40, 12));
        edit_inventory_label = new QLabel(inventory_page);
        edit_inventory_label->setObjectName("edit_inventory_label");
        edit_inventory_label->setGeometry(QRect(20, 20, 40, 12));
        report_inventory_label = new QLabel(inventory_page);
        report_inventory_label->setObjectName("report_inventory_label");
        report_inventory_label->setGeometry(QRect(20, 40, 40, 12));
        analyse_page->addItem(inventory_page, QString::fromUtf8("\345\272\223\345\255\230\347\256\241\347\220\206"));
        analyse_page_2 = new QWidget();
        analyse_page_2->setObjectName("analyse_page_2");
        profit_label = new QLabel(analyse_page_2);
        profit_label->setObjectName("profit_label");
        profit_label->setGeometry(QRect(19, 0, 51, 20));
        ranking_label = new QLabel(analyse_page_2);
        ranking_label->setObjectName("ranking_label");
        ranking_label->setGeometry(QRect(9, 20, 61, 20));
        unsalabel_label = new QLabel(analyse_page_2);
        unsalabel_label->setObjectName("unsalabel_label");
        unsalabel_label->setGeometry(QRect(20, 40, 40, 12));
        analyse_page->addItem(analyse_page_2, QString::fromUtf8("\345\225\206\345\223\201\345\210\206\346\236\220"));
        data_page = new QWidget();
        data_page->setObjectName("data_page");
        datain_label = new QLabel(data_page);
        datain_label->setObjectName("datain_label");
        datain_label->setGeometry(QRect(20, 0, 40, 12));
        dataout_label = new QLabel(data_page);
        dataout_label->setObjectName("dataout_label");
        dataout_label->setGeometry(QRect(20, 20, 40, 12));
        analyse_page->addItem(data_page, QString::fromUtf8("\346\225\260\346\215\256"));
        frame_10 = new QFrame(usepage);
        frame_10->setObjectName("frame_10");
        frame_10->setGeometry(QRect(0, 0, 541, 51));
        frame_10->setFrameShape(QFrame::Shape::StyledPanel);
        frame_10->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_10);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(348, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        groupBox_2 = new QGroupBox(frame_10);
        groupBox_2->setObjectName("groupBox_2");
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        printuser_label = new QLabel(groupBox_2);
        printuser_label->setObjectName("printuser_label");

        horizontalLayout->addWidget(printuser_label);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);


        horizontalLayout_3->addWidget(groupBox_2);


        retranslateUi(usepage);

        analyse_page->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(usepage);
    } // setupUi

    void retranslateUi(QWidget *usepage)
    {
        usepage->setWindowTitle(QCoreApplication::translate("usepage", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("usepage", "\345\234\250\345\224\256\345\225\206\345\223\201\346\225\260", nullptr));
        label_3->setText(QCoreApplication::translate("usepage", "\344\273\212\346\227\245\351\224\200\345\224\256\351\207\217", nullptr));
        label_4->setText(QCoreApplication::translate("usepage", "\344\273\212\346\227\245\351\224\200\345\224\256\351\242\235", nullptr));
        label_5->setText(QCoreApplication::translate("usepage", "\344\273\212\346\227\245\351\224\200\345\224\256\346\234\200\344\275\263\345\225\206\345\223\201", nullptr));
        label_7->setText(QCoreApplication::translate("usepage", "\351\224\200\345\224\256\351\207\217\357\274\232", nullptr));
        bestgoods_sellnumber_label->setText(QCoreApplication::translate("usepage", "TextLabel", nullptr));
        label_10->setText(QCoreApplication::translate("usepage", "\351\224\200\345\224\256\351\242\235\357\274\232", nullptr));
        bestgoods_money_label->setText(QCoreApplication::translate("usepage", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("usepage", "\345\225\206\345\223\201\345\220\215\347\247\260\357\274\232", nullptr));
        bestgoods_name_label->setText(QCoreApplication::translate("usepage", "TextLabel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("usepage", "\345\267\245\345\205\267\346\240\217", nullptr));
        add_goods_label->setText(QCoreApplication::translate("usepage", "\346\267\273\345\212\240\345\225\206\345\223\201", nullptr));
        del_goods_label->setText(QCoreApplication::translate("usepage", "\345\210\240\351\231\244\345\225\206\345\223\201", nullptr));
        change_goods_label->setText(QCoreApplication::translate("usepage", "\346\233\264\346\224\271\345\225\206\345\223\201\344\277\241\346\201\257", nullptr));
        analyse_page->setItemText(analyse_page->indexOf(goods_page), QCoreApplication::translate("usepage", "\347\256\241\347\220\206\345\225\206\345\223\201\344\277\241\346\201\257", nullptr));
        view_inventory_label->setText(QCoreApplication::translate("usepage", "\346\237\245\347\234\213\345\272\223\345\255\230", nullptr));
        edit_inventory_label->setText(QCoreApplication::translate("usepage", "\347\274\226\350\276\221\345\272\223\345\255\230", nullptr));
        report_inventory_label->setText(QCoreApplication::translate("usepage", "\345\272\223\345\255\230\346\212\245\345\221\212", nullptr));
        analyse_page->setItemText(analyse_page->indexOf(inventory_page), QCoreApplication::translate("usepage", "\345\272\223\345\255\230\347\256\241\347\220\206", nullptr));
        profit_label->setText(QCoreApplication::translate("usepage", "\345\225\206\345\223\201\346\257\233\345\210\251", nullptr));
        ranking_label->setText(QCoreApplication::translate("usepage", "\351\224\200\345\224\256\346\216\222\345\220\215\357\274\210\345\221\250\357\274\211", nullptr));
        unsalabel_label->setText(QCoreApplication::translate("usepage", "\346\273\236\351\224\200\345\225\206\345\223\201", nullptr));
        analyse_page->setItemText(analyse_page->indexOf(analyse_page_2), QCoreApplication::translate("usepage", "\345\225\206\345\223\201\345\210\206\346\236\220", nullptr));
        datain_label->setText(QCoreApplication::translate("usepage", "\346\225\260\346\215\256\345\257\274\345\205\245", nullptr));
        dataout_label->setText(QCoreApplication::translate("usepage", "\346\225\260\346\215\256\345\257\274\345\207\272", nullptr));
        analyse_page->setItemText(analyse_page->indexOf(data_page), QCoreApplication::translate("usepage", "\346\225\260\346\215\256", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("usepage", "GroupBox", nullptr));
        printuser_label->setText(QCoreApplication::translate("usepage", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("usepage", "\347\231\273\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class usepage: public Ui_usepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USEPAGE_H
