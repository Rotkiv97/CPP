#include "Span.hpp"

int main(){

    std::cout << "\033[32mPrimo esempio in cui creo una funzione che mi prenda piu numeri in entrata\033[37m" << std::endl;
    Span B = Span(10);
    std::vector<int> l;
    for(int i = 0; i < 9; i++)
        l.push_back(rand() % 100); 
    B.MultypleAdd(l);
    std::cout << B.shortestSpan() << std::endl;
    std::cout << B.longestSpan() << std::endl;
    std::cout << std::endl;

    std::cout << "\033[32mSecondo esepio in cui aggiungo uno ad uno i valori all'interno del vettore\033[37m" << std::endl;
    Span S = Span(5);
    S.addNumber(40);
    S.addNumber(40);
    S.addNumber(33);
    S.addNumber(8);
    S.addNumber(13);
    std::cout << S.shortestSpan() << std::endl;
    std::cout << S.longestSpan() << std::endl;
    S.addNumber(14);
    std::cout << S.shortestSpan() << std::endl;
    std::cout << S.longestSpan() << std::endl;
    std::cout << std::endl;    
    std::cout << "\033[33m////////////////////\033[37m" << std::endl;
    Span C = Span(3);
    C.addNumber(2);
    C.addNumber(3);
    C.addNumber(7);
    std::cout << C.shortestSpan() << std::endl;
    std::cout << C.longestSpan() << std::endl;
}