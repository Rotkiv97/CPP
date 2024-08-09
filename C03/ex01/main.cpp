#include "ScavTrap.hpp"


int main()
{
	std::string name;
	std::string target;
	std::cout << "inserisci il nome di ScavTrap -> " << std::flush;
	getline(std::cin, name);
	std::cout << "inserisci il nome  del bersaglio -> " << std::flush;
	getline(std::cin, target);
	ScavTrap ScavTrap(name);
	ScavTrap.setName(name);
	ScavTrap.attack(target);
	ScavTrap.takeDamage(ScavTrap.getA());
	ScavTrap.beRepaired(ScavTrap.getE());
	ScavTrap.guardGate();
}