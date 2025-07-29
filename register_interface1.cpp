#include "register_interface1.h"
#include "ui_register_interface1.h"

register_interface1::register_interface1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::register_interface1)
{
    ui->setupUi(this);
    connect(ui->pushButton_2,&QPushButton::clicked,this,&register_interface1::switchTologin);
}

register_interface1::~register_interface1()
{
    delete ui;
}
