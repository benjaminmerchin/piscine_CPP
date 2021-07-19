#include "Weapon.hpp"

void	Weapon::setType(std::string name) {
	_name = name;
}

const std::string& Weapon::getType( void ) {
	return _name;
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
