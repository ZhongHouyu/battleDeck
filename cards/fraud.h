#ifndef FRAUD_H
#define FRAUD_H
#include "../card.h"
class Fraud : public Card
{
public:
    Fraud();
};
REGISTER(Fraud);
#endif // FRAUD_H
