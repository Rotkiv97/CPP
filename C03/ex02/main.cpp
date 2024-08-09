#include "FragTrap.hpp"


int main()
{
	std::string name;
	std::string target;
	std::cout << "Immetre nome -> " << std::flush;
	getline(std::cin, name);
	std::cout << "Immetre nome del bersaglio -> " << std::flush;
	getline(std::cin, target);
	FragTrap FragTrap(name);
	FragTrap.attack(target);
	FragTrap.takeDamage(FragTrap.getA());
	FragTrap.beRepaired(FragTrap.getE());
	FragTrap.highFivesGuys();
	return(0);
}