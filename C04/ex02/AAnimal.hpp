#ifndef AANIMAL_HPP 
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal{

    protected:
        std::string _type_a;
    public:
        AAnimal();
        AAnimal(const AAnimal &AAnimal);
        AAnimal &operator=(const AAnimal &AAnimal);
        void setType(std::string type);
        std::string getType() const;
        virtual void makeSound() const = 0;
        virtual ~AAnimal();
};

#endif