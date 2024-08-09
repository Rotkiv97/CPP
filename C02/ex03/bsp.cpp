#include "Point.hpp"

bool	Point::bsp(const Point &a, const Point &b, const Point &c, const Point &p)
{
	Fixed d1 = ((p._x - b._x) * (p._y - c._y)) - ((p._x - c._x) * (p._y - b._y));
	Fixed d2 = ((a._x - p._x) * (a._y - c._y)) - ((a._x - c._x) * (a._y - p._y));
	Fixed d3 = ((a._x - b._x) * (a._y - p._y)) - ((a._x - p._x) * (a._y - b._y));

	if((d1 >= 0 && d2 >= 0 && d3 >= 0))
		return(true);
	else if((d1 <= 0 && d2 <= 0 && d3 <= 0))
		return(true);
	else
		return(false);
	return(true);
}