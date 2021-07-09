#include <iostream>
#include "directory.class.hpp"

int main(void)
{
	Directory contact[8];
	std::string data;
	int	contact_number;

	contact_number = 0;
	while (1)
	{
		std::cin >> data;
		//std::cout << data << std::endl;
		if (data == "ADD")
		{
			if (contact_number == 8)
				std::cout << "The PhoneBook if already full sorry" << std::endl;
			else
			{
				contact_number++;
				Directory::add_contact(contact[contact_number]);
			}
		}
		if (data == "SEARCH")
		{
			std::cout << "EXIT" << std::endl;
		}
		if (data == "EXIT")
		{
			std::cout << "EXIT" << std::endl;
			return (0);
		}
	}
	return (0);
}
