#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QWidget>
#include <QStackedWidget>
#include"register_interface1.h"
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
    void switchTousepage();

private:
    Ui::loginpage *ui;
};

#endif // LOGINPAGE_H
