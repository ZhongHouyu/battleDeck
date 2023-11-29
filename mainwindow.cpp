#include "mainwindow.h"
#include "./ui_mainwindow.h"

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

void MainWindow::on_start_game_clicked()
{
    ui->theam_label->setPixmap(QPixmap(":system/sources/pics/depot.jpg"));
    ui->start_game->close();
}

