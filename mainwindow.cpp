#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->player_1_health->setHidden(true);
    ui->player_2_health->setHidden(true);
    ui->player_1_profile->setHidden(true);
    ui->player_2_profile->setHidden(true);
    battlefield = new Battlefield();
}

MainWindow::~MainWindow()
{
    delete battlefield;
    delete ui;
}

void MainWindow::on_start_game_clicked()
{
    ui->theam_label->setPixmap(QPixmap(":system/sources/pics/depot.jpg"));
    ui->start_game->close();
    ui->player_1_health->setHidden(false);
    ui->player_2_health->setHidden(false);
    ui->player_1_profile->setHidden(false);
    ui->player_2_profile->setHidden(false);

    ui->player_1_profile->setPixmap(QPixmap(":system/sources/pics/player1.jpg"));
    ui->player_1_health->setText(QString::number(get_player_health(0)));
    ui->player_1_profile->setStyleSheet("border: 1px solid black;");
    ui->player_1_health->setStyleSheet("border: 1px solid black;");
    ui->player_1_health->setStyleSheet("background-color:white;");
    ui->player_1_health->setAlignment(Qt::AlignCenter);

    ui->player_2_profile->setStyleSheet("border: 1px solid black;");
    ui->player_2_health->setStyleSheet("border: 1px solid black;");
    ui->player_2_profile->setPixmap(QPixmap(":system/sources/pics/player2.jpg"));
    ui->player_2_health->setText(QString::number(get_player_health(1)));
    ui->player_2_health->setStyleSheet("background-color:white;");
    ui->player_2_health->setAlignment(Qt::AlignCenter);

}

uint32_t MainWindow::get_player_health(uint8_t _player_number){
    return battlefield->show_players(_player_number);
}
