#include "commandments.h"

Commandments::Commandments() {
    card_type = basic;
    // card_name = "Commandments";
    card_name = "戒律";
    card_unique_number = "BETA005";
    card_faction = neutral;
    card_color = gray;
    card_max = 2;
    card_pix_path = QPixmap(":/cards/sources/pics/cards/BETA001.jpg");
}
