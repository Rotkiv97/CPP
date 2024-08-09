#include "Zombie.hpp"

Zombie*  newZombie(std::string string){
    
    Zombie *name;

    name = new Zombie(string); // come fare una allocazione dinamica di una stringa sintassi riferita ad una classe
    return(name);
}