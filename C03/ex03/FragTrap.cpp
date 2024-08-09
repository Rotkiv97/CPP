#include "FragTrap.hpp"
//////////////settaggio calsse////////////////
FragTrap::FragTrap(std::string name) : _name_frag(name) ,ClapTrap(name)
{
	std::cout << "\033[32mDefault costructor FlagTrap\033[37m " <<std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "\033[31mDefault detructor FlagTrap\033[37m" << std::endl; 
}

FragTrap::FragTrap(const FragTrap &FragTrap) : ClapTrap(_name_clap)
{
	*this = FragTrap;
}

FragTrap &FragTrap::operator=(const FragTrap &FragTrap)
{
	if(this != &FragTrap)
		this->_name_frag = FragTrap._name_frag;
	return(*this);
}

void FragTrap::highFivesGuys(){
	std::cout << _name_frag << " \033[33mbatte il cique a tutti !!!!\033[37m" << std::endl;
}

