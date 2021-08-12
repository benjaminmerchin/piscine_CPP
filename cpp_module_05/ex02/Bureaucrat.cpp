#include "Bureaucrat.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

Bureaucrat::Bureaucrat() {
	_name = "noName";
	_grade = 1;
	std::cout << "Bureaucrat created with default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	std::cout << "Bureaucrat created with values" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {
	_grade = src.getGrade();
	_name = src.getName();
	std::cout << "Bureaucrat created with src constructor" << std::endl;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructed" << std::endl;
}

/* -------------------------------------------------- */
/* -------------------- OPERATOR -------------------- */
/* -------------------------------------------------- */

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {
	_grade = rhs.getGrade();
	_name = rhs.getName();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & src) {
	o << src.getName() << ", is a bureaucrat graded: " << src.getGrade() << std::endl;
	return o;
}

/* -------------------------------------------------- */
/* --------------- GETTERS / SETTERS ---------------- */
/* -------------------------------------------------- */

std::string Bureaucrat::getName() const {return _name;}
void Bureaucrat::setName(std::string const name) {_name = name;}
int Bureaucrat::getGrade() const {return _grade;}
void Bureaucrat::setGrade(int const grade) {_grade = grade;}

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */

void Bureaucrat::incrementGrade() {
	if (_grade > 1)
		_grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade() {
	if (_grade < 150)
		_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form & f) {
	try {
		f.beSigned(*this);
	}
	catch (Form::GradeTooLowException & e) {
		std::cout << getName() << " cannot sign because " << e.what() << std::endl;
		return ;
	}
	catch (Form::GradeTooHighException & e) {
		std::cout << getName() << " cannot sign because " << e.what() << std::endl;
		return ;
	}
	std::cout << getName() << " signs " << f.getName() << std::endl;
}
