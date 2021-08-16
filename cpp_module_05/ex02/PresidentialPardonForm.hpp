#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "PresidentialPardonForm.hpp"
# include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
	PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const & src);
	~PresidentialPardonForm();
	PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);

	void execute(Bureaucrat const & executor) const;
};

#endif