#include "cat1multi.h"
#include "ui_cat1multi.h"

Cat1Multi::Cat1Multi(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Cat1Multi)
{
    ui->setupUi(this);
}

Cat1Multi::~Cat1Multi()
{
    delete ui;
}
