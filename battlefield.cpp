#include "battlefield.h"


Battlefield::Battlefield(){
    player_nums = 2;
    init_players();
}
Battlefield::~Battlefield(){
    qDeleteAll(players.begin(),players.end());
    players.clear();
}

uint16_t Battlefield::show_players(uint8_t _player_number){
    return players.at(_player_number)->get_health();
}
void Battlefield::init_players(){
    for(uint8_t i=0 ;i < player_nums; i++ ){
        Player *p = new Player();
        players.append(p);
    }
}


