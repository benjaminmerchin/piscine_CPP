#include "Point.hpp"

//https://stackoverflow.com/questions/13300904/determine-whether-point-lies-inside-triangle

bool bsp( Point const p1, Point const p2, Point const p3, Point const point) {
	Fixed alpha = ((p2.getY() - p3.getY())*(point.getX() - p3.getX()) + (p3.getX() - p2.getX())*(point.getY() - p3.getY())) /
		((p2.getY() - p3.getY())*(p1.getX() - p3.getX()) + (p3.getX() - p2.getX())*(p1.getY() - p3.getY()));
	Fixed beta = ((p3.getY() - p1.getY())*(point.getX() - p3.getX()) + (p1.getX() - p3.getX())*(point.getY() - p3.getY())) /
		((p2.getY() - p3.getY())*(p1.getX() - p3.getX()) + (p3.getX() - p2.getX())*(p1.getY() - p3.getY()));
	Fixed gamma = Fixed(1.0f) - alpha - beta;
	if (alpha > 0 && beta > 0 && gamma > 0)
		return true;
	return false;
}
