#include "addgoods_dialog.h"
#include "ui_addgoods_dialog.h"
#include <QMessageBox>
addgoods_Dialog::addgoods_Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addgoods_Dialog)
{
    ui->setupUi(this);
    setWindowTitle("添加商品");

    ui->tableWidget->setRowCount(1);
    ui->tableWidget->setEditTriggers(QAbstractItemView::AllEditTriggers);
}

addgoods_Dialog::~addgoods_Dialog()
{
    delete ui;
}
//获取用户填写的数据
QList<QStringList>addgoods_Dialog::getGoodsData() const
{
    QList<QStringList> goodsList;
    //统计行列数
    int rowCount = ui->tableWidget->rowCount();
    int colCount = ui->tableWidget->columnCount();
    //读取
    for (int row = 0; row < rowCount; ++row) {
        QStringList rowData;
        for (int col = 0; col < colCount; ++col) {
            QTableWidgetItem *item = ui->tableWidget->item(row, col);
            if (item) {
                rowData << item->text();
            } else {
                rowData << ""; // 空单元格处理
            }
        }
        goodsList << rowData;
    }
    return goodsList;
}
void addgoods_Dialog::on_btnConfirm_clicked()
{
    // 简单校验
    QTableWidgetItem *nameItem = ui->tableWidget->item(1, 1); // 第 1 列是名称
    QTableWidgetItem *skcItem= ui->tableWidget->item(1, 2);
    QTableWidgetItem *costItem= ui->tableWidget->item(1, 3);
    QTableWidgetItem *priceItem= ui->tableWidget->item(1, 4);
    QTableWidgetItem *providerItem= ui->tableWidget->item(1, 5);
    if (nameItem->text().trimmed().isEmpty()
        ||skcItem->text().trimmed().isEmpty()
        ||costItem->text().trimmed().isEmpty()
        ||priceItem->text().trimmed().isEmpty()
        ||providerItem->text().trimmed().isEmpty()
        ) {
        QMessageBox::warning(this, "错误", "商品属性不能为空！");
        return;
    }
    accept(); // 关闭弹窗，返回 Accepted
}

// 取消按钮：直接关闭
void addgoods_Dialog::on_btnCancel_clicked()
{
    reject(); // 关闭弹窗，返回 Rejected
}
