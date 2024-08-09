#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"
#include <vector>

class Point
{
private:
	int const _x;//sono le coordinate di x
	int const _y;//  ||       ||     ||  y
	Fixed _Fixed;
public:
	Point();
	Point(const float x,const float y);
	Point(const Point & Point);
	Point &operator=(const Point & Point);
	bool bsp(const Point &a, const Point &b, const Point &c, const Point &Point);
	~Point();
};

std::ostream &operator<<(std::ostream &out, Point &p);



#endif