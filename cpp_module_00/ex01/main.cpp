#include <iostream>
#include "directory.class.hpp"

void	search_contact(Directory contact[8], int contact_number)
{
	std::int16_t num;

	std::cout << "PHONE BOOK CONTACT LIST" << std::endl;
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i = 0; i < 8 && i < contact_number; i++)
	{
		std::cout << "         " << i << '|';
		contact[i].Directory::display();
		std::cout << std::endl;
	}
	std::cout << "Which Contact do you want to display completely?" << std::endl;
	std::cin >> num;
	if (num < contact_number && num >= 0)
		contact[num].Directory::display_all();
	else
		std::cout << "Incorrect Number" << std::endl;
}

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
				contact[contact_number].add_contact();
				contact_number++;
			}
		}
		else if (data == "SEARCH")
			search_contact(contact, contact_number);
		else if (data == "EXIT")
		{
			std::cout << "Shutting Down PhoneBook" << std::endl;
			return (0);
		}
		else
			std::cout << "Unknown Command, please enter ADD, SEARCH or EXIT" << std::endl;
	}
	return (0);
}
