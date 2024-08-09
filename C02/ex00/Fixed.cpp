#include "Fixed.hpp"

Fixed::Fixed() : _virgola_fissa(0), _raw(8)
{
	std::cout << "\033[32mDefault costructor called\033[37m" << std::endl;
}

Fixed::Fixed(const Fixed & Fixed): _raw(8)
{	
	std::cout << "\033[32mCopy costructor called\033[37m" << std::endl;
	*this = Fixed;
}

Fixed::~Fixed()
{
	std::cout << "\033[31mDestructor called\033[37m" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &Fixed)
{
	if(this != &Fixed){
		std::cout << "\033[34mCopy assignment operator called\033[37m" << std::endl;
		this->_virgola_fissa = Fixed._virgola_fissa;
	}
	return(*this);
}

void Fixed::setRawBits(int const raw)
{
	_virgola_fissa *= (1 << raw);
}

int Fixed::getRawBits() const
{
	std::cout << "\033[33mGetRawNits member function called\033[37m" << std::endl;
	return(_virgola_fissa * (_raw << 1));
}