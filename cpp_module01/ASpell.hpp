#ifndef __ASPELL_H__
#define __ASPELL_H__

#include <iostream>

class ASpell{
protected:
    std::string _name;
    std::string _effects;
public:
    ASpell();
    ASpell(const ASpell &obj);
    ASpell & operator = (const ASpell &obj);
    ~ASpell();

    ASpell(std::string &name, std::string effects);


    std::string getName() const;
    std::string getEffects() const;
    virtual ASpell *clone() const = 0;
};

#endif