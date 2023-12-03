#include "card.h"
#include <qDebug>

ClassFactory& ClassFactory::getInstance(){
    static ClassFactory sLo_factory;
    return sLo_factory ;
}
void* ClassFactory::getClassByName(QString className){
    std::map<QString, PTRCreateObject>::const_iterator iter;
    iter = m_classMap.find(className) ;
    if ( iter == m_classMap.end() )
        return NULL ;
    else
        return iter->second();
}
void ClassFactory::registClass(QString name, PTRCreateObject method){
    m_classMap.insert(std::pair<QString, PTRCreateObject>(name, method)) ;
}


Card::Card() {
    this->card_unique_number = "0";
    this->health = 0;
    this->attack = 0;
}

Card::~Card() {}
