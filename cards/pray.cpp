#include "pray.h"

Pray::Pray() {
    card_type = basic;
    // card_name = "Pray";
    card_name = "祈祷";
    card_unique_number = "BETA003";
    card_faction = neutral;
    card_color = gray;
    card_max = 6;
    card_pix_path = QPixmap(":/cards/sources/pics/cards/BETA001.jpg");
}
