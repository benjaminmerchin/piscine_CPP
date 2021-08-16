#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <ctime>
# include <stdlib.h>

class RobotomyRequestForm : public Form {
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	~RobotomyRequestForm();
	RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);

	void execute(Bureaucrat const & executor) const;
	std::string getTarget() const;
	void setTarget(std::string const target);

private:
	std::string _target;

};

#endif
