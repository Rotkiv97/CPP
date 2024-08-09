#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		std::string _name_scavtrap;
		int _f;
		int _e;
		int _a;		
		
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &ScavTrap);
		ScavTrap &operator=(const ScavTrap& ScavTrap);
		void guardGate();// ScavTrap diventa un custode
		~ScavTrap();
};



#endif