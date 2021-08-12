#include "Form.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

Form::Form() : _name("noName"), _required_execute(150), _required_sign(150), _sign(false) {
	std::cout << "Form created with default constructor" << std::endl;
}

Form::Form(std::string name, int required_execute, int required_sign) : _name(name), _required_execute(required_execute), _required_sign(required_sign), _sign(false) {
	if (required_execute < 1 || required_sign < 1)
		throw Form::GradeTooHighException();
	if (required_execute > 150 || required_sign > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form created with values" << std::endl;
}

Form::Form(Form const & src) : _name(src.getName()), _required_execute(src.getRequiredExecute()), _required_sign(src.getRequiredSign()), _sign(src.getSigned()) {
	std::cout << "Form created with src constructor" << std::endl;
}

Form::~Form() {
	std::cout << "Form destructed" << std::endl;
}

/* -------------------------------------------------- */
/* -------------------- OPERATOR -------------------- */
/* -------------------------------------------------- */

Form & Form::operator=(Form const & rhs) {
	_sign = rhs.getSigned();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Form const & src) {
	o << src.getName() << ", is a Form with a signature: " << (src.getSigned()?"Yes":"No") << ", req.sign:" << src.getRequiredSign() << ", req.exec:" << src.getRequiredExecute() << std::endl;
	return o;
}

/* -------------------------------------------------- */
/* --------------- GETTERS / SETTERS ---------------- */
/* -------------------------------------------------- */

std::string Form::getName() const {return _name;}
bool Form::getSigned() const {return _sign;}
void Form::setSigned(bool sign) {_sign = sign;}
int Form::getRequiredSign() const {return _required_sign;}
int Form::getRequiredExecute() const {return _required_execute;}

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */

Form & Form::beSigned(Bureaucrat const & b) {
	if (b.getGrade() < 1)
		throw Bureaucrat::GradeTooHighException();
	if (b.getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
	if (b.getGrade() <= getRequiredSign()) {
		setSigned(true);
	}
	else
		Form::GradeTooLowException();
	return *this;
}
