#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::Base(){}

Base::Base(const Base &Base){
    *this = Base;
}

Base &Base::operator=(const Base &Base){
    (void)Base;
    return(*this);
}

int Base::getCount(){return(_count);}

void Base::setCount(int count){_count = count;}



Base::~Base(){}

