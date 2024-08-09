#pragma once

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : virtual public Animal 
{
    private:
        std::string _type_c;
    public:
        Cat();
        Cat(const Cat &Cat);
        Cat &operator=(const Cat &Cat);
        void makeSound() const;
        ~Cat();
};