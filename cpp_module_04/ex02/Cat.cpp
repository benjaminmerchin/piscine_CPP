#include "Cat.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

Cat::Cat() : AAnimal("Cat") {
	_cat_brain = new Brain;
	std::cout << "Cat created with default constructor" << std::endl;
}

Cat::Cat(Cat const & src) : AAnimal(src) {
	_cat_brain = new Brain(*src._cat_brain);
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
	delete _cat_brain;
	_cat_brain = new Brain(*rhs._cat_brain);
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
