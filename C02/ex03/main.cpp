#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
	Point point;
	Point const a(2.2, 2.2);
	Point const b(6.1, 2.5);
	Point const c(4.3, 5.4);
	Point const p(1.4, 1.2); 
	if(point.bsp(a, b, c, p))
		std::cout << "\033[32mEsisete il punto all'interno del triangolo\033[27m" << std::endl;
	else
		std::cout << "\033[31mNon esiste il punto alcun punto all'interno del triangolo\033[27m" << std::endl;
	return(0);
}