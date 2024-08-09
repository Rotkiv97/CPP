#include "Zombie.hpp"

void Zombie::setName(std::string tname)
{
    this->name = tname;
}


void    Zombie::annonce(void){
    std::cout << "\033[33m" << "\033[31m" << name << "\033[33m 💀 : e sono venuto a mangiarti 🍽️ \033[37m" << std::flush;
    std::cout << std::endl;
}