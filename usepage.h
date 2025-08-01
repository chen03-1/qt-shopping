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

signals:
    void switchTologinpage();
    void switchTogoodspage();
    void switchToinventory();
    void switchToanalyse();

private:
    Ui::usepage *ui;
};

#endif // USEPAGE_H
