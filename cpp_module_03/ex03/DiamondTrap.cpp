#include "DiamondTrap.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

DiamondTrap::DiamondTrap(void) : ClapTrap::ClapTrap(), ScavTrap::ScavTrap(), FragTrap::FragTrap() {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	_name = "noName";
	setName(getName() + "_clap_name");
	std::cout << "DiamondTrap " << _name << " constructed with default" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const & name) : ClapTrap::ClapTrap(name), ScavTrap::ScavTrap(name), FragTrap::FragTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	_name = name;
	setName(name + "_clap_name");
	std::cout << "DiamondTrap " << _name << " constructed with custom name" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) {
	*this = src;
	std::cout << "DiamondTrap " << _name << " constructed with src" << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap " << _name << " destructed" << std::endl;
}

/* -------------------------------------------------- */
/* -------------------- OPERATOR -------------------- */
/* -------------------------------------------------- */

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs) {
	ClapTrap::setName(rhs.getName());
	ClapTrap::setHitPoints(rhs.getHitPoints());
	ClapTrap::setEnergyPoints(rhs.getEnergyPoints());
	ClapTrap::setAttackDamage(rhs.getAttackDamage());
	return *this;
}

/* -------------------------------------------------- */
/* --------------- GETTERS / SETTERS ---------------- */
/* -------------------------------------------------- */

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */

void DiamondTrap::whoAmI(void) {
	std::cout << "My name is " << _name << ", and my ClapTrap name is " << getName() << std::endl;
}
