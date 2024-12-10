#ifndef QUANT1SINGLE_H
#define QUANT1SINGLE_H

#include <QWidget>

namespace Ui {
class Quant1Single;
}

class Quant1Single : public QWidget
{
    Q_OBJECT

public:
    explicit Quant1Single(QWidget *parent = nullptr);
    ~Quant1Single();

    constexpr const char *desc() {
        return "One Quantitative Variable, Single Group";
    }

private:
    Ui::Quant1Single *ui;
};

#endif // QUANT1SINGLE_H
