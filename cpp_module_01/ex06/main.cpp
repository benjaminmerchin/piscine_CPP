#include "Karen.hpp"

int main(int ac, char **av)
{
	Karen	Mrs_Karen;

	if (ac != 2)
		return (1);
	std::map<std::string, int>	id;
    id["DEBUG"] = 1;
    id["INFO"] = 2;
    id["WARNING"] = 3;
    id["ERROR"] = 4;

	int val = id[av[1]];
	std::string level = av[1];
	if (level != "INFO" && level != "DEBUG" && level != "WARNING" && level != "ERROR")
		val = 5;
	switch (val)
	{
		case 1 :
		{
			std::cout << "[ DEBUG ]" << std::endl;
			Mrs_Karen.complain("DEBUG");
			std::cout << std::endl;
		}
		case 2 :
		{
			std::cout << "[ INFO ]" << std::endl;
			Mrs_Karen.complain("INFO");
			std::cout << std::endl;
		}
		case 3 :
		{
			std::cout << "[ WARNING ]" << std::endl;
			Mrs_Karen.complain("WARNING");
			std::cout << std::endl;
		}
		case 4 :
		{
			std::cout << "[ ERROR ]" << std::endl;
			Mrs_Karen.complain("ERROR");
			std::cout << std::endl;
		}
		default :
		{
			if (val != 5)
				break ;
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			std::cout << std::endl;
		}
	}
	return (0);
}
