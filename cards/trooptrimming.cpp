#include "trooptrimming.h"

TroopTrimming::TroopTrimming() {
    card_type = basic;
    // card_name = "TroopTrimming";
    card_name = "整修";
    card_unique_number = "BETA002";
    card_faction = neutral;
    card_color = gray;
    card_max = 2;
    card_pix_path = QPixmap(":/cards/sources/pics/cards/BETA001.jpg");
}
