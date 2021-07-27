#include "Fixed.hpp"
#include "Point.hpp"

int main(void) {

	Fixed const a(0);
	Fixed const b(20);
	Fixed const c(2);

	Point const i(a, a);
	Point const j(b, a);
	Point const k(a, b);
	Point const l(c, c);
	Point const m(b, b);

	std::cout << "Some points and their position:" << std::endl;
	std::cout << "i is " << i << std::endl;
	std::cout << "j is " << j << std::endl;
	std::cout << "k is " << k << std::endl;
	std::cout << "l is " << l << std::endl;
	std::cout << "m is " << m << std::endl;
	std::cout << std::endl;

	std::cout << "We consider the triangle ijk" << std::endl;
	std::cout << "l inside = " << (int)bsp(i, j, k, l) << "     (expecting 1)" << std::endl;
	std::cout << "m inside = " << (int)bsp(i, j, k, m) << "     (expecting 0)" << std::endl;
	return 0;
}
