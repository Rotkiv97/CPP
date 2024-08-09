#ifndef ANIMAL_HPP 
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{

    protected:
        std::string _type_a;
    public:
        Animal();
        Animal(const Animal &Animal);
        Animal &operator=(const Animal &Animal);
        void setType(std::string type);
        std::string getType() const;
        virtual void makeSound() const;
        virtual ~Animal();
};

#endif