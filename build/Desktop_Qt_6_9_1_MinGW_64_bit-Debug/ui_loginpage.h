/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "register_lable.h"

QT_BEGIN_NAMESPACE

class Ui_loginpage
{
public:
    QFrame *frame;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *login_username_comboBox;
    QLabel *label_2;
    QLineEdit *login_password_lineEdit;
    QCheckBox *checkBox;
    QPushButton *confirm_pushButton;
    register_lable *label_3;

    void setupUi(QWidget *loginpage)
    {
        if (loginpage->objectName().isEmpty())
            loginpage->setObjectName("loginpage");
        loginpage->resize(454, 334);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(loginpage->sizePolicy().hasHeightForWidth());
        loginpage->setSizePolicy(sizePolicy);
        loginpage->setMaximumSize(QSize(454, 337));
        frame = new QFrame(loginpage);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 0, 441, 331));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(120, 70, 203, 181));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(177, 12));

        verticalLayout->addWidget(label);

        login_username_comboBox = new QComboBox(widget);
        login_username_comboBox->setObjectName("login_username_comboBox");
        login_username_comboBox->setEditable(true);

        verticalLayout->addWidget(login_username_comboBox);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        login_password_lineEdit = new QLineEdit(widget);
        login_password_lineEdit->setObjectName("login_password_lineEdit");

        verticalLayout->addWidget(login_password_lineEdit);

        checkBox = new QCheckBox(widget);
        checkBox->setObjectName("checkBox");

        verticalLayout->addWidget(checkBox);


        verticalLayout_2->addWidget(widget);

        confirm_pushButton = new QPushButton(frame);
        confirm_pushButton->setObjectName("confirm_pushButton");
        confirm_pushButton->setGeometry(QRect(130, 260, 56, 18));
        label_3 = new register_lable(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(270, 260, 36, 16));

        retranslateUi(loginpage);

        QMetaObject::connectSlotsByName(loginpage);
    } // setupUi

    void retranslateUi(QWidget *loginpage)
    {
        loginpage->setWindowTitle(QCoreApplication::translate("loginpage", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("loginpage", "\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("loginpage", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("loginpage", "\345\257\206\347\240\201\357\274\232", nullptr));
        checkBox->setText(QCoreApplication::translate("loginpage", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        confirm_pushButton->setText(QCoreApplication::translate("loginpage", "\347\241\256\350\256\244", nullptr));
        label_3->setText(QCoreApplication::translate("loginpage", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginpage: public Ui_loginpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
