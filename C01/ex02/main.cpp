#include <string>
#include <iostream>

int main(void){
    std::string string;
    string = "HI THIS IS BRAIN";

    std::string     *stringPTR = &string;
    std::string     &stringREF = string;

    std::cout << "\033[32ml'indirizzo di memoria della variabile [string] \033[37m   " << &string << std::endl;
    std::cout << "\033[33ml'indirizzo di memoria della variabile [stringPTR] \033[37m" << stringPTR << std::endl;
    std::cout << "\033[34ml'indirizzo di memoria della variabile [stringREF] \033[37m" << &stringREF <<std::endl;

    std::cout << "\033[32mil valore della variabile [string] \033[37m   " << string << std::endl;
    std::cout << "\033[33mil valore della variabile [stringPTR] \033[37m" << *stringPTR << std::endl;
    std::cout << "\033[34mil valore della variabile [stringREF] \033[37m" << stringREF << std::endl;
    return(0);
}