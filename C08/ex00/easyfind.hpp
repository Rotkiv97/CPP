#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>

template <typename T>

void easyfind(T& fi, int n){
    typename T::iterator a = std::find(fi.begin(), fi.end(), n);

    if(a != fi.end())
        std::cout << "riccorenza trovata = [" << *a << "]" << std::endl;
    else
        throw std::runtime_error("\033[31mRiccoranza non trovata\033[37m");
}