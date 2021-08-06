#include "Ice.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice created with default constructor" << std::endl;
}

Ice::Ice(Ice const & src)  : AMateria(src) {
	*this = src;
	std::cout << "Ice created with src" << std::endl;
}

/*Ice::Ice(std::string const & type) {
	_type = type;
	std::cout << "Ice created with type" << std::endl;
}*/

Ice::~Ice() {
	std::cout << "Ice destructed" << std::endl;
}

/* -------------------------------------------------- */
/* -------------------- OPERATOR -------------------- */
/* -------------------------------------------------- */

Ice & Ice::operator=(Ice const & rhs) {
	return *this;
}

/* -------------------------------------------------- */
/* --------------- GETTERS / SETTERS ---------------- */
/* -------------------------------------------------- */

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */

AMateria* Ice::clone() const {
	Ice* a = new Ice(*this);
	return a;
}