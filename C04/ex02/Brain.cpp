#include "Brain.hpp"

Brain::Brain(){
    std::cout << "\033[32mCostructor Brain\033[37m" << std::endl;
}

Brain::Brain(const Brain &Brain){
    *this = Brain;
}

Brain &Brain::operator=(const Brain &Brain){
    if(this != &Brain)
    {
        for(int i = 0 ; i < 100 ; i++)
            this->ideas[i] = Brain.ideas[i];
    }
    return(*this);
}

Brain::~Brain(){
    std::cout << "\033[31mDestructor Brain\033[37m" << std::endl;
}