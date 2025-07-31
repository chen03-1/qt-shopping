#include "loginpage.h"
#include "ui_loginpage.h"
#include<QString>
#include"databasemanager.h"
#include<QMessageBox>
#include <QStackedWidget>
#include"widget.h"
#include <QVBoxLayout>
loginpage::loginpage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::loginpage)
{
    ui->setupUi(this);
    connect(ui->label_3,static_cast<void (register_lable::*)()>(&register_lable::clicked),
    this,&loginpage::switchToRegister);

    connect(ui->confirm_pushButton,&QPushButton::clicked,[=](){
        QString login_username=ui->login_username_comboBox->currentText();
        QString login_password=ui->login_password_lineEdit->text();

        if(login_username.isEmpty()||login_password.isEmpty())
        {
            QMessageBox::warning(this, "提示", "用户名或密码不能为空");
        }
        QString error;
        if(DatabaseManager::getInstance()->loginUser(login_username,login_password,error))
        {
            QMessageBox::information(this, "成功", "登录成功！");
            bool status = ui->checkBox->isChecked();
            if(!status)
            {
                ui->login_username_comboBox->clear();
                ui->login_password_lineEdit->clear();
            }
            emit switchTousepage();
        }
        else
        {
            QMessageBox::warning(this, "失败", "用户名或密码错误");
            ui->login_username_comboBox->clear();
            ui->login_password_lineEdit->clear();
        }


    });

}

loginpage::~loginpage()
{
    delete ui;
}
