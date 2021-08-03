#include "FragTrap.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

FragTrap::FragTrap(void) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << getName() << " constructed with default" << std::endl;
}

FragTrap::FragTrap(std::string const & name) : ClapTrap::ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << getName() << " constructed with custom name" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) {
	*this = src;
	std::cout << "FragTrap " << getName() << " constructed with src" << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap " << getName() << " destructed" << std::endl;
}

/* -------------------------------------------------- */
/* -------------------- OPERATOR -------------------- */
/* -------------------------------------------------- */

FragTrap & FragTrap::operator=(FragTrap const & rhs) {
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

void FragTrap::highFivesGuys(void) {
	std::cout << "Hey, it's me " << getName() << " the FragTrap! Give me a High Five!" << std::endl;
}
