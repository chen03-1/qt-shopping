#ifndef GOODS_H
#define GOODS_H

#include <QMainWindow>
#include <QList>
#include <QTableWidgetItem>
#include "addgoods_dialog.h"
#include"databasemanager.h"
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
    //显示弹窗
    void showAddGoodsDialog();

    //设置当前用户id（区分用户的数据）
    void setUserId(int userId) { m_userId = userId; }
    //加载数据，刷新表格
    void refreshGoodsTable();
private slots:
    // 接收添加商品完成的信号，刷新表格
    void onGoodsAdded(const QList<QStringList> &newGoods);

private:
    Ui::goods *ui;
    int m_userId; // 存储当前登录用户ID

};

#endif // GOODS_H
