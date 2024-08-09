#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : virtual public AAnimal
{
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