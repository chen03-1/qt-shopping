#include "databasemanager.h"
#include<QSqlQuery>
#include<QSqlError>
#include<QMessageBox>

// 初始化静态成员变量
DatabaseManager* DatabaseManager::instance = nullptr;

// 静态方法实现：获取唯一实例
DatabaseManager* DatabaseManager::getInstance() {
    if (instance == nullptr) {
        instance = new DatabaseManager();
    }
    return instance;
}

DatabaseManager::DatabaseManager(QObject *parent)
    : QObject{parent}
{
    //初始化数据库
    m_db=QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName("./user.db");


}



DatabaseManager::~DatabaseManager()
{
    if (m_db.isOpen()) {
        m_db.close(); // 析构时关闭数据库
    }
}
//实现
bool DatabaseManager::initDatabase()
{
    if(!m_db.open())
    {
        return false;
    }

    //创建用户表
    QSqlQuery query;
    QString createTableSql="create table if not exists user("
                             "id integer primary key autoincrement,"
                             "username text unique not null"
                             "password text not null)";
    if(!query.exec(createTableSql))
    {
        m_db.close();
        return false;
    }
    return true;
}

bool DatabaseManager::registerUser(const QString &username,const QString &password,QString &errorMsg)
{
    if (!m_db.isOpen() && !m_db.open()) {
        errorMsg = "数据库连接失败：" + m_db.lastError().text();
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
    if (!m_db.isOpen() && !m_db.open()) {
        errorMsg = "数据库连接失败：" + m_db.lastError().text();
        return false;
    }
     QSqlQuery query;
    query.prepare("select password from user where username=:username");
     query.bindValue(":username",username);

    if (!query.exec()) {
        errorMsg = "查询失败：" + query.lastError().text();
        return false;
    }

    if (!query.next()) {
        errorMsg = "用户名不存在";
        return false;
    }

    if (query.value(0).toString() != password) {
        errorMsg = "密码错误";
        return false;
    }

    return true;

}
