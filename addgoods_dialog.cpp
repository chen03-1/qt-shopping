#include "addgoods_dialog.h"
#include "ui_addgoods_dialog.h"
#include <QMessageBox>
#include"databasemanager.h"

addgoods_Dialog::addgoods_Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addgoods_Dialog)
{
    ui->setupUi(this);
    setWindowTitle("添加商品");

    ui->tableWidget->setRowCount(5);
    ui->tableWidget->setEditTriggers(QAbstractItemView::AllEditTriggers);
    ui->tableWidget->resizeColumnsToContents();
    ui->tableWidget->resizeRowsToContents();

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
    //  数据库插入（关键：捕获所有可能的错误）
    try {
        // 获取当前用户ID（从goods页面传递，需确保弹窗能拿到user_id）
        if (m_userId == -1) {
            throw std::runtime_error("用户未登录，无法添加商品");
        }
        // 调用数据库接口
        QString errorMsg;
        bool success = DatabaseManager::getInstance()->addGoods(
            m_userId,       // 关键：用户ID必须正确
            name,
            skc,
            price,
            cost,
            0, 0, 0,        // 其他字段默认值
            stock,
            "",             // 供应商
            errorMsg
            );

        if (!success) {
            throw std::runtime_error(errorMsg.toStdString());
        }

        //  插入成功：关闭弹窗并通知刷新
        QMessageBox::information(this, "成功", "商品添加成功！");
        accept(); // 关闭弹窗（仅这里能调用，避免提前退出）

    } catch (const std::exception& e) {
        // 捕获所有异常，避免程序崩溃
        QMessageBox::critical(this, "错误", QString("添加失败：%1").arg(e.what()));
        // 仅关闭弹窗，不退出程序
        reject();
    }
}

// 取消按钮：直接关闭
void addgoods_Dialog::on_btnCancel_clicked()
{
    reject(); // 关闭弹窗，返回 Rejected
}
