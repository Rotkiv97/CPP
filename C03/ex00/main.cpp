#include "ClapTrap.hpp"


int main()
{
	ClapTrap claptrap;
	std::string target;
	std::string name;
	std::cout << "\033[34mInserisci il nome dell' attaccante -> \033[37m" << std::flush;
	getline(std::cin, name);
	std::cout << "\033[34mInserisci il nome del bersaglio -> \033[37m" << std::flush;
	getline(std::cin, target);
	claptrap.setName(name);
	claptrap.attack(target);
	claptrap.takeDamage(claptrap.getA());
	claptrap.beRepaired(claptrap.getE());
}