#ifndef BATTLEFIELD_H
#define BATTLEFIELD_H
#include<QList>
#include "player.h"


class Battlefield
{
public:
    Battlefield();
    ~Battlefield();
    uint16_t show_players(uint8_t _player_number);
    void refresh_battlefield();
private:
    void init_players();
    QList<Player*> players;
    uint8_t player_nums;
};

#endif // BATTLEFIELD_H
