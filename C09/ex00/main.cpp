#include "BitcoinExchange.hpp"

int main(int ac, char **av){
    if(ac == 2){
        BitcoinExchange file;//gli passo il nome del file che creo
        if(file.checkFile(av[1])){
            file.MakedataInput(av[1]);
        }
        else
            return(1);
    }
    else
        std::cout << "\033[31mBad Argument - cannot open file\033[37m" << std::endl;

}