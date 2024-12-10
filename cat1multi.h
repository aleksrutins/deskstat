#ifndef CAT1MULTI_H
#define CAT1MULTI_H

#include <QWidget>

namespace Ui {
class Cat1Multi;
}

class Cat1Multi : public QWidget
{
    Q_OBJECT

public:
    explicit Cat1Multi(QWidget *parent = nullptr);
    ~Cat1Multi();

private:
    Ui::Cat1Multi *ui;
};

#endif // CAT1MULTI_H
