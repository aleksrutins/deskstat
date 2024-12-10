#include "quant1single.h"
#include "ui_quant1single.h"

Quant1Single::Quant1Single(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Quant1Single)
{
    ui->setupUi(this);
}

Quant1Single::~Quant1Single()
{
    delete ui;
}
