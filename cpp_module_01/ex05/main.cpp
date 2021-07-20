#include "Karen.hpp"

int main(void)
{
	Karen	Mrs_Karen;

	std::cout << "--------------------------------------" << std::endl;
	Mrs_Karen.complain("DEBUG");
	std::cout << "--------------------------------------" << std::endl;
	Mrs_Karen.complain("INFO");
	std::cout << "--------------------------------------" << std::endl;
	Mrs_Karen.complain("WARNING");
	std::cout << "--------------------------------------" << std::endl;
	Mrs_Karen.complain("ERROR");
	Mrs_Karen.complain("");
	Mrs_Karen.complain("wrong_entry");
	return (0);
}
