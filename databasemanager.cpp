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
    QString createTableSql="create table if not exists user("
                             "id integer primary key autoincrement,"
                             "username text unique not null,"
                             "password text not null)";
    if(!query.exec(createTableSql))
    {
        lastError = "创建用户表失败：" + query.lastError().text();
        db.close();
        return false;
    }
     lastError = "初始化成功";
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
