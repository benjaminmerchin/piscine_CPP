#include "RobotomyRequestForm.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 45, 72) {
	std::cout << "RobotomyRequestForm created with default constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src) {
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
	return *this;
}

/* -------------------------------------------------- */
/* --------------- GETTERS / SETTERS ---------------- */
/* -------------------------------------------------- */

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
		std::cout << executor.getName() << " was successfully robotomized\n";
	}
	else
		std::cout << executor.getName() << " failed to robotomize\n";
}
