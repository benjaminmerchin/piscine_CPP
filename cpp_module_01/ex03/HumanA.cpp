#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon & weapon) : _name(name), _weapon(weapon) {
	return ;
}

HumanA::~HumanA(void) {
	return ;
}

void	HumanA::attack(void) {
	std::cout << _name;
	std::cout << " attacks with his ";
	std::cout << _weapon.getType();
	std::cout << std::endl;
}
