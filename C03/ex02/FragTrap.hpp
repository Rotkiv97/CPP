#ifndef	FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		std::string _name;
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap &FragTrap);
		FragTrap &operator=(const FragTrap &FragTrap);
		void highFivesGuys();
		~FragTrap();
};

#endif
