#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {

	Bureaucrat player1("player1", 1);
	Bureaucrat player2("player2", 140);
	ShrubberyCreationForm certificate;
	ShrubberyCreationForm contract;

	std::cout << "===========================================\n";

	certificate.execute(player1);

	try {
		player1.signForm(certificate);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	certificate.execute(player1);
	
	std::cout << "===========================================\n";

	try {
		player2.signForm(contract);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	certificate.execute(player2);

	std::cout << "===========================================\n";
}
