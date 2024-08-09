#include "Serializer.hpp"

int main(){

    Data *a = new Data;
    a->a = "ciao";
    uintptr_t b;
    Data *c;

    b = Serializer::serializer(a);
    c = Serializer::deserialize(b);
    std::cout << &c->a << std::endl;
    std::cout << &a->a << std::endl;
    return(0);
}