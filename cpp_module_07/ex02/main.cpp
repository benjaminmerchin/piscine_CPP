#include "Array.hpp"

int main(void) {
	int * a = new int();

	std::cout << *a << std::endl;
	
	*a=1;

	std::cout << *a << std::endl;
	return 0;
}
