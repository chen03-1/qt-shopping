#ifndef GOODS_H
#define GOODS_H

#include <QMainWindow>

namespace Ui {
class goods;
}

class goods : public QMainWindow
{
    Q_OBJECT

signals:
    void switchTousepage();
public:
    explicit goods(QWidget *parent = nullptr);
    ~goods();

private:
    Ui::goods *ui;
};

#endif // GOODS_H
