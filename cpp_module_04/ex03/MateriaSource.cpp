#include "MateriaSource.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource created with default constructor" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & src) {
	*this = src;
	std::cout << "MateriaSource created with src" << std::endl;
}

/*Ice::Ice(std::string const & type) {
	_type = type;
	std::cout << "Ice created with type" << std::endl;
}*/

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructed" << std::endl;
}

/* -------------------------------------------------- */
/* -------------------- OPERATOR -------------------- */
/* -------------------------------------------------- */
/*
MateriaSource & MateriaSource::operator=(MateriaSource const & rhs) {
	_type = rhs.getType();
	return *this;
}*/

/* -------------------------------------------------- */
/* --------------- GETTERS / SETTERS ---------------- */
/* -------------------------------------------------- */

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */
