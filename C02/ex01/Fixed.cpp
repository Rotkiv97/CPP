#include "Fixed.hpp"

Fixed::Fixed(int const i) : _y(8)
{
	std::cout << "\033[32mCostructor called int\033[37m" << std::endl;
	this->_i = i << _y;
}


Fixed::Fixed(float const f) : _y(8)
{
	std::cout << "\033[32mCostructor called float\033[37m" << std::endl;
	this->_i = roundf(f*(1 << _y));
}

Fixed::Fixed(const Fixed & Fixed) : _y(8)
{
	std::cout << "\033[33mCopy costructor\033[37m" << std::endl;
	*this = Fixed;
}


Fixed &Fixed::operator=(const Fixed & Fixed)
{
	if(this != &Fixed){
		std::cout << "\033[33mCopy assigned operator called\033[37m" << std::endl;
		this->_i = Fixed._i;
	}
	return(*this);
}

float	Fixed::toFloat() const
{
	float f = _i / roundf(1 << _y);
	return(f);
}

int 	Fixed::toInt() const 
{
	
	int	i =  _i >>_y;
	return(i);
}




std::ostream & operator<<(std::ostream & out, const Fixed & Fixed)
{
	out << Fixed.toFloat();
	return(out);
}

Fixed::~Fixed()
{
	std::cout << "\033[31mDestructor called\033[37m" << std::endl;
}