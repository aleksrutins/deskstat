#ifndef CAT1SINGLE_H
#define CAT1SINGLE_H

#include <QWidget>

namespace Ui {
class Cat1Single;
}

class Cat1Single : public QWidget
{
    Q_OBJECT

public:
    explicit Cat1Single(QWidget *parent = nullptr);
    ~Cat1Single();

private:
    Ui::Cat1Single *ui;
};

#endif // CAT1SINGLE_H
