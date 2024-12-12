#ifndef NORMDIST_H
#define NORMDIST_H

#include <QWidget>
#include <QPointer>
#include "qcustomplot/qcustomplot.h"

namespace Ui {
class NormDist;
}

class NormDist : public QWidget
{
    Q_OBJECT

public:
    explicit NormDist(QWidget *parent = nullptr);
    ~NormDist();

public slots:
    void plotDistribution();

private:
    Ui::NormDist *ui;
    QPointer<QCustomPlot> plot;
};

#endif // NORMDIST_H
