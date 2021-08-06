#include "AMateria.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

AMateria::AMateria() {
	_type = "empty";
	std::cout << "AMateria created with default constructor" << std::endl;
}

AMateria::AMateria(std::string const & type) {
	_type = type;
	std::cout << "AMateria created with type" << std::endl;
}

AMateria::AMateria(AMateria const & src) {
	_type = src.getType();
	std::cout << "AMateria created with src constructor" << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructed" << std::endl;
}

/* -------------------------------------------------- */
/* -------------------- OPERATOR -------------------- */
/* -------------------------------------------------- */

AMateria & AMateria::operator=(AMateria const & rhs) {
	_type = rhs.getType();
	return *this;
}

/* -------------------------------------------------- */
/* --------------- GETTERS / SETTERS ---------------- */
/* -------------------------------------------------- */

std::string const & AMateria::getType() const {
	return _type;
}

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */
