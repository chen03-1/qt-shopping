#ifndef USEPAGE_H
#define USEPAGE_H

#include <QWidget>

namespace Ui {
class usepage;
}

class usepage : public QWidget
{
    Q_OBJECT

public:
    explicit usepage(QWidget *parent = nullptr);
    ~usepage();
    void setUserId(int userId);

signals:
    void switchTologinpage();
    void switchTogoodspage();
    void switchToinventory();
    void switchToanalyse();
    void switchToAddGoodsPage(); // 触发“增加商品”弹窗的信号

public slots:
    void printUsername(const QString &username);
private:
    Ui::usepage *ui;
     int m_userId; // 当前登录用户ID
    void loadUserGoods();
};

#endif // USEPAGE_H
