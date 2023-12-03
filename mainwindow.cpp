#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "window_my_deck.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // battlefield = new Battlefield();
}

MainWindow::~MainWindow()
{

    ui->theam_label->setPixmap(QPixmap(":system/sources/pics/depot.jpg"));
    // delete battlefield;
    delete ui;

}

void MainWindow::on_start_game_clicked()
{
    Window_my_deck *window_my_deck = new Window_my_deck(this);
    window_my_deck->show();
    // this->hide();
    connect(window_my_deck,SIGNAL(ExitWin()),this,SLOT(show()));
 }

