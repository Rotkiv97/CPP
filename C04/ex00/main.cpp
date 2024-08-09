#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
	/* 
		questo esempio qui sopra e ' la stessa cosa di dire cosi'
		animal meta(animal);
		animal j(dog);
		animal i(cat);
	*/

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;//non restitueranno nessun sono perche ereditano direttamente dalla calsse madre

	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;


	std::cout << std::endl;
	std::cout << "\033[33mEsempio di quando non viene utilizzato virtual nella classe madre\033[37m";
	std::cout << std::endl;
	std::cout << std::endl;

	const WrongAnimal* animal_w = new WrongAnimal();
	const WrongAnimal* cat = new WrongCat();
	

	std::cout << animal_w->getType() << " "  << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << std::endl;

	animal_w->makeSound();
	cat->makeSound();
	delete animal_w;
	delete cat;

	return(0);
}