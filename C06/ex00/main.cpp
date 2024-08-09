#include "ScalarConverter.hpp"

int main(int ac, char **av){
    if(ac < 3){
        if(av[1] != NULL){
           ScalarConverter::convert(av[1]);
        }
        else if (av[1] == NULL)
            std::cout << "\33[31mImmetti degli argomenti\033[37m" << std::endl;
    }
    else
        std::cout << "\033[31mtroppi argomenti\033[37m" << std::endl;
}