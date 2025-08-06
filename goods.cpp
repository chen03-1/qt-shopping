#include "goods.h"
#include "ui_goods.h"
#include<QAction>
#include<QDebug>
#include <QMessageBox>
#include <QSqlQuery>
goods::goods(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::goods)
    ,m_userId(-1)
{
    ui->setupUi(this);
    connect(ui->exit_menu,&QMenu::triggered,[=](QAction* action){
        emit switchTousepage();
    });
    // 关联"新增"菜单按钮（如果需要通过菜单触发弹窗）
    connect(ui->actionnew, &QAction::triggered, this, &goods::showAddGoodsDialog);
}

goods::~goods()
{
    delete ui;
}
void goods::showAddGoodsDialog()
{
    if (m_userId == -1) {
        QMessageBox::warning(this, "错误", "用户未登录，无法添加商品！");
        return;
    }


    addgoods_Dialog dialog(this);
    // 显示弹窗，等待用户输入
    if (dialog.exec() == QDialog::Accepted) {
        // 获取弹窗中表格的输入数据（QList<QStringList>：行列表格数据）
        QList<QStringList> goodsData = dialog.getGoodsData();
        if (goodsData.isEmpty()) {
            QMessageBox::warning(this, "错误", "未输入商品数据！");
            return;
        }

        // 解析表格数据（根据addgoods_dialog的UI结构：行0=名称，行1=售价，行2=成本，行3=库存）
        QString name = goodsData[0][1].trimmed(); // 商品名称（第0行第1列）
        QString skc=goodsData[1][1].trimmed();//商品skc(第1行第1列)
        double price = goodsData[2][1].toDouble(); // 售价（第2行第1列）
        double cost = goodsData[3][1].toDouble(); // 成本（第3行第1列）
        int stock = goodsData[4][1].toInt(); // 库存（第4行第1列）

        // 数据合法性校验
        if (name.isEmpty()||skc.isEmpty()) {
            QMessageBox::warning(this, "错误", "商品名称或skc不能为空！");
            return;
        }
        if (price <= 0 || cost < 0 || stock < 0) {
            QMessageBox::warning(this, "错误", "价格/成本/库存需为非负值，且售价必须大于0！");
            return;
        }

        // 调用数据库接口添加商品（其他参数如运费等用默认值）
        QString errorMsg;
        bool success = DatabaseManager::getInstance()->addGoods(
            m_userId,       // 当前用户ID（关键：关联用户）
            name,           // 商品名称
            skc,            //商品skc
            price,          // 售价
            cost,           // 成本
            0,              // 运费（默认0，可根据需求扩展）
            0,              // 毛利（默认0，可后续计算）
            0,              // 毛利率（默认0，可后续计算）
            stock,          // 库存
            "",             // 供应商（默认空，可扩展输入）
            errorMsg
            );

        if (success) {
            QMessageBox::information(this, "成功", "商品添加成功！");
            refreshGoodsTable(); // 刷新表格显示新商品
        } else {
            QMessageBox::warning(this, "失败", "添加失败：" + errorMsg);
        }
    }
}

// 刷新goods页面表格（加载当前用户的所有商品）
void goods::refreshGoodsTable()
{
    // 清空现有表格
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);

    if (m_userId == -1) return;

    // 查询当前用户的商品
    QString errorMsg;
    QSqlQuery query = DatabaseManager::getInstance()->getGoodsByUserId(m_userId, errorMsg);
    if (query.lastError().isValid()) {
        QMessageBox::warning(this, "错误", "加载商品失败：" + errorMsg);
        return;
    }

    // 填充表格（根据goods.ui的表头顺序映射字段）
    int row = 0;
    while (query.next()) {
        ui->tableWidget->insertRow(row);
        // 字段映射：根据数据库表和UI表格的列顺序对应
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(query.value("name").toString())); // 商品名称
        ui->tableWidget->setItem(row,1,new QTableWidgetItem(query.value("skc").toString()));//商品skc
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(query.value("price").toDouble(), 'f', 2))); // 售价
        ui->tableWidget->setItem(row, 3, new QTableWidgetItem(QString::number(query.value("cost").toDouble(), 'f', 2))); // 成本
        ui->tableWidget->setItem(row, 4, new QTableWidgetItem(QString::number(query.value("stock").toInt()))); // 库存
        ui->tableWidget->setItem(row, 5, new QTableWidgetItem(QString::number(query.value("sales").toInt()))); // 销量
        ui->tableWidget->setItem(row, 10, new QTableWidgetItem(QString::number(query.value("total_sales_amount").toDouble(), 'f', 2))); // 销售总额

        row++;
    }
}

// 槽函数：接收添加商品信号后刷新表格（预留扩展用）
void goods::onGoodsAdded(const QList<QStringList> &newGoods)
{
    refreshGoodsTable();
}
