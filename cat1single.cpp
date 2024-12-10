#include "cat1single.h"
#include "ui_cat1single.h"

Cat1Single::Cat1Single(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Cat1Single)
{
    ui->setupUi(this);
}

Cat1Single::~Cat1Single()
{
    delete ui;
}
