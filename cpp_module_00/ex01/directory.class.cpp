#include <iostream>
#include "directory.class.hpp"

Directory::Directory(void) {
	_first_name = "";
	_last_name = "";
	_nickname = "";
	_phone_number = "";
	_darkest_secret = "";
	return;
}

Directory::~Directory(void) {
	return;
}

void	Directory::add_contact(void) {
	std::getline(std::cin, this->_first_name);
	std::cout << "first name" << std::endl;
	std::getline(std::cin, this->_first_name);
	std::cout << "last name" << std::endl;
	std::getline(std::cin, this->_last_name);
	std::cout << "nickname" << std::endl;
	std::getline(std::cin, this->_nickname);
	std::cout << "phone number" << std::endl;
	std::getline(std::cin, this->_phone_number);
	std::cout << "darkest secret" << std::endl;
	std::getline(std::cin, this->_darkest_secret);
}

void	Directory::display(void) const{
	if (this->_first_name.length() == 10)
		std::cout << this->_first_name;
	else if (this->_first_name.length() > 10)
	{
		for (int i = 0; i < 9; i++)
			std::cout << this->_first_name[i];
		std::cout << ".";
	}
	else
	{
		int a = 0;
		int len = this->_first_name.length();
		while (a++ < 10 - len)
			std::cout << " ";
		std::cout << this->_first_name;
	}
	std::cout << '|';
	if (this->_last_name.length() == 10)
		std::cout << this->_last_name;
	else if (this->_last_name.length() > 10)
	{
		for (int i = 0; i < 9; i++)
			std::cout << this->_last_name[i];
		std::cout << ".";
	}
	else
	{
		int a = 0;
		int len = this->_last_name.length();
		while (a++ < 10 - len)
			std::cout << " ";
		std::cout << this->_last_name;
	}
	std::cout << '|';
	if (this->_nickname.length() == 10)
		std::cout << this->_nickname;
	else if (this->_nickname.length() > 10)
	{
		for (int i = 0; i < 9; i++)
			std::cout << this->_nickname[i];
		std::cout << ".";
	}
	else
	{
		int a = 0;
		int len = this->_nickname.length();
		while (a++ < 10 - len)
			std::cout << " ";
		std::cout << this->_nickname;
	}
}

void	Directory::display_all(void) const{
	std::cout << "first name: ";
	std::cout << this->_first_name << std::endl;
	std::cout << "last name: ";
	std::cout << this->_last_name << std::endl;
	std::cout << "nickname: ";
	std::cout << this->_nickname << std::endl;
	std::cout << "phone number: ";
	std::cout << this->_phone_number << std::endl;
	std::cout << "darkest secret: ";
	std::cout << this->_darkest_secret << std::endl;
}