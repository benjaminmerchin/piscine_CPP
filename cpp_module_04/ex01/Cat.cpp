#include "Cat.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

Cat::Cat() : Animal::Animal("Cat") {
	_cat_brain = new Brain;
	std::cout << "Cat created with default constructor" << std::endl;
}

Cat::Cat(Cat const & src) {
	*this = src;
	std::cout << "Cat created with src" << std::endl;
}

Cat::~Cat() {
	delete _cat_brain;
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
	_cat_brain = new Brain();
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
