/********************************************************************************
** Form generated from reading UI file 'register_interface1.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_INTERFACE1_H
#define UI_REGISTER_INTERFACE1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_register_interface1
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *usernameEdit;
    QLabel *label_2;
    QLineEdit *passwordEdit;
    QLabel *label_3;
    QLineEdit *confirmPwdEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *register_interface1)
    {
        if (register_interface1->objectName().isEmpty())
            register_interface1->setObjectName("register_interface1");
        register_interface1->resize(436, 392);
        register_interface1->setSizeIncrement(QSize(30, 20));
        groupBox = new QGroupBox(register_interface1);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(130, 120, 151, 161));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        usernameEdit = new QLineEdit(groupBox);
        usernameEdit->setObjectName("usernameEdit");

        verticalLayout->addWidget(usernameEdit);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        passwordEdit = new QLineEdit(groupBox);
        passwordEdit->setObjectName("passwordEdit");

        verticalLayout->addWidget(passwordEdit);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        confirmPwdEdit = new QLineEdit(groupBox);
        confirmPwdEdit->setObjectName("confirmPwdEdit");

        verticalLayout->addWidget(confirmPwdEdit);

        pushButton = new QPushButton(register_interface1);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 290, 56, 18));
        pushButton_2 = new QPushButton(register_interface1);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(220, 290, 61, 18));

        retranslateUi(register_interface1);

        QMetaObject::connectSlotsByName(register_interface1);
    } // setupUi

    void retranslateUi(QWidget *register_interface1)
    {
        register_interface1->setWindowTitle(QCoreApplication::translate("register_interface1", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("register_interface1", "\346\263\250\345\206\214", nullptr));
        label->setText(QCoreApplication::translate("register_interface1", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("register_interface1", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("register_interface1", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("register_interface1", "\347\241\256\350\256\244", nullptr));
        pushButton_2->setText(QCoreApplication::translate("register_interface1", "\350\277\224\345\233\236\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class register_interface1: public Ui_register_interface1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_INTERFACE1_H
