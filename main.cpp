#include "widget.h"
#include <QApplication>
#include "databasemanager.h"
#include <QMessageBox>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    if (!DatabaseManager::getInstance()->initDatabase()) {
        QMessageBox::critical(nullptr, "错误", "数据库初始化失败，程序无法启动！");
        return -1;
    }
    Widget w;
    w.show();
    return a.exec();
}
