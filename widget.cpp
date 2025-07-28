#include "widget.h"
#include "ui_widget.h"
#include"register_lable.h"
#include<QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //创建堆叠窗口
    stackedWidget=new QStackedWidget(this);
    // widget.cpp 构造函数里，创建 stackedWidget 后添加
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addWidget(stackedWidget);
    setLayout(mainLayout);
    //创建页面实例
    register_interface1 * r1=new register_interface1();
    Widget * w=new Widget();
    //页面添加堆叠窗口
    stackedWidget->addWidget(r1);
    stackedWidget->addWidget(w);
    connect(ui->label_3,static_cast<void (register_lable::*)()>(&register_lable::clicked),
            [=](){
       stackedWidget->setCurrentWidget(r1);

    });
    qDebug() << "Widget constructed";
}

Widget::~Widget()
{
    delete ui;
}

