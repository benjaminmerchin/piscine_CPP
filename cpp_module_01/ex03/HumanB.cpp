#include "HumanB.hpp"

void	HumanB::setName(std::string const & name) {
	HumanB::_name = name;
}

const std::string& HumanB::getName( void ) {
	std::string& ret = HumanB::_name;
	return ret;
}

void	HumanB::attack( void ) {
	std::cout << this->_name;
	std::cout << " attacks with his ";
	std::cout << this->_weapon_id.getType();
}

HumanB::HumanB(std::string const & name, Weapon weapon) : _name(name) {
	HumanB::_weapon_id = weapon;
	return ;
}

HumanB::~HumanB(void) {
	return ;
}
