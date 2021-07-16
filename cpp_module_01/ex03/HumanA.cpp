#include "HumanA.hpp"

void	HumanA::setName(std::string const & name) {
	HumanA::_name = name;
}

const std::string& HumanA::getName( void ) {
	std::string& ret = HumanA::_name;
	return ret;
}

void	HumanA::attack( void ) {
	std::cout << this->_name;
	std::cout << " attacks with his ";
	std::cout << this->_weapon_id.getType();
	std::cout << std::endl;
}

HumanA::HumanA(std::string const & name, Weapon weapon) : _name(name) {
	HumanA::_weapon_id = weapon;
	return ;
}

HumanA::~HumanA(void) {
	return ;
}
