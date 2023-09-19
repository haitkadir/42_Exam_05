#include "Warlock.hpp"

Warlock::Warlock(){}
Warlock::Warlock (const Warlock &obj){
    *this = obj;
}

Warlock &Warlock::operator = (const Warlock &obj){
    if (this == &obj)
        return *this;

    *this = obj;
    return *this;
}

Warlock::~Warlock(){
    std::cout << this->_name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const std::string &name, const std::string &title){
    this->_name = name;
    this->_title = title;
    std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

void Warlock::introduce() const {
    std::cout << this->_name << ": I am "<< this->_name << ", " << this->_title << "!" << std::endl;
}

void Warlock::setTitle(const std::string &str){
    this->_title = str;
}

const std::string &Warlock::getName() const{
    return this->_name;
}

const std::string &Warlock::getTitle() const{
    return this->_title;
}

