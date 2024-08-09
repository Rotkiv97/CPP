#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _virgola_fissa;
		int const _raw;
	public:
		Fixed();
		Fixed(const Fixed &Fixed_i) ;
		Fixed&	operator=(const Fixed &Fixed_i);
		void	setRawBits(int const raw);
		int		getRawBits() const;
		~Fixed();
};

#endif