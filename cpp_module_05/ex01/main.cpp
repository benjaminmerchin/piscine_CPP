#include "Bureaucrat.hpp"

int main(void) {

	try {
		Bureaucrat player0("player0", 1);
	}
	catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << e.what() << std::endl;
	}
	/*try {
		player0.decrementGrade();
	}
	catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << e.what() << std::endl;
	}*/



	Bureaucrat player2("player2", 150);
	Bureaucrat player3("player3", 1);



	std::cout << player3;
}
