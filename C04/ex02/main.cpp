#include "Cat.hpp"
#include "Dog.hpp"
#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    int n = 5;
    const AAnimal *animals[n];
    for(int i = 0; i < n ; i++){
        if(i <= n/2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
        animals[i]->makeSound();
        delete animals[i];
    }

    /* esempioi sbaglito */
    //const AAnimal *Animal = new AAnimal();
    return(0);
}