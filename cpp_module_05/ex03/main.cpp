#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
	std::cout << "===============ShrubberyCreationForm===============\n";
	{
		Bureaucrat player1("player1", 1);
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

		player2.executeForm(contract);

		std::cout << "===========================================\n";
	}
	std::cout << "===============RobotomyRequestForm===============\n";
	{
		Bureaucrat player1("player1", 1);
		Bureaucrat player3("player3", 50);
		RobotomyRequestForm certificate;
		RobotomyRequestForm contract;

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
			player3.signForm(contract);
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		player3.executeForm(contract);

		std::cout << "===========================================\n";
	}
	std::cout << "===============PresidentialPardonForm===============\n";
	{
		Bureaucrat player1("player1", 1);
		Bureaucrat player4("player4", 10);
		PresidentialPardonForm certificate;
		PresidentialPardonForm contract;

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
			player4.signForm(contract);
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		player4.executeForm(contract);

		std::cout << "===========================================\n";
	}
}
