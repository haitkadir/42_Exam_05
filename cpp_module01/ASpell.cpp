#include "ASpell.hpp"

ASpell::ASpell(){}

ASpell::ASpell(const ASpell &obj){
    *this = obj;
}

ASpell & ASpell::operator = (const ASpell &obj){
    if (this != &obj)
        *this = obj;
    return *this;
}

ASpell::~ASpell(){}


std::string ASpell::getName() const{
    return this->_name;
}
std::string ASpell::getEffects() const{
    return this->_effects;
}

ASpell::ASpell(std::string &name, std::string effects){
    this->_name = name;
    this->_effects = effects;
}
