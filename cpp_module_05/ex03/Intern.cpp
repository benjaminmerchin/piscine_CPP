#include "Intern.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

Intern::Intern() {
	std::cout << "Intern created with default constructor" << std::endl;
}

Intern::Intern(Intern const & src) {
	std::cout << "Intern created with src constructor" << std::endl;
}

Intern::~Intern() {
	std::cout << "Intern destructed" << std::endl;
}

/* -------------------------------------------------- */
/* -------------------- OPERATOR -------------------- */
/* -------------------------------------------------- */

Intern & Intern::operator=(Intern const & rhs) {
	(void)rhs;
	return *this;
}

/* -------------------------------------------------- */
/* --------------- GETTERS / SETTERS ---------------- */
/* -------------------------------------------------- */

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */

/*
Données d'entrée:
-nom du form
-cible du forme

Données de sortie:
-un pointeur sur Form (un pointeur sur la classe de Form concret représentée par le premier paramètre, initialisée avec le deuxième paramètre)
*/


Form * Intern::makeForm(std::string form_name, std::string target) {
	std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};


	for (int i = 0; i < 3; i++) {
		if (forms[i] == form_name) {
			std::cout << "Intern creates " << form_name << std::endl;
			return new
		}
	}
	std::cout << "Form " << form_name << " not found" << std::endl;
	return NULL;
}
