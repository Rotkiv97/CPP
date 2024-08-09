#include "Zombie.hpp"


void Zombie::annonce(void){
    std::cout << "\033[31m" << this->name << "\033[32m : BraiiiiiiinnnzzZ\033[37m" << std::endl;
}