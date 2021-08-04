#include "Brain.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

Brain::Brain() {
	for (int i = 0; i < 100; i++) {
		_ideas[i] = "ideas";
	}
	std::cout << "Brain created with default constructor" << std::endl;
}

Brain::Brain(Brain const & src) {
	*this = src;
	std::cout << "Brain created with src" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructed" << std::endl;
}

/* -------------------------------------------------- */
/* -------------------- OPERATOR -------------------- */
/* -------------------------------------------------- */

Brain & Brain::operator=(Brain const & rhs) {
	for (int i = 0; i < 100; i++) {
		_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

/* -------------------------------------------------- */
/* --------------- GETTERS / SETTERS ---------------- */
/* -------------------------------------------------- */

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */

