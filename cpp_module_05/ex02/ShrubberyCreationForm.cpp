#include "ShrubberyCreationForm.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 137, 145), _target("noTarget") {
	std::cout << "ShrubberyCreationForm created with default constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 137, 145), _target(target) {
	std::cout << "ShrubberyCreationForm created with target" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src) {
	_target = src.getTarget();
	std::cout << "ShrubberyCreationForm created with src constructor" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructed" << std::endl;
}

/* -------------------------------------------------- */
/* -------------------- OPERATOR -------------------- */
/* -------------------------------------------------- */

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
	setSigned(rhs.getSigned());
	_target = rhs.getTarget();
	return *this;
}

/* -------------------------------------------------- */
/* --------------- GETTERS / SETTERS ---------------- */
/* -------------------------------------------------- */

std::string ShrubberyCreationForm::getTarget() const {return _target;}
void ShrubberyCreationForm::setTarget(std::string const target) {_target = target;}

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	try {
		checkBeforeExecute(executor);
	}
	catch (std::exception & e) {
		std::cout << e.what() << " to execute" << std::endl;
		throw Bureaucrat::FailException();
		return ;
	}
	
	std::string filename(_target + "_shrubbery");
	std::fstream output_fstream;
	output_fstream.open(filename, std::ios_base::out);
	if (!output_fstream.is_open()) {
		std::cout << "Failed to open " << filename << '\n';
	} else {
		output_fstream << "               ,@@@@@@@,\n       ,,,.   ,@@@@@@/@@,  .oo8888o.\n    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n   `&%\\ ` /%&'    |.|        \\ '|8'\n       |o|        | |         | |\n       |.|        | |         | |\n_\\._\\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
		std::cout << "ShrubberyCreationForm: Execution Completed" << std::endl;
	}
}
