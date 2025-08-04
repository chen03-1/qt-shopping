#include "widget.h"
#include "ui_widget.h"
#include"register_lable.h"
#include<QDebug>
#include <QVBoxLayout>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //创建堆叠窗口
    stackedWidget=new QStackedWidget(this);
    // widget.cpp 构造函数里，创建 stackedWidget 后添加
    QVBoxLayout * mainLayout = new QVBoxLayout(this);
    mainLayout->addWidget(stackedWidget);
    setLayout(mainLayout);

    //创建页面实例
    r1=new register_interface1();
    login_page=new loginpage();
    use_page=new usepage();
    goods_page=new goods();
    analyse_page=new goods_analyse();
    inventory_page=new inventory();

    //页面添加堆叠窗口
    stackedWidget->addWidget(login_page);
    stackedWidget->addWidget(r1);
    stackedWidget->addWidget(use_page);
    stackedWidget->addWidget(goods_page);
    stackedWidget->addWidget(analyse_page);
    stackedWidget->addWidget(inventory_page);


    //标签跳转到注册页
    connect(login_page, &loginpage::switchToRegister,
            [=](){
                stackedWidget->setCurrentIndex(1);  // 切换到注册页
            });
    //按钮跳转到登录页
    connect(r1,&register_interface1::switchTologin,
            [=](){
                stackedWidget->setCurrentIndex(0);
    });
    connect(login_page,&loginpage::switchTousepage,
            [=](){
                stackedWidget->setCurrentIndex(2);
    });
    connect(use_page,&usepage::switchTologinpage,
            [=](){
            stackedWidget->setCurrentIndex(0);
    });
    //跳转到各功能页
    connect(use_page,&usepage::switchTogoodspage,
            [=](){
                stackedWidget->setCurrentIndex(3);
            });
    connect(use_page,&usepage::switchToanalyse,
            [=](){
                stackedWidget->setCurrentIndex(4);
            });
    connect(use_page,&usepage::switchToinventory,
            [=](){
                stackedWidget->setCurrentIndex(5);
            });
    //功能页跳转至用户页
    connect(goods_page,&goods::switchTousepage,
            [=](){
                stackedWidget->setCurrentIndex(2);
    });
    connect(analyse_page,&goods_analyse::switchTousepage,
            [=](){
                stackedWidget->setCurrentIndex(2);
     });
    connect(inventory_page,&inventory::switchTousepage,
            [=](){
                stackedWidget->setCurrentIndex(2);
    });


}

Widget::~Widget()
{
    delete ui;
}

