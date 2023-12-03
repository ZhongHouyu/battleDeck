#ifndef WINDOW_MY_DECK_H
#define WINDOW_MY_DECK_H

#include <QWidget>
#include <QCloseEvent>
#include <QList>
#include "card_ui.h"
#include "player.h"
namespace Ui {
class window_my_deck;
}
class MainWindow;
class Window_my_deck : public QWidget
{
    Q_OBJECT

public:
    explicit Window_my_deck(QWidget *parent = nullptr);
    ~Window_my_deck();
    void show_deck(QWidget *parent);
    void closeEvent(QCloseEvent* );
signals:
    void ExitWin();
private:
    Ui::window_my_deck *ui;
    QList <Card_UI*> card_ui_list;
    Player *player;
    Player* get_player();
    uint32_t get_player_health(uint8_t _player_number);

};

#endif // WINDOW_MY_DECK_H
