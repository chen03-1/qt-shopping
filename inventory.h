#ifndef INVENTORY_H
#define INVENTORY_H

#include <QMainWindow>

namespace Ui {
class inventory;
}

class inventory : public QMainWindow
{
    Q_OBJECT

public:
    explicit inventory(QWidget *parent = nullptr);
    ~inventory();

signals:
    void switchTousepage();

private:
    Ui::inventory *ui;
};

#endif // INVENTORY_H
