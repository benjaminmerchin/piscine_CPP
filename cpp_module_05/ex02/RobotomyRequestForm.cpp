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
		return ;
	}
	
	std::string filename(executor.getName() + "_shrubbery");
	std::fstream output_fstream;
	output_fstream.open(filename, std::ios_base::out);
	if (!output_fstream.is_open()) {
		std::cout << "Failed to open " << filename << '\n';
	} else {
		output_fstream << "               ,@@@@@@@,\n       ,,,.   ,@@@@@@/@@,  .oo8888o.\n    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n   `&%\\ ` /%&'    |.|        \\ '|8'\n       |o|        | |         | |\n       |.|        | |         | |\n_\\._\\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
		std::cout << "RobotomyRequestForm: Execution Completed" << std::endl;
	}
}
