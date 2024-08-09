#pragma once

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : virtual public AAnimal 
{
    private:
        std::string _type_c;
        Brain *ideas;
    public:
        Cat();
        Cat(const Cat &Cat);
        Cat &operator=(const Cat &Cat);
        void makeSound() const;
        ~Cat();
};