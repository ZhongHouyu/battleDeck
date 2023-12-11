#include "fraud.h"

Fraud::Fraud() {
    card_type = basic;
    // card_name = "Fraud";
    card_name = "欺诈";
    card_unique_number = "BETA007";
    card_faction = neutral;
    card_color = gray;
    card_max = 60;
    card_pix_path = QPixmap(":/cards/sources/pics/cards/BETA001.jpg");
}
