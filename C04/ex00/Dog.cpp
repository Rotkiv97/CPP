#include "Dog.hpp"

Dog::Dog() : _type_d("baooooooo"){
    std::cout << "\033[32mCostructor Dog\033[37m" <<  std::endl;
}

Dog::Dog(const Dog &Dog){
    std::cout << "\033[33mCopy Costructor\033[37m" << std::endl;
   *this = Dog; 
}

Dog &Dog::operator=(const Dog &Dog){
    if(this != &Dog)
        this->_type_d = Dog._type_d;
    return(*this);
}

void Dog::makeSound() const{
    std::cout << "\033[36mIl suono dell'animale Dog  e' = \033[37m" << _type_d << std::endl;
}

Dog::~Dog(){
    std::cout << "\033[31mDestructor Dog\033[37m" << std::endl;
}
