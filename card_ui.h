#ifndef CARD_UI_H
#define CARD_UI_H
#include <QLabel>
#define CARD_WIDTH 160
#define CARD_HEIGHT 200
class Card_UI
{
public:
    Card_UI(QWidget *parent);
    ~Card_UI();
    QLabel *card_bottom_surface;
    QLabel *card_name;
    QLabel *card_fraction;
    QLabel *card_pic;
    QLabel *card_funtion;
    QLabel *card_attack;
    QLabel *card_health;

};

#endif // CARD_UI_H
