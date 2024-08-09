#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

A::A(){}
A::~A(){}

B::B(){}
B::~B(){}

C::C(){}
C::~C(){}

Base *generate(){
    Base a;
    srand(time(0));
    int i = rand();
    if(i % 3 == 1){
        std::cout << "\033[32mHa sceto A\033[37m" << std::endl;
        return(new A);
    }
    else if(i % 3 == 0){
        std::cout << "\033[32mHa scelto B\033[37m" << std::endl;
        return(new B);
    }
    else{
        std::cout << "\033[32mHa scelto C\033[37m" << std::endl;
        return(new C);
    }
}

void identify(Base *p){
    if(dynamic_cast<A *>(p)){
        std::cout << "\033[32m*A\033[37m" << std::endl;
    }
    else if (dynamic_cast<B *>(p)){
        std::cout << "\033[32m*B\033[37m" << std::endl;
    }
    else if (dynamic_cast<C *>(p)){
        std::cout << "\033[32m*C\033[37m" << std::endl;
    }
    else{
        std::cout << "\033[31mErrore\033[37m" << std::endl;
    }
}

void identify(Base &p){
    try
    {
        p = dynamic_cast<A &>(p);
        std::cout << "\033[32m&A\033[37m" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {   
    }
    try
    {
        p = dynamic_cast<B &>(p);
        std::cout << "\033[32m&B\033[37m" << std::endl;
        return; 
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        p = dynamic_cast<C &>(p);
        std::cout << "\033[32m&C\033[37m" << std::endl;
        return ; 
    }
    catch(const std::exception& e)
    {
    }
}
