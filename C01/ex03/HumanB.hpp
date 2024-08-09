#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    std::string name_b;
    Weapon *weapon;
public:
    HumanB(std::string string);
    ~HumanB(); 
    void attack() const;
    void setWeapon(Weapon& weapon);
};


#endif