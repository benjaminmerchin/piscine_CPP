#include "ClapTrap.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

ClapTrap::ClapTrap(void) : _hitPoints(10), _energyPoints(10), _attackDamage(10) {
	_name = "Name";
}

ClapTrap::ClapTrap(ClapTrap & src) {
	*this = src;
}

ClapTrap::~ClapTrap(void) {}

/* -------------------------------------------------- */
/* -------------------- OPERATOR -------------------- */
/* -------------------------------------------------- */

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs) {}

std::ostream & operator<<(std::ostream & o, ClapTrap const & rhs) {
	//o << rhs.toFloat();
	return o;
} 

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */
