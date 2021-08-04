#include "Animal.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

Animal::Animal() : _type("empty") {
	std::cout << "Animal created with default constructor" << std::endl;
}

Animal::Animal(std::string const & type) : _type(type) {
	std::cout << "Animal created with type" << std::endl;
}

Animal::Animal(Animal const & src) {
	*this = src;
	std::cout << "Animal created with src" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructed " << getType() << std::endl;
}

/* -------------------------------------------------- */
/* -------------------- OPERATOR -------------------- */
/* -------------------------------------------------- */

std::ostream & operator<<(std::ostream & o, Animal const & src) {
	o << "Hello, I'm an Animal and my type is " << src.getType() << std::endl;
	return o;
}

Animal & Animal::operator=(Animal const & rhs) {
	_type = rhs.getType();
	return *this;
}

/* -------------------------------------------------- */
/* --------------- GETTERS / SETTERS ---------------- */
/* -------------------------------------------------- */

std::string Animal::getType(void) const {
	return _type;
}

void Animal::setType(std::string const type) {_type = type;}

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */

void Animal::makeSound() const {
	std::cout << getType() << "'s sound: Aaaaa!" << std::endl;
}
