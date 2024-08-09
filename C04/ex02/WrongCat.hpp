#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

    private:
        std::string _type_wc ;
    public:
        WrongCat();
        WrongCat(const WrongCat &WrongCat);
        WrongCat &operator=(const WrongCat &WrongCat);
        void makeSound() const;
        ~WrongCat();
};