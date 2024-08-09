#ifndef	FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:
		std::string _name_frag;
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap &FragTrap);
		FragTrap &operator=(const FragTrap &FragTrap);
		~FragTrap();
		void highFivesGuys();
};

#endif
