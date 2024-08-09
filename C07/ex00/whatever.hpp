#pragma once

#include <iostream>
#include <string>
template <typename T>
void swap(T& a,T& b){
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T const &min(T& a, T& b){
    return(a < b ? a : b);
}

template <typename T>
T const &max(T& a, T& b){
    return(a > b ? a : b);
}



//non puoi dichiarare lo template per piu' funzioni 

//#include "template.tpp"