#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) {
	Intern someRandomIntern;
	Form* rrf;

	rrf = someRandomIntern.makeForm("PomPom", "Bender");
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	delete rrf;
	/*Bureaucrat player1("player1", 1);
	Bureaucrat player2("player2", 140);
	ShrubberyCreationForm certificate;
	ShrubberyCreationForm contract;

	std::cout << "===========================================\n";

	player1.executeForm(certificate);

	try {
		player1.signForm(certificate);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	player1.executeForm(certificate);
	
	std::cout << "===========================================\n";

	try {
		player2.signForm(contract);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	player2.executeForm(contract);*/
}
