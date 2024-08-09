#pragma once
#include <iostream>
#include <string>
#include <stack>
#include <deque>
#include <iterator>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack<T>(){}
        MutantStack<T>(const MutantStack<T>& MutantStack){
            *this = MutantStack;
        }
        MutantStack<T> &operator=(const MutantStack<T>& MutantStack){
            this->c = MutantStack.c;
        }
        typedef typename std::stack<T>::container_type::iterator    iterator;
        iterator begin(){
            return(this->c.begin());
        }
        iterator end(){
            return(this->c.end());
        }
        ~MutantStack<T>(){}
};
