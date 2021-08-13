#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "ShrubberyCreationForm.hpp"

class ShrubberyCreationForm : public ShrubberyCreationForm {
	ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	~ShrubberyCreationForm();
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);
};

#endif