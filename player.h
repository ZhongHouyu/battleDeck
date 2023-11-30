#ifndef PLAYER_H
#define PLAYER_H

#include "card.h"

class Player
{
public:
    Player();
    ~Player();
    // Deck *deck;
    uint8_t draw_card();
    uint16_t get_health();

private:
    uint16_t health;

};

#endif

// PLAYER_H
