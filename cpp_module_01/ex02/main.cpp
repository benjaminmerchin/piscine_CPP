#include <iostream>

int main(void)
{
	std::string str;
	str += "HI THIS IS BRAIN";
	std::cout << "String: ";
	std::cout << str << std::endl;
	std::cout << std::endl;

	std::string* stringPTR;
	stringPTR = &str;

	std::string& stringREF = str;

	std::cout << "Address in memory of the string:   ";
	std::cout << &str << std::endl;
	std::cout << "Address in memory using stringPTR: ";
	std::cout << stringPTR << std::endl;
	std::cout << "Address in memory using stringREF: ";
	std::cout << &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << "String display with pointer:   ";
	std::cout << *stringPTR << std::endl;
	std::cout << "String display with reference: ";
	std::cout << stringREF << std::endl;

	return (0);
}