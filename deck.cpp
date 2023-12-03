#include "deck.h"
#include "QDebug"
QString deck_map_1[20] = {"Tactics","Tactics","Tactics","Evalution","Evalution","Fraud","Fraud",
                            "Fraud","Fraud","Fraud","IncreaseOutput","Pray","TroopTrimming","TroopTrimming","TroopTrimming",
                          "Commandments"};
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
