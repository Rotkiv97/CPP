#include "Harl.hpp"
Harl::Harl(){}

Harl::~Harl(){}

int main()
{
    Harl harl;
    std::string level;
    while(1){
        std::cout << "immetti un livello -> ";
        getline(std::cin, level);
        harl.complain(level);
    }
    return(0);
}