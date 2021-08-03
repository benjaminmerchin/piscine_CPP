#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
public:
	Animal();
	Animal(Animal const & src);
	Animal & operator=(Animal const & rhs);
	virtual ~Animal();

	void setType(std::string const type);
	std::string getType() const;

protected:
	std::string _type;

};

std::ostream & operator<<(std::ostream & o, Animal const & src);

#endif