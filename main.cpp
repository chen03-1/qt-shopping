#include "widget.h"
#include <QApplication>
#include "databasemanager.h"
#include <QMessageBox>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
     DatabaseManager* dbManager = DatabaseManager::getInstance();
    if (!dbManager->initDatabase()) {
        // 打印具体错误信息到控制台（关键！用于排查）
        qDebug() << "数据库初始化失败原因：" << dbManager->getLastError();
        QMessageBox::critical(nullptr, "错误", "数据库初始化失败，程序无法启动！");
        return -1; // 初始化失败则退出程序
    }
    Widget w;
    w.show();
    return a.exec();
}
