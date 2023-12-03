#ifndef DECK_H
#define DECK_H
#include "card.h"
class Deck
{
public:
    Deck();
    Deck(uint8_t _deck_number);
    ~Deck();
    // Card *card_list;
    QList<Card*> my_deck;
    uint8_t get_deck_number();
    uint8_t get_deck_top();

private:
    uint8_t deck_top;
    uint8_t deck_bottom;
    uint8_t deck_number;
};

#endif // DECK_H
