#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>
#include <iomanip>

class ClapTrap
{
	protected:
		std::string _name;
		int  _p_f;//vita
		int  _p_e;// punti energia
		int  _d_a;//danni a attacco
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap & ClapTrap);
		ClapTrap &operator=(const ClapTrap &ClapTrap);
		void attack(const std::string &target); //attocco
		void takeDamage(unsigned int amount);// subire danni
		void beRepaired(unsigned int amount);// essere riparato
		void setName(std::string name);
		void setF(int f);
		void setE(int e);
		void setA(int a);
		std::string getName();
		int	 getF();
		int  getE();
		int  getA();
		~ClapTrap();
};

/* 
	1) p attacca -1 (punto vita) al suo bersaglio -1(punto energia)
	2) p si ripara automaticamente do po un attacco +1 (punto vita) -1 (punto energia)
 */


#endif