#include "register_interface1.h"
#include "ui_register_interface1.h"
#include"databasemanager.h"
#include<QMessageBox>
#include<QString>
register_interface1::register_interface1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::register_interface1)
{
    ui->setupUi(this);

    //初始化数据库界面
    DatabaseManager * dbManager=new DatabaseManager(this);
    if(!dbManager->initDatabase())
    {
        QMessageBox::critical(this,"错误","数据库初始化失败");
    }

    //按钮跳转界面,并读取用户输入
    connect(ui->pushButton_2,&QPushButton::clicked,this,&register_interface1::switchTologin);

    connect(ui->pushButton,&QPushButton::clicked,[=](){
        QString username=ui->usernameEdit->text();
        QString password=ui->passwordEdit->text();
        QString confirmPwd=ui->confirmPwdEdit->text();

        //验证输入
        if (username.isEmpty() || password.isEmpty()) {
            QMessageBox::warning(this, "提示", "用户名或密码不能为空");
            return;
        }
        if (password != confirmPwd) {
            QMessageBox::warning(this, "提示", "两次密码不一致");
            return;
        }
        //完成注册
        QString error;
        if (DatabaseManager::getInstance()->registerUser(username, password, error)) {
            QMessageBox::information(this, "成功", "注册成功！");
            // 清空输入框
            ui->usernameEdit->clear();
            ui->passwordEdit->clear();
            ui->confirmPwdEdit->clear();
            &register_interface1::switchTologin;
        } else {
            QMessageBox::critical(this, "失败", "注册失败：" + error);
        }


    });
  \





}

register_interface1::~register_interface1()
{
    delete ui;
}
