#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon){
}

HumanA::~HumanA(){
}

void    HumanA::attack() const{
    std::cout << "\033[32m" << this->_name << " attacks with their " << this->_weapon.getType() << "\033[37m" << std::endl;
}