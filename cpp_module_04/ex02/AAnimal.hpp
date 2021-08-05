#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class AAnimal {
public:
	AAnimal();
	AAnimal(std::string const & type);
	AAnimal(AAnimal const & src);
	AAnimal & operator=(AAnimal const & rhs);
	virtual ~AAnimal();

	void setType(std::string const type);
	std::string getType(void) const;

	virtual void makeSound() const = 0;

protected:
	std::string _type;

};

std::ostream & operator<<(std::ostream & o, AAnimal const & src);

#endif
