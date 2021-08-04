#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal {
public:
	Animal();
	Animal(std::string const & type);
	Animal(Animal const & src);
	Animal & operator=(Animal const & rhs);
	virtual ~Animal();

	void setType(std::string const type);
	std::string getType(void) const;

	virtual void makeSound() const;

protected:
	std::string _type;

};

std::ostream & operator<<(std::ostream & o, Animal const & src);

#endif
