#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QWidget>
#include <QStackedWidget>
#include"register_interface1.h"
#include<QSettings>
#include <QMap>
#include<QString>
namespace Ui {
class loginpage;
}

class loginpage : public QWidget
{
    Q_OBJECT

public:
    explicit loginpage(QWidget *parent = nullptr);
    ~loginpage();

signals:
    void switchToRegister();
    void switchTousepage(int userId);
    void sendUsername(const QString & usename);
private slots:
    void showsuccessUser();//显示用户
    void savesuccessUser(const QString &username,const QString &password);//存储用户和密码
    void onUsernameChanged(int index); // 用户名下拉框变化时触发


private:
    Ui::loginpage *ui;

};

#endif // LOGINPAGE_H
