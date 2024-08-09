#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    int n = 11;
    const Animal *Animal[n];

    for(int i = 0; i < n; i++){
        if(i <= n/2)
            Animal[i] = new Dog();
        else
            Animal[i] = new Cat();
        delete Animal[i];
    }
}