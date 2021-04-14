#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

#include <string>

class Point
{
public:
	Point() : _x(0) , _y(0)
	{

	}

	Point(int x, int y) : _x(x), _y(y)
	{

	}

	Point operator+(const Point& other)const
	{
		return Point(_x + other._x, _y + other._y);
	}

	Point operator-(const Point& other)const
	{
		return Point(_x - other._x, _y - other._y);
	}

	Point operator*(const Point& other)const
	{
		return Point(_x * other._x, _y * other._y);
	}

	Point operator-() const
	{
		return Point(-_x, -_y);
	}

	bool operator==(const Point& other) const 
	{
		return _x == other._x && _y == other._y;
	}

	bool operator!=(const Point& other) const
	{
		return !(*this == other);
	}

	std::string to_string()
	{
		return  "(" + std::to_string(_x) + ", " + std::to_string(_y) + ")";
	}

	int _x;
	int _y;
};

/*std::ostream &operator<<(std::ostream &out, const Point &value)
{
	return out << "(" << value._x << ", " << value._y << ")";

}*/

#endif //POINT_HPP