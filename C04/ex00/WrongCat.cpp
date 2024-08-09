#include "WrongCat.hpp"

WrongCat::WrongCat() : _type_wc("miaooooo"){
    std::cout << "\033[32mCostructor WrongCat\033[37m" << std::endl;
}

WrongCat::WrongCat(const WrongCat &WrongCat){
    *this = WrongCat;
}

WrongCat &WrongCat::operator=(const WrongCat &WrongCat){
    if(this != &WrongCat)
        this->_type_wc = WrongCat._type_wc;
    return(*this);
}

void WrongCat::makeSound() const{
    std::cout << "\033[36mIl suono del WrongCat e' = \033[37m" << _type_wc << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "\033[31mDestructor WrongCat\033[37m" << std::endl;
}