#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "battlefield.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Player* get_player(uint8_t _player_number);
    uint32_t get_player_health(uint8_t _player_number);

private slots:
    void on_start_game_clicked();

private:
    Ui::MainWindow *ui;
    Battlefield *battlefield;
};
#endif // MAINWINDOW_H
