#include "whatever.hpp"


int main(){
    
    int a = 1;
    int b = 3;
    ::swap(a, b);
    std::cout << "\033[32mA = " << a <<" , B = "<< b << "\033[37m" << std::endl;
    std::cout << "\033[32mmin(a,b) = " << ::min(a,b) << "\033[37m" << std::endl;
    std::cout << "\033[32mmax(a,b) = " << ::max(a,b) << "\033[37m" << std::endl;
    
    std::string c = "chaine2";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "\033[32mC = " << c <<" , D = "<< d << "\033[37m" << std::endl;
    std::cout << "\033[32mmin(c,d) = " << ::min(c,d) << "\033[37m" << std::endl;
    std::cout << "\033[32mmax(c,d) = " << ::max(c,d) << "\033[37m" << std::endl;

}