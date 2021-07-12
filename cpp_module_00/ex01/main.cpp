#include <iostream>
#include "directory.class.hpp"

int main(void)
{
	Directory contact[8];
	std::string data;
	int	contact_number;

	std::cout << "Welcome to the PhoneBook! Please enter ADD, SEARCH or EXIT" << std::endl;
	contact_number = 0;
	while (1)
	{
		std::cin >> data;
		if (data == "ADD")
		{
			if (contact_number == 8)
				std::cout << "The PhoneBook if already full sorry" << std::endl;
			else
			{
				contact_number++;
				contact[contact_number].add_contact();
			}
		}
		else if (data == "SEARCH")
		{
			std::cout << "Work in progress" << std::endl;
			//Directory::search_contact();
		}
		else if (data == "EXIT")
		{
			std::cout << "EXIT" << std::endl;
			return (0);
		}
		else
			std::cout << "Unknown Command, please enter ADD, SEARCH or EXIT" << std::endl;
	}
	return (0);
}
