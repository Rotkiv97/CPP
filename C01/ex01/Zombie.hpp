#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <vector>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void setName(std::string tname);
        void  annonce();
};

void  annonce();
Zombie* zombieHorde(int N, std::string name);

#endif