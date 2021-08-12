#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat {
public:

	class GradeTooHighException: public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("Bureaucrat: Grade too high");
			}
	};

	class GradeTooLowException: public std::exception{
		public:
			virtual const char* what() const throw() {
				return ("Bureaucrat: Grade too Low");
			}
	};

	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & src);
	~Bureaucrat();
	Bureaucrat & operator=(Bureaucrat const & rhs);

	std::string getName() const;
	void setName(std::string const name);
	int getGrade() const;
	void setGrade(int const grade);

	void incrementGrade();
	void decrementGrade();
	void signForm(Form & f);

private:
	std::string _name;
	int _grade;

};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & src);

#endif