#include "PresidentialPardonForm.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 5, 25) {
	std::cout << "PresidentialPardonForm created with default constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src) {
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
	return *this;
}

/* -------------------------------------------------- */
/* --------------- GETTERS / SETTERS ---------------- */
/* -------------------------------------------------- */

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
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
		std::cout << "PresidentialPardonForm: Execution Completed" << std::endl;
	}
}
