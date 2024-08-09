#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *nzombie;
    nzombie = new Zombie[N];
    for(int i = 0; i < N; i++){
        std::cout << "\033[34minserire il nome dell nuovo zombie -> " << "\033[37m";
        std::cin >> name;
        std::cout << std::flush;
        nzombie[i].setName(name);
        nzombie[i].annonce();
    }
    return(nzombie);
}