#include "HumanB.hpp"

HumanB::HumanB(std::string string)
{
    this->weapon = NULL;
    this->name_b = string;
}

HumanB::~HumanB(){  
}

void HumanB::setWeapon(Weapon& weapon){
    this->weapon = &weapon;
}

void HumanB::attack()const{

    if(!(this->weapon))
        std::cout << "\033[33m" << this->name_b << " don't attacks with their " << "\033[37m" << std::endl;
    else
        std::cout << "\033[33m" << this->name_b << " attacks with their " << this->weapon->getType() << "\033[37m" << std::endl;
}