#include <string>
#include <iostream>
/* #include <>
#include <>
#include <> */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string tname);
        ~Zombie();
    void annonce(void);
};


void annonce(void);
Zombie* newZombie(std::string string);
void    randomChump(std::string string);
#endif