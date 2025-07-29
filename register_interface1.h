#ifndef REGISTER_INTERFACE1_H
#define REGISTER_INTERFACE1_H

#include <QWidget>

namespace Ui {
class register_interface1;
}

class register_interface1 : public QWidget
{
    Q_OBJECT

public:
    explicit register_interface1(QWidget *parent = nullptr);
    ~register_interface1();

signals:
    void switchTologin();


private:
    Ui::register_interface1 *ui;
};

#endif // REGISTER_INTERFACE1_H
