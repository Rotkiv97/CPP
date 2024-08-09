#pragma once

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string _type_wa;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &WrongAnimal);
        WrongAnimal &operator=(const WrongAnimal &WrongAnimal);
        void makeSound() const;
        void setType(std::string type);
        std::string getType() const;
        ~WrongAnimal();
};
