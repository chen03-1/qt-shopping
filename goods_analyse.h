#ifndef GOODS_ANALYSE_H
#define GOODS_ANALYSE_H

#include <QWidget>

namespace Ui {
class goods_analyse;
}

class goods_analyse : public QWidget
{
    Q_OBJECT

signals:
    void switchTousepage();
public:
    explicit goods_analyse(QWidget *parent = nullptr);
    ~goods_analyse();

private:
    Ui::goods_analyse *ui;
};

#endif // GOODS_ANALYSE_H
