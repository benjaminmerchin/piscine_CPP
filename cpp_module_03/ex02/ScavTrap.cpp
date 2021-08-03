#include "ScavTrap.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

ScavTrap::ScavTrap(void) : _guard(false) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << getName() << " constructed with default" << std::endl;
}

ScavTrap::ScavTrap(std::string const & name) : _guard(false) {
	setName(name);
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << getName() << " constructed with custom name" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
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
	ScavTrap::setGuardGate(rhs.getGuardGate());
	return *this;
}

/* -------------------------------------------------- */
/* --------------- GETTERS / SETTERS ---------------- */
/* -------------------------------------------------- */

bool ScavTrap::getGuardGate(void) const {return _guard;}
void ScavTrap::setGuardGate(bool const status) {_guard = status;}

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */

void ScavTrap::attack(std::string const & target) {
	std::cout << "ScavTrap " << _name << " attack ";
	std::cout << target << ", causing ";
	std::cout << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
	_guard = true;
	std::cout << "ScavTrap " << getName() << " has entered in guard mode" << std::endl;
}

void ScavTrap::switchGuardGate() {
	_guard == true ? _guard = false : _guard = true;
	std::cout << "ScavTrap " << getName() << " has switched guard mode" << std::endl;
}
