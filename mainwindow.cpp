#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "cat1multi.h"
#include "cat1single.h"
#include "normdist.h"
#include "quant1single.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::replaceSim(QWidget *newSim) {
    if(activeSim != nullptr) {
        delete activeSim.data();
    }

    activeSim = newSim;

    ui->splitter->addWidget(activeSim);
}

void MainWindow::handleNavigation(QTreeWidgetItem *where, int column) {
    auto desc = where->whatsThis(column);

    if(desc == "1cat_single") {
        replaceSim(new Cat1Single(this));
    }
    if(desc == "1cat_multi") {
        replaceSim(new Cat1Multi(this));
    }
    if(desc == "2cat") {
        replaceSim(new Quant1Single(this));
    }

    if(desc == "1quant_single") {
        replaceSim(new Quant1Single(this));
    }
    if(desc == "1quant_multi") {
        replaceSim(new Quant1Single(this));
    }
    if(desc == "2quant") {
        replaceSim(new Quant1Single(this));
    }

    if(desc == "normdist") {
        replaceSim(new NormDist(this));
    }
}
