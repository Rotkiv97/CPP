#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(){
    Base *a;
    a = generate();
    identify(a);
    identify(*a);
}