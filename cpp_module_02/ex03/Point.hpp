#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
public:
	Point(void);
	Point(Fixed const & x, Fixed const & y);
	Point(Point const & src);
	~Point(void);

	Point & operator=(Point const & rhs);

	Fixed getX(void) const;
	Fixed getY(void) const;

private:
	Fixed	_x;
	Fixed	_y;
};

std::ostream & operator<<(std::ostream & o, Point const & i);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
