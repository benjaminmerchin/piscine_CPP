#include "Bureaucrat.hpp"

int main(void) {

	Bureaucrat player1("player1", 1);
	Bureaucrat player2("player2", 150);
	Form certificate("CPP05", 50, 50);

	std::cout << "===========================================\n";

	std::cout << certificate;

	std::cout << "===========================================\n";

	try {
		player2.signForm(certificate);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		player1.signForm(certificate);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "===========================================\n";

	std::cout << certificate;

	std::cout << "===========================================\n";
}
