#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal{
    private:
        std::string _type_d;
        Brain *ideas;
    public:
        Dog();
        Dog(const Dog & Dog);
        Dog &operator=(const Dog &Dog);
        void makeSound() const;
        virtual ~Dog();

};