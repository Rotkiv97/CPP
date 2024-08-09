#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>
#include <string>

class Fixed
{
	private:
		int _i;
		float _f;
		int _y;
	public:
		Fixed(int const i);
		Fixed(float const f);
		Fixed(const Fixed &Fixed);
		Fixed & operator=(const Fixed & Fiexed);
		float toFloat() const;
		int	  toInt() const;
		~Fixed();
};

std::ostream &operator<<(std::ostream &out, const Fixed & Fixed);


#endif