#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name  + "_clap_name"), ScavTrap(name), FragTrap(name){
	this->_name = name;
	this->_f_d = FragTrap::_p_f;
	this->_e_d = ScavTrap::_e;
	this->_a_d = FragTrap::_d_a;
	std::cout << "\033[32mCostructor DiamondTrap\033[37m " << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "\033[31mDestructor DiamondTrap\033[37m "<< std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &DiamondTrap) : ClapTrap(_name  + "_clap_name"), ScavTrap(_name_scavtrap), FragTrap(_name_frag)
{
	*this = DiamondTrap;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &DiamondTrap)
{
	if(this != &DiamondTrap)
		this->_name = DiamondTrap._name;
	return(*this);
}


void DiamondTrap::whoAmI(){
	std::cout << _name << " \033[32m Diamond is Clap \033[37m" << ClapTrap::_name_clap << std::endl;
}
