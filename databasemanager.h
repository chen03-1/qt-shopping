#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QObject>
#include<QSqlDatabase>
#include<QString>
#include <QSqlError>

class DatabaseManager : public QObject
{
    Q_OBJECT
public:
    explicit DatabaseManager(QObject *parent = nullptr);
    //自定义，初始化数据库
    bool initDatabase();

    static DatabaseManager *getInstance() {
        static DatabaseManager instance;
        return &instance;
    }
    // 禁止拷贝构造（单例必须）
    DatabaseManager(const DatabaseManager&) = delete;
    DatabaseManager& operator=(const DatabaseManager&) = delete;

    // 获取最后一次错误信息
    QString getLastError() const { return lastError; }


    //注册,失败返回错误信息
    bool registerUser(const QString &username,const QString &password,QString &errorMsg);
    //登录
    bool loginUser(const QString &username,const QString &password,QString &errorMsg);

signals:


private:

    //对象
    QSqlDatabase db;
    ~DatabaseManager();
     QString lastError;
};

#endif // DATABASEMANAGER_H
