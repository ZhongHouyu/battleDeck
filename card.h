#ifndef CARD_H
#define CARD_H
#include <stdint.h>
#include <QString>

typedef enum Card_Type{
    basic               = 0x00,
    chessman            = 0x01,
    special_chessman    = 0x02,
    skill               = 0x03,
    majic               = 0x04,


}Card_Type;

typedef enum Faction{
    neutral             = 0x00,
    jackel              = 0x01,
    devel_night         = 0x02,
}Faction;

typedef enum Card_Color{
    gray                = 0x00,
    black               = 0x01,
    purple              = 0x02,
}Card_Color;


class Card
{
public:
    Card();
    ~Card();
    Card_Type card_type;                // name of this card
    QString card_unique_number;         // card unique numeber pushlished by Mr.Qiao
    Faction card_faction;
    Card_Color card_color;
    uint8_t card_max;                   // max number of this card in one deck

    uint16_t get_health();
    uint16_t get_attack();
private:
    uint16_t health;
    uint16_t attack;
};


class Deck
{
public:
    Deck();
    ~Deck();
    // Card *card_list;

    // uint8_t get_deck_number();
    // uint8_t get_deck_top();
private:
    uint8_t deck_top;
    uint8_t deck_bottom;
    uint8_t deck_number;
};

#endif // CARD_H
