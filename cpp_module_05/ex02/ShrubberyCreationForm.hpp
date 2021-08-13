#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "ShrubberyCreationForm.hpp"

class ShrubberyCreationForm : public Form {
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	~ShrubberyCreationForm();
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

	void execute(Bureaucrat const & executor) const;
};

#endif