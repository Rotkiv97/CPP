#include "ScavTrap.hpp"

////////////////introduzione classe////////////////////
ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "\033[32mDefault costructor ScavTap\033[37m " << name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[31mDefault destructor ScavTap\033[37m " << getName() << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap & ScavTrap) : ClapTrap(_name)
{
	*this = ScavTrap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ScavTrap)
{
	if(this != &ScavTrap)
		this->_name_scavtrap = ScavTrap._name_scavtrap;
	return(*this);
}

void ScavTrap::guardGate()
{
	std::cout << "\033[36m" << getName() << "e' entrato in modalita' guardiano" << std::endl;
	std::cout << "\033[36m" << getName() << " e' diventato il guardiano perche' e' troppo forte\033[37m" << std::endl;	
}