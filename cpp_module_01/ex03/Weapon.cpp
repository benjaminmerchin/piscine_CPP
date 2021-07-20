#include "Weapon.hpp"

Weapon::Weapon(std::string name) : _weapon_name(name) {
	return ;
}

std::string& Weapon::getType(void) {
	//std::cout << _weapon_name << std::endl;
	return _weapon_name;
}

void	Weapon::setType(std::string name) {
	_weapon_name = name;
}
