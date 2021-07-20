#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	return ;
}

HumanB::~HumanB(void) {
	return ;
}

void	HumanB::attack(void) {
	std::cout << _name;
	std::cout << " attacks with his ";
	std::cout << _weapon->getType();
	std::cout << std::endl;
}

void	HumanB::setWeapon(Weapon &name) {
	_weapon = &name;
}
