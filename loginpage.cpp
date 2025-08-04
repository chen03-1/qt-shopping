#include "loginpage.h"
#include "ui_loginpage.h"
#include"widget.h"
#include"databasemanager.h"
#include<QMessageBox>
#include <QStackedWidget>
#include <QCompleter>
#include <QSettings>
#include <QStringList>
#include<QString>
loginpage::loginpage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::loginpage)
{
    ui->setupUi(this);
    ui->checkBox->setChecked(true);
    //注册页跳转
    connect(ui->label_3,static_cast<void (register_lable::*)()>(&register_lable::clicked),
    this,&loginpage::switchToRegister);

    // 连接用户名下拉框变化信号
    connect(ui->login_username_comboBox, QOverload<int>::of(&QComboBox::currentIndexChanged),
            this, &loginpage::onUsernameChanged);

    //登录键
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
            if(status)
            {
                 savesuccessUser(login_username, login_password);
            }

            else
            {
                ui->login_password_lineEdit->clear();
            }
            emit switchTousepage();
            emit sendUsername(login_username);
        }
        else
        {
            QMessageBox::warning(this, "失败", "用户名或密码错误");
            ui->login_username_comboBox->clear();
            ui->login_password_lineEdit->clear();
        }


    });
    showsuccessUser();

}

loginpage::~loginpage()
{
    delete ui;
}

void loginpage::showsuccessUser()
{
    QSettings settings("QtShoppingApp", "UserLogin");
    QStringList usernames = settings.value("recent_usernames").toStringList();

    ui->login_username_comboBox->clear();
    ui->login_username_comboBox->addItems(usernames);

    // 如果有最近登录的用户，默认选择第一个并显示对应的密码
    if (!usernames.isEmpty()) {
        ui->login_username_comboBox->setCurrentIndex(0);
        onUsernameChanged(0);
    }
}

void loginpage::savesuccessUser(const QString &username, const QString &password)
{
    QSettings settings("QtShoppingApp", "UserLogin");
    QStringList usernames = settings.value("recent_usernames").toStringList();

    // 如果用户名已存在，先移除
    if (usernames.contains(username)) {
        usernames.removeOne(username);
    }

    // 将新用户名添加到列表开头
    usernames.prepend(username);

    // 限制最多显示3个用户名
    if (usernames.size() > 3) {
        usernames = usernames.mid(0, 3);
    }

    // 保存用户名列表
    settings.setValue("recent_usernames", usernames);

    // 保存密码（实际应用中应该加密存储）
    settings.setValue("password_" + username, password);

    // 更新下拉框
    showsuccessUser();
}

void loginpage::onUsernameChanged(int index)
{
    Q_UNUSED(index);
    QString username = ui->login_username_comboBox->currentText();
    if (username.isEmpty()) {
        ui->login_password_lineEdit->clear();
        return;
    }

    QSettings settings("QtShoppingApp", "UserLogin");
    QString password = settings.value("password_" + username).toString();
    ui->login_password_lineEdit->setText(password);
}
