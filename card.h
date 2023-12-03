#ifndef CARD_H
#define CARD_H
#include <map>
#include <stdint.h>
#include <QString>
#include <QList>
#include <QPixmap>
#define REGISTER(className)                                             \
    className* objectCreator##className(){                              \
        return new className;                                           \
    }                                                                   \
    RegisterAction g_creatorRegister##className(                        \
        #className,(PTRCreateObject)objectCreator##className);

typedef void* (*PTRCreateObject)(void);  // a callback to new different cards


class ClassFactory{
private:
    std::map<QString, PTRCreateObject> m_classMap ;
    ClassFactory(){};
public:
    void* getClassByName(QString className);
    void registClass(QString name, PTRCreateObject method);
    static ClassFactory& getInstance();
};



class RegisterAction{
public:
    RegisterAction(QString className,PTRCreateObject ptrCreateFn){
        ClassFactory::getInstance().registClass(className,ptrCreateFn);
    }
};

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
    Card_Type card_type;                // type of this card
    QString card_unique_number;         // card unique numeber pushlished by Mr.Qiao
    QString card_name;
    Faction card_faction;
    Card_Color card_color;
    uint8_t card_max;                   // max number of this card in one deck
    uint16_t health;
    uint16_t attack;
    QPixmap card_pix_path;
    uint16_t get_health();
    uint16_t get_attack();
private:

};


#endif // CARD_H
