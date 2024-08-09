#include "Fixed.hpp"

int const Fixed::_y = 8;// inizializzo la variabile statica

Fixed::Fixed() {}

Fixed::~Fixed(){}

float Fixed::toFloat() const
{
	float f =  (float)_i / (float)roundf(1 << _y);
	return(f);
}

void Fixed::setRowBits(int i)
{
	this->_i = i;
}

int Fixed::getRowBits()const
{
	return(_i);
}



void Fixed::setI(int i){
	this->_i = i >> _y;
}

int Fixed::getI(void)const
{
	return(_i >> 8);
}

Fixed::Fixed(int const i) {
	this->_i = i << _y;
}

Fixed::Fixed(float const f) {
	this->_i = roundf(f * (1 << _y));
}

Fixed &Fixed::operator=(const Fixed & Fixed)
{
	if(this != &Fixed)
		this->_i = Fixed._i;
	return(*this);
}

Fixed::Fixed(const Fixed &Fixed)
{
	*this = Fixed;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return(out);
}

/* operator (+, - , * , /)   */

Fixed Fixed::operator+(const Fixed & fixed)const
{
	Fixed tmp;
	int y = this->getRowBits() + fixed.getRowBits();
	tmp.setRowBits(y);
	return(tmp);
}

Fixed Fixed::operator*(const Fixed & fixed)const
{
	Fixed tmp;
	int y = (this->getRowBits() * fixed.getRowBits()) >> _y;
	tmp.setRowBits(y);
	return(tmp);
}

Fixed Fixed::operator/(const Fixed & fixed)const
{
	Fixed tmp;
	int y = (this->getRowBits() / fixed.getRowBits()) >> _y;
	tmp.setRowBits(y);
	return(tmp);
}

Fixed Fixed::operator-(const Fixed & fixed)const
{
	Fixed tmp;
	int y = this->getRowBits() - fixed.getRowBits();
	tmp.setRowBits(y);
	return(tmp);	 
}
/* operator (<,>,<=,>=,==, !=) */

bool Fixed::operator>(const Fixed & Fixed) const
{
	if(this->_i > Fixed._i)
		return(true);
	return (false);
}

bool Fixed::operator<(const Fixed & Fixed) const
{
	if(this->_i < Fixed._i)
		return(true);
	return (false);
}

bool Fixed::operator>=(const Fixed & Fixed) const
{
	if(this->_i >= Fixed._i)
		return(true);
	return (false);
}

bool Fixed::operator<=(const Fixed & Fixed) const
{
	if(this->_i <= Fixed._i)
		return(true);
	return (false);
}

bool Fixed::operator==(const Fixed & Fixed) const
{
	if(this->_i == Fixed._i)
		return(true);
	return (false);
}

bool Fixed::operator!=(const Fixed & Fixed) const
{
	if(this->_i != Fixed._i)
		return(true);
	return (false);
}

/* operator (++p, p++, --p, p--) */

Fixed &Fixed::operator++()
{
	_i++;
	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++*this;
	return(tmp);	
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--*this;
	return(tmp);
}

Fixed &Fixed::operator--()
{
	_i--;
	return(*this);
}

Fixed &Fixed::min(Fixed &x, Fixed &y){
	if(x < y)
		return(x);
	else if(x > y)
		return(y);
	return(x);
}

const Fixed &Fixed::min(const Fixed &x,const Fixed &y){
	if(x < y)
		return(x);
	else if(x > y)
		return(y);
	return(x);
}

Fixed &Fixed::max(Fixed &x, Fixed &y){
	if(x < y)
		return(y);
	else if(x > y)
		return(x);
	return(x);
}

const Fixed &Fixed::max(const Fixed &x,const Fixed &y){
	
	if(x < y)
		return(y);
	else if(x > y)
		return(x);
	return(x);
}