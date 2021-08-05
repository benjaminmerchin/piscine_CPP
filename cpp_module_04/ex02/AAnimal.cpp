#include "AAnimal.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

AAnimal::AAnimal() : _type("empty") {
	std::cout << "AAnimal created with default constructor" << std::endl;
}

AAnimal::AAnimal(std::string const & type) : _type(type) {
	std::cout << "AAnimal created with type" << std::endl;
}

AAnimal::AAnimal(AAnimal const & src) {
	*this = src;
	std::cout << "AAnimal created with src" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructed " << getType() << std::endl;
}

/* -------------------------------------------------- */
/* -------------------- OPERATOR -------------------- */
/* -------------------------------------------------- */

std::ostream & operator<<(std::ostream & o, AAnimal const & src) {
	o << "Hello, I'm an AAnimal and my type is " << src.getType() << std::endl;
	return o;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs) {
	_type = rhs.getType();
	return *this;
}

/* -------------------------------------------------- */
/* --------------- GETTERS / SETTERS ---------------- */
/* -------------------------------------------------- */

std::string AAnimal::getType(void) const {
	return _type;
}

void AAnimal::setType(std::string const type) {_type = type;}

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */

/*void AAnimal::makeSound() const {
	std::cout << getType() << "'s sound: Aaaaa!" << std::endl;
}*/
