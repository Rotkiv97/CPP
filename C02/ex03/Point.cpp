#include "Point.hpp"

Point::Point() : _x(0), _y(0){}

Point::Point(const float x,const float y) :_x(x), _y(y){

}

Point &Point::operator=(const Point & Point)
{
	if(this != &Point)
	{
		*((Fixed *)&_x) = Point._x;//qui fo il frazionamento del fixed al puntatore della coordinata
		*((Fixed *)&_y) = Point._y;
	}
	return(*this);
}

Point::Point(const Point &Point) : _x(0), _y(0) 
{
	*this = Point;
}

Point::~Point(){}

std::ostream &operator<<(std::ostream &out, Point &p)
{
	out << p;
	return(out);
}
