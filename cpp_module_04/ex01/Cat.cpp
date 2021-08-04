#include "Cat.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

Cat::Cat() : Animal::Animal("Cat") {
	std::cout << "Cat created with default constructor" << std::endl;
}

Cat::Cat(Cat const & src) {
	*this = src;
	std::cout << "Cat created with src" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructed" << std::endl;
}

/* -------------------------------------------------- */
/* -------------------- OPERATOR -------------------- */
/* -------------------------------------------------- */

std::ostream & operator<<(std::ostream & o, Cat const & src) {
	o << "Hello, I'm a " << src.getType() << std::endl;
	return o;
}

Cat & Cat::operator=(Cat const & rhs) {
	_type = rhs.getType();
	return *this;
}

/* -------------------------------------------------- */
/* --------------- GETTERS / SETTERS ---------------- */
/* -------------------------------------------------- */

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */

void Cat::makeSound() const {
	std::cout << getType() << "'s sound: Meow!" << std::endl;
}
