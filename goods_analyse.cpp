#include "goods_analyse.h"
#include "ui_goods_analyse.h"

goods_analyse::goods_analyse(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::goods_analyse)
{
    ui->setupUi(this);
}

goods_analyse::~goods_analyse()
{
    delete ui;
}
