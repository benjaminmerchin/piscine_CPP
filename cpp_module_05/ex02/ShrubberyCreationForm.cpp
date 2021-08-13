#include "ShrubberyCreationForm.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

ShrubberyCreationForm::ShrubberyCreationForm() : _name("noName"), _sign(false), _required_sign(150), _required_execute(150) {
	std::cout << "ShrubberyCreationForm created with default constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : _name(src.getName()), _sign(src.getSigned()), _required_sign(src.getRequiredSign()), _required_execute(src.getRequiredExecute()) {
	if (_required_execute < 1 || _required_sign < 1)
		throw ShrubberyCreationForm::GradeTooHighException();
	if (_required_execute > 150 || _required_sign > 150)
		throw ShrubberyCreationForm::GradeTooLowException();
	std::cout << "ShrubberyCreationForm created with src constructor" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructed" << std::endl;
}

/* -------------------------------------------------- */
/* -------------------- OPERATOR -------------------- */
/* -------------------------------------------------- */

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) : Form(rhs) {
	return *this;
}

/* -------------------------------------------------- */
/* --------------- GETTERS / SETTERS ---------------- */
/* -------------------------------------------------- */

std::string ShrubberyCreationForm::getName() const {return _name;}
bool ShrubberyCreationForm::getSigned() const {return _sign;}
void ShrubberyCreationForm::setSigned(bool sign) {_sign = sign;}
int ShrubberyCreationForm::getRequiredSign() const {return _required_sign;}
int ShrubberyCreationForm::getRequiredExecute() const {return _required_execute;}

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */

ShrubberyCreationForm & ShrubberyCreationForm::beSigned(Bureaucrat const & b) {
	if (b.getGrade() <= getRequiredSign()) {
		setSigned(true);
	}
	else
		throw ShrubberyCreationForm::GradeTooLowException();
	return *this;
}
