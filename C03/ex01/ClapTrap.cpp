
#include "ClapTrap.hpp"

///////////////////////////////////introduzione classe/////////////////////////////////////////////

ClapTrap::ClapTrap(std::string name) : _name(name), _p_f(100) , _p_e(100), _d_a(20)
{
	std::cout << "\033[32mCostructor ClapTrap\033[37m " << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "\033[31mDestructor ClapTrap\033[37m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ClapTrap){
	*this = ClapTrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ClapTrap)
{
	if(this != &ClapTrap)
		this->_name = ClapTrap._name;
	return(*this);
}

void ClapTrap::setName(std::string name){
	this->_name = name;
}

void ClapTrap::setF(int f){
	this->_p_f = f;
}

void ClapTrap::setE(int e){
	this->_p_e = e;
}

std::string ClapTrap::getName(){
	return(this->_name);
}


void ClapTrap::setA(int a){
	this->_d_a = a;
}

int ClapTrap::getA(){
	return(this->_d_a);
}

int ClapTrap::getF(){
	return(this->_p_f);
}

int ClapTrap::getE(){
	return(this->_p_e);
}
//////////////////////////////////////////////////////////////////////////////////////////////

void ClapTrap::attack(const std::string &target)
{
	for(int i = 0; i < 1; i++)
	{
		if(_p_f > 0 && _p_e > 0)
		{
			std::cout << "\033[33m" << getName() << " si arrabbia con " << target;
			std::cout << " prende una sedia e attacca con un danno pari a " << getA();
			std::cout << std::endl;
			setE(_p_e - 1);
		}
		else 
			std::cout << getName() << "\033[31m non puo' attacare non ha abbastanza energia \033[37m" << std::endl;
		std::cout << "\033[33mL'energia rimasta e' = " << getE() << "\033[37m" << std::endl;
	}
}



void ClapTrap::takeDamage(unsigned int amount)
{
	if(amount > 0)
		std::cout << "\033[32m("<< getName() <<" ha danneggiato ) "  << amount << "\033[37m" << std::endl;
	else if(amount == 0)
		std::cout << "\033[31m(L'attacco e' stato nullo ) " << amount << "\033[37m" << std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(amount > 0)
	{
		std::cout << "\033[34m" << _name << " si sta riparando cosi puo recuperare un punto vita\033[37m" << std::endl;
		if(getF() < 10)
		{
			setF(getF() + 1);
			std::cout << _name << " ha recuperato un punto vita " << getF() << std::endl;
		}
		else
			std::cout << _name << " ha gia' la vita al massimo " << getF() << std::endl;
		amount -= 1;
		setE(amount);
		std::cout << "\033[33ml'energia rimasta e' = " << amount << "\033[37m" << std::endl;
	}
	else
		std::cout << "\033[31mnon si puo piu riparare non ha abbastanza energia\033[37m" << std::endl;
}