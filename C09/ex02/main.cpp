#include "PmergeMe.hpp"

int main(int ac, char **av){
    if(ac < 3){
        std::cout << "\033[31mError : too meny argument\033[37m" <<std::endl;
    }
    else{
        PmergeMe stack;
        if(stack.checkstack(av)){
            stack.PrintSort();
        }
        else{
            std::cout << "\033[31mError : invalid Stack\033[37m" <<std::endl;
        }
    }
    return(0);
}