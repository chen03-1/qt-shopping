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


    int loginUser(const QString &username,const QString &password,QString &errorMsg);

    // 商品相关操作
    bool addGoods(int userId, const QString& name, double price, double cost, double shipping_fee, double gross_profit, double gross_profit_rate, int stock, const QString& supplier, QString& errorMsg);
    QSqlQuery getGoodsByUserId(int userId, QString& errorMsg);
    bool updateGoods(int goodsId, int userId, const QString& name, double price, int stock, QString& errorMsg);
    bool deleteGoods(int goodsId, int userId, QString& errorMsg);
signals:


private:

    //对象
    QSqlDatabase db;
    ~DatabaseManager();
     QString lastError;
};

#endif // DATABASEMANAGER_H
