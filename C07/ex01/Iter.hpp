#pragma once

#include <iostream>
#include <string>

template<typename T>
void element(T &c){
    std::cout << "\033[33m" << c <<  " \033[37m";
}

template <typename T,typename D, size_t N>
//ho dovuto usare un type name in piu' perche' senno mi dava conflitto
void Iter(T *a, D (&b)[N], void (&fun)(D&)){
/*
1) e' semplicemente l'indirizzo dell array
2) parametro posso rappresentarla semplicemente cosi dove S 
   e' la size_t dell'array 
3) in questo caso la rendo void perche' mi deve solo 
   stampare senno' mi fo tornare cio che piu mi aggrada */ 
    std::cout << "\033[32m" << &a << "\033[37m" << std::endl;
    std::cout << "\033[36m" << N << "\033[37m" << std::endl;
    for (size_t i = 0; i < N; i++)
        fun(b[i]); 
    std::cout << std::endl;
}
