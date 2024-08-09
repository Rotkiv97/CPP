#include "Iter.hpp"

int main(){
    std::string a[] = {"ciao", "come", "va"};
    ::Iter(&a, a, element);
    int b[] = {1, 2, 8 ,3 , 4, 5};
    ::Iter(&b, b, element);
    double c[] = {1.1, 2.7, 4.9, 8.10};
    ::Iter(&c, c, element);
    float d[] = {1.4f, 4.5f, 57.89f, 20.9f, 50.2342f};
    ::Iter(&d, d, element);
    return(0);
}