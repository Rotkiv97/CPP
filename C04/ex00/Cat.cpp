#include "Cat.hpp"

Cat::Cat() : _type_c("miaooooooo"){
    std::cout << "\033[32mCostructor Cat\033[37m" << std::endl; 
}

Cat::Cat(const Cat &Cat){
    *this = Cat;
}

Cat &Cat::operator=(const Cat &Cat){
    if(this != &Cat)
        this->_type_c = Cat._type_c;
    return(*this);
}

void Cat::makeSound() const{
    std::cout << "\033[36mIl suono dell'animale Cat e' = \033[37m" << _type_c << std::endl;
}

Cat::~Cat(){
    std::cout << "\033[31mDestructor Cat\033[37m" << std::endl; 
}