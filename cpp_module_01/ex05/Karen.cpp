#include "Karen.hpp"

Karen::Karen(void) {
	return ;
}

Karen::~Karen(void) {
	return ;
}

void	Karen::debug(void) {
	std::cout <<  "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void) {
	std::cout <<  "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void) {
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void) {
	std::cout <<  "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level) {
	if (level != "INFO" && level != "DEBUG" && level != "WARNING" && level != "ERROR")
		return ;

	if (level == "DEBUG")
		debug();	
	else if (level == "INFO")
		info();
	else if (level == "WARNING")
		warning();
	else if (level == "ERROR")
		error();
	/*std::map<std::string, void *ptr() = 0;> 	table;
    table["INFO"] = &Karen::info;
    table["DEBUG"] = &Karen::debug;
    table["WARNING"] = &Karen::warning;
    table["ERROR"] = &Karen::error;

    (this->*table[level])();*/
	return ;
}
