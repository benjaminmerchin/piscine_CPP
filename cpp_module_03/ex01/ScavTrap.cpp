#include "ScavTrap.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

ScavTrap::ScavTrap(void) : _hitPoints(10), _energyPoints(10), _attackDamage(10) {
	_name = "Name";
	std::cout << "ScavTrap " << getName() << " constructed with default" << std::endl;
}

ScavTrap::ScavTrap(std::string const & name) : _hitPoints(10), _energyPoints(10), _attackDamage(10) {
	_name = name;
	std::cout << "ScavTrap " << getName() << " constructed with custom name" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap & src) {
	*this = src;
	std::cout << "ScavTrap " << getName() << " constructed with src" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " << getName() << " destructed" << std::endl;
}

/* -------------------------------------------------- */
/* -------------------- OPERATOR -------------------- */
/* -------------------------------------------------- */

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs) {
	ClapTrap::setName(rhs.getName());
	ClapTrap::setHitPoints(rhs.getHitPoints());
	ClapTrap::setEnergyPoints(rhs.getEnergyPoints());
	ClapTrap::setAttackDamage(rhs.getAttackDamage());
	return *this;
}

std::ostream & operator<<(std::ostream & o, ScavTrap const & rhs) {
	o << rhs.getName() << " has ";
	o << rhs.getHitPoints() << " hit points, ";
	o << rhs.getEnergyPoints() << " energy points, and ";
	o << rhs.getAttackDamage() << " attack damage.";
	return o;
}

/* -------------------------------------------------- */
/* --------------- GETTERS / SETTERS ---------------- */
/* -------------------------------------------------- */

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */
