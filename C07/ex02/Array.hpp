#pragma once

#include <iostream>
#include <string>
#include <ctime>


template <typename T>
class Array
{
    private:
        T *_i;
        int _n;
    public:
        Array(){
            _n = 0;
            _i = new T();
        }
        Array(unsigned int a) :_i(new T[a]()){ //  le tonde richiama il costruttore di defolt       
            _n = a;
        }
        
        ~Array(){
            delete [] _i;
        }


        Array(const Array<T>& Array){
            _n = Array._n; 
            _i = new T[_n];
            if(_i){
                for(int i = 0; i < _n; i++)
                    _i[i] = Array._i[i];
            }
        }

        Array &operator=(const Array& Array){
            this->_n = Array._n;
            this->_i = new T[_n];
            if(_i)
                for(int i = 0; i < _n; i++)
                    this->_i[i]= Array._i[i];
            return(*this);   
        }

        T &operator[](int a){
            if(a >= 0 && a < _n)
                return(_i[a]);
            throw std::out_of_range("\033[31mError\033[37m");
        }

        size_t size()const{
            return(_n);
        }
};