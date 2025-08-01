#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QStackedWidget>
#include"register_interface1.h"
#include"loginpage.h"
#include"usepage.h"
#include"goods.h"
#include"goods_analyse.h"
#include"inventory.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    // 声明堆叠窗口指针（用于管理页面）
    QStackedWidget *stackedWidget;
    //注册页面指针
    register_interface1 * r1;//注册
    loginpage * login_page;//登录
    usepage * use_page;//用户
    goods * goods_page;
    goods_analyse * analyse_page;
    inventory * inventory_page;

};
#endif // WIDGET_H
