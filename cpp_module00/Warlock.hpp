#ifndef __WARLOCK_H__
#define __WARLOCK_H__
#include <iostream>

class Warlock {
private:
    std::string _name;
    std::string _title;
    Warlock();
    Warlock &operator = (const Warlock &obj);
    Warlock (const Warlock &obj);
public:
    ~Warlock();

    Warlock(const std::string &name, const std::string &title);

    void introduce() const;

    void setTitle(const std::string &str);
    const std::string &getName() const;
    const std::string &getTitle() const;
};

#endif
