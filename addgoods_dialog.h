#ifndef ADDGOODS_DIALOG_H
#define ADDGOODS_DIALOG_H

#include <QDialog>
#include <QTableWidgetItem> // 表格项头文件
#include<QTableWidget>
namespace Ui {
class addgoods_Dialog;
}

class addgoods_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit addgoods_Dialog(QWidget *parent = nullptr);
    ~addgoods_Dialog();
    //获取商品信息,按列返回
 QList<QStringList> getGoodsData() const;

private slots:
    void on_btnConfirm_clicked(); // 确定按钮
    void on_btnCancel_clicked();  // 取消按钮
private:
    Ui::addgoods_Dialog *ui;


};

#endif // ADDGOODS_DIALOG_H
