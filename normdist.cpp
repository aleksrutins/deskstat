#include "normdist.h"
#include "ui_normdist.h"
#include <cmath>
#include <algorithm>

#define N_POINTS 100

NormDist::NormDist(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::NormDist)
    , plot(new QCustomPlot(this))
{
    ui->setupUi(this);

    ui->frame->layout()->addWidget(plot);
}

NormDist::~NormDist()
{
    delete ui;
}

void NormDist::plotDistribution()
{
    double mean = atof(ui->mean->text().toStdString().c_str())
        , stdev = atof(ui->stdev->text().toStdString().c_str())
        , lowerDomain = mean - 4*stdev
        , upperDomain = mean + 4*stdev
        , domain = upperDomain - lowerDomain;


    QVector<double> x(N_POINTS), y(N_POINTS);
    for (int i = 0; i < N_POINTS; ++i) {
        x[i] = lowerDomain + (i / ((N_POINTS) / domain));
        y[i] = (1 / (stdev * qSqrt(2 * M_PI))) * pow(M_E, (0-pow((x[i] - mean), 2.0)/(2 * pow(stdev, 2.0)))); // normal curve
    }

    // Create graph and assign data to it
    plot->addGraph();
    plot->graph(0)->setData(x, y);

    // Give the axes some labels
    plot->xAxis->setLabel("x");
    plot->yAxis->setLabel("y");

    // Set ranges for the axes
    plot->xAxis->setRange(lowerDomain, upperDomain);
    plot->yAxis->setRange(0, *std::max_element(y.begin(), y.end()));
    plot->replot();
}
