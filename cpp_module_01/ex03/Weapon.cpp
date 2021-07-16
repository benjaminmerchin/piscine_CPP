#include "Weapon.hpp"

void	Weapon::setType(std::string name) {
	std::cout << "(" << name << ")"; //
	Weapon::_name = name;
	std::cout << "(" << Weapon::_name << ")"; //
}

const std::string& Weapon::getType( void ) {
	std::string& ret = Weapon::_name;
	return ret;
}

Weapon::Weapon(std::string name) : _name(name) {
	return ;
}

Weapon::~Weapon(void) {
	return ;
}

Weapon::Weapon(void) {
	return ;
}
