#include <iostream>
#include <string>

int main(int ac, char **av)
{
	(void)av;
	if (ac != 4)
	{
		std::cout << "Error: wrong number of arguments\n";
		return (1);
	}
	return (1);
}
