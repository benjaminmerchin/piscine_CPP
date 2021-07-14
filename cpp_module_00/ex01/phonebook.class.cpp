#include <iostream>
#include "phonebook.class.hpp"

Phonebook::Phonebook(void) {
	return;
}

Phonebook::~Phonebook(void) {
	return;
}

void	searchContact(Directory contact[8], int contact_number)
{
	std::int16_t num;
	std::string data;

	std::cout << "PHONE BOOK CONTACT LIST" << std::endl;
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i = 0; i < 8 && i < contact_number; i++)
	{
		std::cout << "         " << i << '|';
		contact[i].Directory::display();
		std::cout << std::endl;
	}
	std::cout << "Which Contact do you want to display completely?" << std::endl;
	std::getline(std::cin, data);
	if (data[1] != '\0')
	{
		std::cout << "Incorrect Number" << std::endl;
		return ;
	}
	num = std::stoi(data);
	if (num < contact_number && num >= 0)
		contact[num].Directory::display_all();
	else
		std::cout << "Incorrect Number" << std::endl;
}

int Phonebook::launchPhonebook(void)
{
	std::string data;
	int	contact_number;

	std::cout << "Welcome to the PhoneBook! Please enter ADD, SEARCH or EXIT" << std::endl;
	contact_number = 0;
	while (std::getline(std::cin, data))
	{
		if (data == "ADD")
		{
			std::cout << "--------------------------------------" << std::endl;
			std::cout << "You Have Selected to ADD a new contact" << std::endl;
			if (contact_number == 8)
				std::cout << "The PhoneBook if already full sorry" << std::endl;
			else
			{
				contact[contact_number].add_contact();
				contact_number++;
			}
			std::cout << "--------------------------------------" << std::endl;
		}
		else if (data == "SEARCH")
			searchContact(contact, contact_number);
		else if (data == "EXIT")
		{
			std::cout << "Shutting Down PhoneBook" << std::endl;
			return (0);
		}
		else if (data[0] == 0)
		{
			data = "Invalid Content";
		}
		else
			std::cout << "Unknown Command, please enter ADD, SEARCH or EXIT" << std::endl;
	}
	return (0);
}
