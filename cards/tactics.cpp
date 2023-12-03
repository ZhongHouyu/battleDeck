#include "tactics.h"

Tactics::Tactics() {
    card_type = basic;
    card_unique_number = "BETA001";
    card_faction = neutral;
    card_color = gray;
    card_max = 3;
    card_pix_path = QPixmap(":/cards/sources/pics/cards/BETA001.jpg");
}

