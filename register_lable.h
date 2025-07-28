#ifndef REGISTER_LABLE_H
#define REGISTER_LABLE_H

#include <QLabel>

class register_lable : public QLabel
{
    Q_OBJECT
public:
    explicit register_lable(QWidget *parent = nullptr);


signals:
    void clicked();
    // 带参数的信号（例如传递跳转目标）
    void clicked(QWidget* targetPage);

protected:
    void mousePressEvent(QMouseEvent *event);

private:

};

#endif // REGISTER_LABLE_H
