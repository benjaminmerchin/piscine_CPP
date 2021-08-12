#include "Bureaucrat.hpp"

int main(void) {
	try {
		Bureaucrat player0("player0", 151);
	}
	catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat player1("player1", 0);
	}
	catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << e.what() << std::endl;
	}

	Bureaucrat player2("player2", 150);
	Bureaucrat player3("player3", 1);

	try {
		player2.decrementGrade();
	}
	catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		player3.incrementGrade();
	}
	catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << player3;
}
