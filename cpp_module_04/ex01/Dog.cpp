#include "Dog.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

Dog::Dog() : Animal::Animal("Dog") {
	_dog_brain = new Brain;
	std::cout << "Dog created with default constructor" << std::endl;
}

Dog::Dog(Dog const & src) {
	*this = src;
	std::cout << "Dog created with src" << std::endl;
}

Dog::~Dog() {
	delete _dog_brain;
	std::cout << "Dog destructed" << std::endl;
}

/* -------------------------------------------------- */
/* -------------------- OPERATOR -------------------- */
/* -------------------------------------------------- */

std::ostream & operator<<(std::ostream & o, Dog const & src) {
	o << "Hello, I'm a " << src.getType() << std::endl;
	return o;
}

Dog & Dog::operator=(Dog const & rhs) {
	_type = rhs.getType();
	return *this;
}

/* -------------------------------------------------- */
/* --------------- GETTERS / SETTERS ---------------- */
/* -------------------------------------------------- */

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */

void Dog::makeSound() const {
	std::cout << getType() << "'s sound: Woof!" << std::endl;
}
