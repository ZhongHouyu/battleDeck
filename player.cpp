#include "player.h"

Player::Player() {
    health = 8000;
    deck = new Deck(20);
}
Player::~Player() {}

uint16_t Player::get_health(){
    return health;
}
