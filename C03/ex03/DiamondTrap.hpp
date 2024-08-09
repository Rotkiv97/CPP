#ifndef	DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>
#include <iomanip>


class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _name;
		int _f_d;
		int _e_d;
		int _a_d;
	public:
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &DiamondTrap);
		DiamondTrap &operator=(const DiamondTrap &DiamondTrap);
		using ScavTrap::attack;
		void whoAmI();
		~DiamondTrap();
};


#endif