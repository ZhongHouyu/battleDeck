#include "card_ui.h"

Card_UI::Card_UI(QWidget *parent) {
    card_bottom_surface = new QLabel(parent);
    card_name = new QLabel(parent);
    card_fraction = new QLabel(parent);
    card_pic = new QLabel(parent);
    card_funtion = new QLabel(parent);
    card_attack = new QLabel(parent);
    card_health = new QLabel(parent);
}
Card_UI::~Card_UI() {
    delete card_bottom_surface;
    delete card_name;
    delete card_fraction;
    delete card_pic;
    delete card_funtion;
    delete card_attack;
    delete card_health;
}
