#include "Intern.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

Intern::Intern() {
	std::cout << "Intern created with default constructor" << std::endl;
}

Intern::Intern(Intern const & src) {
	(void)src;
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
	Form * src[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};

	for (int i = 0; i < 3; i++) {
		if (forms[i] == form_name) {
			for (int j = 0; j < 3; j++) {
				if (j != i) {
					delete src[j];
					src[j] = NULL;
				}
			}
			std::cout << "> > > Intern creates " << form_name << std::endl;
			return src[i];
		}
	}
	for (int i = 0; i < 3; i++) {
		delete src[i];
		src[i] = NULL;
	}
	std::cout << "> > > Intern can't create form \"" << form_name << "\": it is not in the database" << std::endl;
	return NULL;
}
