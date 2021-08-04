#include "WrongAnimal.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

WrongAnimal::WrongAnimal() : _type("empty") {
	std::cout << "WrongAnimal created with default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const & type) : _type(type) {
	std::cout << "WrongAnimal created with type" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) {
	*this = src;
	std::cout << "WrongAnimal created with src" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructed " << getType() << std::endl;
}

/* -------------------------------------------------- */
/* -------------------- OPERATOR -------------------- */
/* -------------------------------------------------- */

std::ostream & operator<<(std::ostream & o, WrongAnimal const & src) {
	o << "Hello, I'm an WrongAnimal and my type is " << src.getType() << std::endl;
	return o;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs) {
	_type = rhs.getType();
	return *this;
}

/* -------------------------------------------------- */
/* --------------- GETTERS / SETTERS ---------------- */
/* -------------------------------------------------- */

std::string WrongAnimal::getType(void) const {
	return _type;
}

void WrongAnimal::setType(std::string const type) {_type = type;}

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */

void WrongAnimal::makeSound() const {
	std::cout << getType() << "'s sound: Aaaaa!" << std::endl;
}
