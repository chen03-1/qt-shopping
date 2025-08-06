#include "databasemanager.h"
#include<QSqlQuery>
#include<QSqlError>
#include<QMessageBox>
#include <QDir>
#include<QDebug>

DatabaseManager::DatabaseManager(QObject *parent)
    : QObject{parent}
{

    // 手动加载 SQLite 驱动
    if (!QSqlDatabase::isDriverAvailable("QSQLITE")) {
        lastError = "SQLite驱动未安装（找不到QSQLITE驱动）";
        return;
    }
    // 初始化数据库连接
    db = QSqlDatabase::addDatabase("QSQLITE");

    // 设置数据库文件路径（使用绝对路径避免相对路径问题）
    QString dbPath = QDir::currentPath() + "/user.db"; // 当前程序运行目录下
    db.setDatabaseName(dbPath);
    lastError = "构造函数初始化完成";

}



DatabaseManager::~DatabaseManager()
{
    if (db.isOpen()) {
        db.close(); // 析构时关闭数据库
    }
}
//实现
bool DatabaseManager::initDatabase()
{
    if (!QSqlDatabase::isDriverAvailable("QSQLITE")) {
        lastError = "初始化失败：SQLite驱动不可用";
        return false;
    }
    if(!db.open())
    {
        lastError = "打开数据库失败：" + db.lastError().text();
        return false;
    }

    //创建用户表
    QSqlQuery query;
    QString createUserTableSql = "create table if not exists user("
                                 "id integer primary key autoincrement,"
                                 "username text unique not null,"
                                 "password text not null)";
    if(!query.exec(createUserTableSql))
    {
        lastError = "创建用户表失败：" + query.lastError().text();
        db.close();
        return false;
    }
    // 创建商品表（关联用户ID）
    QString createGoodsTableSql = "create table if not exists goods("
                                  "id integer primary key autoincrement,"
                                  "user_id integer not null,"
                                  "name text  null,"
                                  "price real  null,"
                                  "cost real  null,"
                                  "shipping_fee real  null,"
                                  "gross_profit real  null,"
                                  "gross_profit_rate real  null,"
                                  "stock integer  null,"
                                  "sales integer default 0,"
                                  "total_sales_amount real default 0,"
                                  "today_sales integer default 0,"
                                  "today_sales_amount real default 0,"
                                  "weekly_sales integer default 0,"
                                  "weekly_sales_amount real default 0,"
                                  "average_weekly_sales real default 0,"
                                  "supplier text null,"
                                  "foreign key(user_id) references user(id) on delete cascade)";
    if(!query.exec(createGoodsTableSql))
    {
        lastError = "创建商品表失败：" + query.lastError().text();
        db.close();
        return false;
    }
     lastError = "初始化成功";
    return true;
     return query.value(0).toInt();
}
   bool DatabaseManager::addGoods(int userId, const QString& name, double price, double cost, double shipping_fee, double gross_profit, double gross_profit_rate, int stock, const QString& supplier, QString& errorMsg)
{
    if(!db.isOpen())
    {
        errorMsg = "数据库未连接";
        return false;
    }

    QSqlQuery query;
    query.prepare("insert into goods(user_id, name, price, cost, shipping_fee, stock, supplier) values(:user_id, :name, :price, :cost, :shipping_fee, :stock, :supplier)");
    query.bindValue(":user_id", userId);
    query.bindValue(":name", name);
    query.bindValue(":price", price);
    query.bindValue(":cost", cost);
    query.bindValue(":shipping_fee", shipping_fee);
    query.bindValue(":stock", stock);
    query.bindValue(":supplier", supplier);

    if(!query.exec())
    {
        errorMsg = "添加商品失败：" + query.lastError().text();
        return false;
    }
    return true;
}

QSqlQuery DatabaseManager::getGoodsByUserId(int userId, QString& errorMsg)
{
    if(!db.isOpen())
    {
        errorMsg = "数据库未连接";
        return QSqlQuery();
    }

    QSqlQuery query;
    query.prepare("select * from goods where user_id = :user_id");
    query.bindValue(":user_id", userId);

    if(!query.exec())
    {
        errorMsg = "查询商品失败：" + query.lastError().text();
        return QSqlQuery();
    }
    return query;
}

bool DatabaseManager::updateGoods(int goodsId, int userId, const QString& name, double price, int stock, QString& errorMsg)
{
    if(!db.isOpen())
    {
        errorMsg = "数据库未连接";
        return false;
    }

    QSqlQuery query;
    query.prepare("update goods set name=:name, price=:price, stock=:stock where id=:id and user_id=:user_id");
    query.bindValue(":id", goodsId);
    query.bindValue(":user_id", userId);
    query.bindValue(":name", name);
    query.bindValue(":price", price);
    query.bindValue(":stock", stock);

    if(!query.exec())
    {
        errorMsg = "更新商品失败：" + query.lastError().text();
        return false;
    }

    if(query.numRowsAffected() <= 0)
    {
        errorMsg = "未找到商品或无权限修改";
        return false;
    }
    return true;
}

bool DatabaseManager::deleteGoods(int goodsId, int userId, QString& errorMsg)
{
    if(!db.isOpen())
    {
        errorMsg = "数据库未连接";
        return false;
    }

    QSqlQuery query;
    query.prepare("delete from goods where id=:id and user_id=:user_id");
    query.bindValue(":id", goodsId);
    query.bindValue(":user_id", userId);

    if(!query.exec())
    {
        errorMsg = "删除商品失败：" + query.lastError().text();
        return false;
    }

    if(query.numRowsAffected() <= 0)
    {
        errorMsg = "未找到商品或无权限删除";
        return false;
    }
    return true;
}

bool DatabaseManager::registerUser(const QString &username,const QString &password,QString &errorMsg)
{
    if (!db.isOpen() && !db.open()) {
        errorMsg = "数据库连接失败：" + db.lastError().text();
        return false;
    }
    //官网qt上有
    QSqlQuery query;
    query.prepare("INSERT INTO user (username, password) VALUES (:username, :password)");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (!query.exec()) {
        errorMsg = "注册失败：" + query.lastError().text();
        return false;
    }
    return true;

}

bool DatabaseManager::loginUser(const QString &username,const QString &password,QString &errorMsg)
{
    if (!db.isOpen() && !db.open()) {
        errorMsg = "数据库连接失败：" + db.lastError().text();
        return false;
    }
     QSqlQuery query;
    query.prepare("select password from user where username=:username");
     query.bindValue(":username",username);

    if (!query.exec()) {
        errorMsg = "查询失败：" + query.lastError().text();
        return false;
    }

    if (!query.next()||query.value(0).toString() != password) {
        errorMsg = "用户名或密码错误，请重新输入";
        return false;
    }




    return true;

}
