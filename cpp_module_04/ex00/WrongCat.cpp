#include "WrongCat.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

WrongCat::WrongCat() : WrongAnimal::WrongAnimal("WrongCat") {
	std::cout << "WrongCat created with default constructor" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src) {
	*this = src;
	std::cout << "WrongCat created with src" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructed" << std::endl;
}

/* -------------------------------------------------- */
/* -------------------- OPERATOR -------------------- */
/* -------------------------------------------------- */

std::ostream & operator<<(std::ostream & o, WrongCat const & src) {
	o << "Hello, I'm a " << src.getType() << std::endl;
	return o;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs) {
	_type = rhs.getType();
	return *this;
}

/* -------------------------------------------------- */
/* --------------- GETTERS / SETTERS ---------------- */
/* -------------------------------------------------- */

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */

void WrongCat::makeSound() const {
	std::cout << getType() << "'s sound: Meow!" << std::endl;
}
