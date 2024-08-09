#pragma once
#include "Animal.hpp"

class Dog : virtual public Animal{
    private:
        std::string _type_d;
    public:
        Dog();
        Dog(const Dog & Dog);
        Dog &operator=(const Dog &Dog);
        void makeSound() const;
        virtual ~Dog();
};