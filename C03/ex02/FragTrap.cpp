#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _name(name)  ,ClapTrap(name){
	std::cout << "\033[32mCostructor FragTrap\033[37m " <<std::endl;
}

FragTrap::FragTrap(const FragTrap &FragTrap) : ClapTrap(_name){
	*this = FragTrap;
}

FragTrap &FragTrap::operator=(const FragTrap &FragTrap)
{
	if(this != &FragTrap)
		this->_name = FragTrap._name;
	return(*this);
}

FragTrap::~FragTrap(){
	std::cout << "\033[31mDetructor FlagTrap\033[37m" << std::endl; 
}

void FragTrap::highFivesGuys(){
	std::cout << "\033[33m" << getName() << " batte il cique a tutti !!!!\033[37m" << std::endl;
}