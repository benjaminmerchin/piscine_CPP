#include "Cure.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure created with default constructor" << std::endl;
}

Cure::Cure(Cure const & src) : AMateria(src) {
	*this = src;
	std::cout << "Cure created with src" << std::endl;
}

/*Cure::Cure(std::string const & type) {
	_type = type;
	std::cout << "Cure created with type" << std::endl;
}*/

Cure::~Cure() {
	std::cout << "Cure destructed" << std::endl;
}

/* -------------------------------------------------- */
/* -------------------- OPERATOR -------------------- */
/* -------------------------------------------------- */

Cure & Cure::operator=(Cure const & rhs) {
	_type = rhs.getType();
	return *this;
}

/* -------------------------------------------------- */
/* --------------- GETTERS / SETTERS ---------------- */
/* -------------------------------------------------- */

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */

AMateria* Cure::clone() const {
	Cure* a = new Cure(*this);
	return a;
}