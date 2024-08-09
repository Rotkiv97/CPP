#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>


class Weapon {
    
    private:
        std::string weapon_w;
    public:
        Weapon(std::string string);
            std::string   getType()const;
            void          setType(std::string string);
        ~Weapon();
};

#endif
