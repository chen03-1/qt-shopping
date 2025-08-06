#ifndef GOODS_H
#define GOODS_H

#include <QMainWindow>
#include <QList>
#include <QTableWidgetItem>
#include "addgoods_dialog.h"
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
    //加载数据，刷新表格
    void refreshGoodsTable();

private slots:
    // 接收添加商品完成的信号，刷新表格
    void onGoodsAdded(const QList<QStringList> &newGoods);

private:
    Ui::goods *ui;
};

#endif // GOODS_H
