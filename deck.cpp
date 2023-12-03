#include "deck.h"
#include "QDebug"
QString deck_map_1[60] = {"Tactics","Tactics","Tactics"};
Deck::Deck(uint8_t _deck_number) {
    for(uint8_t i=0 ;i < _deck_number; i++ ){
        Card* ptrObj = (Card*)ClassFactory::getInstance().getClassByName(deck_map_1[i]);
        my_deck.append(ptrObj);

    }
}
Deck::~Deck(){
    qDeleteAll(my_deck.begin(),my_deck.end());
    my_deck.clear();
}
