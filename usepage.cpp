#include "usepage.h"
#include "ui_usepage.h"

usepage::usepage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::usepage)
{
    ui->setupUi(this);
}

usepage::~usepage()
{
    delete ui;
}
