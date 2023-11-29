#include "prepare_window.h"
#include "ui_prepare_window.h"

prepare_window::prepare_window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::preper_window)
{
    ui->setupUi(this);
}

prepare_window::~prepare_window()
{
    delete ui;
}
