#include "HumanB.hpp"

void	HumanB::setName(std::string const & name) {
	HumanB::_name = name;
}

const std::string& HumanB::getName( void ) {
	std::string& ret = HumanB::_name;
	return ret;
}

void	HumanB::attack( void ) {
	std::cout << _name;
	std::cout << " attacks with his ";
	std::cout << _weapon_id->getType();
	std::cout << std::endl;
}

HumanB::HumanB(std::string const & name) : _name(name) {
	return ;
}

HumanB::~HumanB(void) {
	return ;
}

void	HumanB::setWeapon(Weapon &weapon) {
	_weapon_id = &weapon;
	return ;
}
