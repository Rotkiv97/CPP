#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "\033[32mCostructor WrongAnimal\033[37m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal){
    *this = WrongAnimal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &WrongAnimal){
    if(this != &WrongAnimal)
        this->_type_wa = WrongAnimal._type_wa;
    return(*this);
}

void WrongAnimal::setType(std::string type){
    this->_type_wa = type;
}

std::string WrongAnimal::getType() const{
    std::cout << "\033[35mIl suono di WrongAnimal e' -> \033[37m" << std::endl;
    return(_type_wa);
}

void WrongAnimal::makeSound() const {
    std::cout << "\033[36mIl suono di WrongAnimal e' = " << _type_wa << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "\033[32mDestructor WrongAnimal\033[37m" << std::endl;
}