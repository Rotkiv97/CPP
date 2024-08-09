#include "Zombie.hpp"

Zombie::Zombie(std::string tname){
    this->name = tname;
}

Zombie::~Zombie(){
    std::cout << "\033[35m" << name << " \033[36mthe zombie escape, but a truck ran over him !!!\033[37m" << std::endl;
}
int main(){

    std::string name;
    std::cout << "\033[32mcreating new zombie heap-> \033[37m" << std::flush;//creo lo zombie per lo stack
    std::cin >> name;
    Zombie *zombieRand = newZombie(name);
    zombieRand->annonce();
    delete zombieRand; // delete è l'equivalente di un free() nel C

    std::cout << "\033[33mcreating new zombie stack -> \033[37m" << std::flush;//creo lo zombie per heap
    std::cin >> name;  
    randomChump(name);
    

    return(0);
}