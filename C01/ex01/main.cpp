#include "Zombie.hpp"
Zombie::Zombie(){
}

Zombie::~Zombie(){
    std::cout << "\033[31m" << name << " basta conversare muori!!\033[37m" << std::endl;
}


int main()
{
    int N = 0;
    std::cout << "\033[34mincserire in numero di zombie -> \033[37m" << std::flush;
    std::cin >> N;
    std::string name;/////////////////////fin qui ho gia definito il numero di zombie
    Zombie *zombie = zombieHorde(N, name);//////////////////gli dentro alloco gli zombie e li annuncio e poi li distruggo
    delete [] zombie; //come liberare un array al livello sintattico
}