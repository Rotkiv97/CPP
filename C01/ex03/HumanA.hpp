#ifndef HUMANA_HPP
#define HUMANA_HPP
//virtual serve per dichiarare la classe base per poi creare funzioni membro ereditarie
// override è la dichiarazione della ereditarietà per dichiarare più funzioni membro in più classi
// però deve avere una classe base da dove iniziare
#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon& _weapon;
    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        void attack() const;
};


#endif