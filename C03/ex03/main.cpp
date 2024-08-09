#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	std::string name;
	std::string target;
	std::cout << "\033[32minserisci il nome -> \033[37m" << std::flush;
	getline(std::cin, name);
	std::cout << "\033[32mInserisci il nome de bersaglio -> \033[37m" << std::flush;
	getline(std::cin, target);
	DiamondTrap	DiamondTrap(name);
	DiamondTrap.attack(target);
	DiamondTrap.takeDamage(DiamondTrap.getA());
	DiamondTrap.beRepaired(DiamondTrap.getE());
	DiamondTrap.guardGate();
	DiamondTrap.highFivesGuys();
	DiamondTrap.whoAmI();
	return(0);
}