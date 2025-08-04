#include "usepage.h"
#include "ui_usepage.h"
#include"register_lable.h"

usepage::usepage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::usepage)
{
    ui->setupUi(this);
    //登出标签跳转
    connect(ui->exit_label,static_cast<void (register_lable::*)()>(&register_lable::clicked),
            this,&usepage::switchTologinpage);

    //商品管理页跳转
    connect(ui->add_goods_label,static_cast<void (register_lable::*)()>(&register_lable::clicked),
            this,&usepage::switchTogoodspage);
    connect(ui->del_goods_label,static_cast<void (register_lable::*)()>(&register_lable::clicked),
            this,&usepage::switchTogoodspage);
    connect(ui->change_goods_label, static_cast<void (register_lable::*)()>(&register_lable::clicked),
            this,&usepage::switchTogoodspage);

    //库存页跳转
    connect(ui->edit_inventory_label,static_cast<void (register_lable::*)()>(&register_lable::clicked),
            this,&usepage::switchToinventory);
    connect(ui->report_inventory_label,static_cast<void (register_lable::*)()>(&register_lable::clicked),
            this,&usepage::switchToinventory);
    connect(ui->view_inventory_label,static_cast<void (register_lable::*)()>(&register_lable::clicked),
            this,&usepage::switchToinventory);

    //分析页跳转
    connect(ui->profit_label,static_cast<void (register_lable::*)()>(&register_lable::clicked),
            this,&usepage::switchToanalyse);
    connect(ui->ranking_label,static_cast<void (register_lable::*)()>(&register_lable::clicked),
            this,&usepage::switchToanalyse);
    connect(ui->unsalabel_label,static_cast<void (register_lable::*)()>(&register_lable::clicked),
            this,&usepage::switchToanalyse);

    connect(this,&usepage::printUsername,this,[=](const QString &username){
        ui->printuser_label->setText(username);
    });
}

usepage::~usepage()
{
    delete ui;
}
void usepage::printUsername(const QString &username) {
    ui->printuser_label->setText(username); // 填充标签
}
