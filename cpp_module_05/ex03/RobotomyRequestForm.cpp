#include "RobotomyRequestForm.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 45, 72), _target("noTarget") {
	std::cout << "RobotomyRequestForm created with default constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 45, 72), _target(target) {
	std::cout << "RobotomyRequestForm created with target" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src) {
	_target = src.getTarget();
	std::cout << "RobotomyRequestForm created with src constructor" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destructed" << std::endl;
}

/* -------------------------------------------------- */
/* -------------------- OPERATOR -------------------- */
/* -------------------------------------------------- */

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
	setSigned(rhs.getSigned());
	_target = rhs.getTarget();
	return *this;
}

/* -------------------------------------------------- */
/* --------------- GETTERS / SETTERS ---------------- */
/* -------------------------------------------------- */

std::string RobotomyRequestForm::getTarget() const {return _target;}
void RobotomyRequestForm::setTarget(std::string const target) {_target = target;}

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	try {
		checkBeforeExecute(executor);
	}
	catch (std::exception & e) {
		std::cout << e.what() << " to execute" << std::endl;
		throw Bureaucrat::FailException();
		return ;
	}
	
	std::srand(std::time(nullptr));
	int random_variable = std::rand();
	std::cout << "TAK TAK TAK TAK TAK ";
	if (random_variable%2==0) {
		std::cout << _target << " was successfully robotomized\n";
	}
	else
		std::cout << _target << " failed to robotomize\n";
}
