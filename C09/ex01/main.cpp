#include "RPN.hpp"

int main(int ac, char **av){
    if(ac == 2){
        RPN a;
        if(a.checkStack(av[1]))
            a.ReversePolishNotation();
        else
            std::cout << "\033[31mError : Invalid Stack\033[37m" <<std::endl;
    }
    else{
        std::cout << "\033[31mError : Invalid Argument\033[37m" << std::endl; 
    }
    return(0);
}