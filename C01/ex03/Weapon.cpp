#include "Weapon.hpp"

Weapon::Weapon(std::string string){
    this->weapon_w = string;
    setType(weapon_w);
}

Weapon::~Weapon(){
}

void    Weapon::setType(std::string string){
    this->weapon_w = string;
}

std::string     Weapon::getType(void)const{
    return(this->weapon_w);
}
