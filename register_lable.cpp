#include "register_lable.h"
#include<QCursor>
#include<QMouseEvent>

register_lable::register_lable(QWidget *parent)
    : QLabel{parent}
{}
void register_lable::mousePressEvent(QMouseEvent *event)
{
    //只检测鼠标左键
    if(event->button()==Qt::LeftButton)
    {
        //发射点击信号，方便实现跳转
        emit clicked();
    }
    QLabel::mousePressEvent(event);
}
