#include "PresidentialPardonForm.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 5, 25), _target("noTarget") {
	std::cout << "PresidentialPardonForm created with default constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 5, 25), _target(target) {
	std::cout << "PresidentialPardonForm created with target" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src) {
	_target = src.getTarget();
	std::cout << "PresidentialPardonForm created with src constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm destructed" << std::endl;
}

/* -------------------------------------------------- */
/* -------------------- OPERATOR -------------------- */
/* -------------------------------------------------- */

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
	setSigned(rhs.getSigned());
	_target = rhs.getTarget();
	return *this;
}

/* -------------------------------------------------- */
/* --------------- GETTERS / SETTERS ---------------- */
/* -------------------------------------------------- */

std::string PresidentialPardonForm::getTarget() const {return _target;}
void PresidentialPardonForm::setTarget(std::string const target) {_target = target;}

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	try {
		checkBeforeExecute(executor);
	}
	catch (std::exception & e) {
		std::cout << e.what() << " to execute" << std::endl;
		throw Bureaucrat::FailException();
		return ;
	}
	
	std::cout << _target << " was pardoned by Zafod Beeblebrox\n";
}
