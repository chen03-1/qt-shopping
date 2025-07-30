#include "loginpage.h"
#include "ui_loginpage.h"

loginpage::loginpage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::loginpage)
{
    ui->setupUi(this);
    connect(ui->label_3,static_cast<void (register_lable::*)()>(&register_lable::clicked),
    this,&loginpage::switchToRegister);

}

loginpage::~loginpage()
{
    delete ui;
}
