#include "inventory.h"
#include "ui_inventory.h"

inventory::inventory(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::inventory)
{
    ui->setupUi(this);
    connect(ui->exit_menu,&QMenu::triggered,[=](QAction* action){
        emit switchTousepage();
    });
}

inventory::~inventory()
{
    delete ui;
}
