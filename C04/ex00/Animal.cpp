#include "Animal.hpp"
Animal::Animal(){
    std::cout << "\033[32mCostructor Animal\033[37m" << std::endl;
}

Animal::Animal(const Animal &Animal){
    std::cout << "\033[33mcopy costructor\033[37m" << std::endl;
    *this = Animal;
}

Animal &Animal::operator=(const Animal & Animal){
    if(this != &Animal)
        this->_type_a = Animal._type_a;
    return(*this);
}

void Animal::setType(std::string type){
    this->_type_a = type;
}

std::string Animal::getType() const{
     std::cout << "\033[35mIl suono di Animal e' -> \033[37m" << std::endl;
    return(_type_a);
}

void Animal::makeSound() const {
    std::cout << "\033[36mIl suono dell'animale e' = \033[37m" << getType() << std::endl; 
}

Animal::~Animal(){
    std::cout << "\033[31mDetructor Animal\033[37m" << std::endl;
}

