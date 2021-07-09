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
	std::cout << "first name" << std::endl;
	std::cin >> this->_first_name;
	std::cout << "last name" << std::endl;
	std::cin >> this->_last_name;
	std::cout << "nickname" << std::endl;
	std::cin >> this->_nickname;
	std::cout << "phone number" << std::endl;
	std::cin >> this->_phone_number;
	std::cout << "darkest secret" << std::endl;
	std::cin >> this->_darkest_secret;
}