#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QObject>
#include<QSqlDatabase>
#include<QString>

class DatabaseManager : public QObject
{
    Q_OBJECT
public:
    explicit DatabaseManager(QObject *parent = nullptr);
    //自定义，初始化数据库
    bool initDatabase();

    static DatabaseManager* getInstance();

    //注册,失败返回错误信息
    bool registerUser(const QString &username,const QString &password,QString &errorMsg);
    //登录
    bool loginUser(const QString &username,const QString &password,QString &errorMsg);

signals:


private:
    //对象
    QSqlDatabase m_db;
     static DatabaseManager* instance;
    ~DatabaseManager();
};

#endif // DATABASEMANAGER_H
