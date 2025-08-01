#ifndef GOODS_H
#define GOODS_H

#include <QMainWindow>

namespace Ui {
class goods;
}

class goods : public QMainWindow
{
    Q_OBJECT

public:
    explicit goods(QWidget *parent = nullptr);
    ~goods();

private:
    Ui::goods *ui;
};

#endif // GOODS_H
