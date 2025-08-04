#include "usepage.h"
#include "ui_usepage.h"
#include"register_lable.h"

usepage::usepage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::usepage)
    , m_userId(-1)
{
    ui->setupUi(this);
    //登出标签跳转
    connect(ui->exit_label,static_cast<void (register_lable::*)()>(&register_lable::clicked),
            this,&usepage::switchTologinpage);

    //商品管理页跳转
    connect(ui->add_goods_label,static_cast<void (register_lable::*)()>(&register_lable::clicked),
            this,&usepage::switchTogoodspage);
    connect(ui->del_goods_label,static_cast<void (register_lable::*)()>(&register_lable::clicked),
            this,&usepage::switchTogoodspage);
    connect(ui->change_goods_label, static_cast<void (register_lable::*)()>(&register_lable::clicked),
            this,&usepage::switchTogoodspage);

    //库存页跳转
    connect(ui->edit_inventory_label,static_cast<void (register_lable::*)()>(&register_lable::clicked),
            this,&usepage::switchToinventory);
    connect(ui->report_inventory_label,static_cast<void (register_lable::*)()>(&register_lable::clicked),
            this,&usepage::switchToinventory);
    connect(ui->view_inventory_label,static_cast<void (register_lable::*)()>(&register_lable::clicked),
            this,&usepage::switchToinventory);

    //分析页跳转
    connect(ui->profit_label,static_cast<void (register_lable::*)()>(&register_lable::clicked),
            this,&usepage::switchToanalyse);
    connect(ui->ranking_label,static_cast<void (register_lable::*)()>(&register_lable::clicked),
            this,&usepage::switchToanalyse);
    connect(ui->unsalabel_label,static_cast<void (register_lable::*)()>(&register_lable::clicked),
            this,&usepage::switchToanalyse);

    connect(this,&usepage::printUsername,this,[=](const QString &username){
        ui->printuser_label->setText(username);
    });
}

usepage::~usepage()
{
    delete ui;
}
void usepage::printUsername(const QString &username) {
    ui->printuser_label->setText(username); // 填充标签
}
void usepage::setUserId(int userId)
{
    m_userId = userId;
    loadUserGoods(); // 加载当前用户的商品数据
}

void usepage::loadUserGoods()
{
    if (m_userId == -1)
        return;

    QString errorMsg;
    QSqlQuery query = DatabaseManager::getInstance()->getGoodsByUserId(m_userId, errorMsg);

    if (query.lastError().isValid())
    {
        QMessageBox::warning(this, "错误", "加载商品数据失败: " + errorMsg);
        return;
    }

    // 统计商品总数并更新在售商品数LCD
    int goodsCount = 0;
    double totalSales = 0;
    int bestSellingCount = 0;
    QString bestSellingName = "无商品";

    while (query.next())
    {
        goodsCount++;
        // 假设存在销量字段，实际需要根据数据库结构调整
        int sales = query.value("sales").toInt(); // 使用正确的销量字段
        double price = query.value("price").toDouble();
        totalSales += sales * price;

        if (sales > bestSellingCount)
        {
            bestSellingCount = sales;
            bestSellingName = query.value("name").toString();
        }
    }

    // 更新UI控件
    ui->sellgoods_number_lcdNumber->display(goodsCount);
    ui->bestgoods_name_label->setText(bestSellingName);
    ui->bestgoods_sellnumber_label->setText(QString::number(bestSellingCount));
    ui->bestgoods_money_label->setText(QString::number(totalSales, 'f', 2));
}
