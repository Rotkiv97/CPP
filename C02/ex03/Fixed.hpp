#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		static int const _y;
		float _f;
		int	  _i;
	public:
		Fixed();
		Fixed(int const i);
		Fixed(float const f);
		Fixed(const Fixed &Fixed);
		Fixed &operator=(const Fixed & Fixed);
		float toFloat() const;
		void setRowBits(int i);
		int getRowBits()const;
		int getI() const;
		void setI(int i);
		
		
		static Fixed &min(Fixed &x ,  Fixed &y);
		static const Fixed &min(const Fixed &x, const Fixed &y);
		static const Fixed &max(const Fixed &x, const Fixed &y);
		static Fixed &max(Fixed &x ,  Fixed &y);
		
		
		Fixed operator+(const Fixed & Fixed) const;
		Fixed operator-(const Fixed & Fixed) const;
		Fixed operator*(const Fixed & Fixed) const;
		Fixed operator/(const Fixed & Fixed) const;
		
		bool operator>(const Fixed & Fixed) const;
		bool operator<(const Fixed & Fixed) const;
		bool operator>=(const Fixed & Fixed) const;
		bool operator<=(const Fixed & Fixed) const;
		bool operator!=(const Fixed & Fixed) const;
		bool operator==(const Fixed & Fixed) const;

		Fixed &operator++(); //pre incremento
		Fixed operator++(int); // post inremento
		Fixed &operator--(); // pre decremento
		Fixed operator--(int); // pos decremento
		~Fixed();
};

std::ostream &operator<<(std::ostream &out,const Fixed &Fixed);





#endif