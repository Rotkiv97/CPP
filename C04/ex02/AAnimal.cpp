#include "AAnimal.hpp"
AAnimal::AAnimal(){
    std::cout << "\033[32mCostructor AAnimal\033[37m" << std::endl;
}

AAnimal::AAnimal(const AAnimal &AAnimal){
    std::cout << "\033[33mcopy costructor\033[37m" << std::endl;
    *this = AAnimal;
}

AAnimal &AAnimal::operator=(const AAnimal &AAnimal){
    if(this != &AAnimal)
        this->_type_a = AAnimal._type_a;
    return(*this);
}

void AAnimal::setType(std::string type){
    this->_type_a = type;
}

std::string AAnimal::getType() const{
    return(_type_a);
}

void AAnimal::makeSound() const {
    std::cout << "\033[36mIl suono dell'animale e' = \033[37m" << getType() << std::endl; 
}

AAnimal::~AAnimal(){
    std::cout << "\033[31mDetructor AAnimal\033[37m" << std::endl;
}

