#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "RobotomyRequestForm.hpp"
# include "Form.hpp"

class RobotomyRequestForm : public Form {
public:
	RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const & src);
	~RobotomyRequestForm();
	RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);

	void execute(Bureaucrat const & executor) const;
};

#endif