#pragma once

#include <iostream>
#include <limits>
#include <string>
#include <cmath>
#include <vector>

class A;
class B;
class C;

class Base{

    public:
        Base();
        Base(const Base &Base);
        Base &operator=(const Base &base);
        int getCount(void);
        void setCount(int count);
        virtual ~Base();
    private:
        int _count;
}; 


Base *generate(void);
void identify(Base *p);
void identify(Base& p);