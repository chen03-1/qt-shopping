#include "goods.h"
#include "ui_goods.h"
#include<QAction>
#include<QDebug>
goods::goods(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::goods)
{
    ui->setupUi(this);
    connect(ui->exit_menu,&QMenu::triggered,[=](QAction* action){
        emit switchTousepage();
    });

}

goods::~goods()
{
    delete ui;
}
