#include "ClapTrap.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

ClapTrap::ClapTrap(void) : _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	_name = "noName";
}

ClapTrap::ClapTrap(std::string const & name) : _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	_name = name;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	*this = src;
}

ClapTrap::~ClapTrap(void) {}

/* -------------------------------------------------- */
/* -------------------- OPERATOR -------------------- */
/* -------------------------------------------------- */

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs) {
	_name = rhs.getName();
	_hitPoints = rhs.getHitPoints();
	_energyPoints = rhs.getEnergyPoints();
	_attackDamage = rhs.getAttackDamage();
	return *this;
}

std::ostream & operator<<(std::ostream & o, ClapTrap const & rhs) {
	o << rhs.getName() << " has ";
	o << rhs.getHitPoints() << " hit points, ";
	o << rhs.getEnergyPoints() << " energy points, and ";
	o << rhs.getAttackDamage() << " attack damage.";
	return o;
}

/* -------------------------------------------------- */
/* --------------- GETTERS / SETTERS ---------------- */
/* -------------------------------------------------- */

std::string ClapTrap::getName(void) const {
	return _name;
}

int ClapTrap::getHitPoints(void) const {
	return _hitPoints;
}

int ClapTrap::getEnergyPoints(void) const {
	return _energyPoints;
}

int ClapTrap::getAttackDamage(void) const {
	return _attackDamage;
}

void ClapTrap::setName(std::string const name) {
	_name = name;
}

void ClapTrap::setHitPoints(int const hitPoints) {
	_hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(int const energyPoints) {
	_energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(int const attackDamage) {
	_attackDamage = attackDamage;
}

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */

void ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << _name << " attack ";
	std::cout << target << ", causing ";
	std::cout << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " took ";
	std::cout << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " took ";
	std::cout << amount << " repair points!" << std::endl;
}
