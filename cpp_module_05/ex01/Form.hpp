#ifndef Form_HPP
# define Form_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:

	class GradeTooHighException: public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("Form: Grade too high");
			}
	};

	class GradeTooLowException: public std::exception{
		public:
			virtual const char* what() const throw() {
				return ("Form: Grade too Low");
			}
	};

	Form();
	Form(std::string name, int required_execute, int required_sign);
	Form(Form const & src);
	~Form();
	Form & operator=(Form const & rhs);

	std::string getName() const;
	void setName(std::string const name);
	bool getSigned() const;
	void setSigned(bool sign);
	int getRequiredSign() const;
	int getRequiredExecute() const;

	Form & beSigned(Bureaucrat const & b);

private:
	const std::string _name;
	bool _sign;
	const int _required_sign;
	const int _required_execute;

};

std::ostream & operator<<(std::ostream & o, Form const & src);

#endif
