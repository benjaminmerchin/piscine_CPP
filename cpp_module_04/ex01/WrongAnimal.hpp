#ifndef WRONGWrongAnimal_HPP
# define WRONGWrongAnimal_HPP

# include <iostream>

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(std::string const & type);
	WrongAnimal(WrongAnimal const & src);
	WrongAnimal & operator=(WrongAnimal const & rhs);
	virtual ~WrongAnimal();

	void setType(std::string const type);
	std::string getType(void) const;

	void makeSound() const;

protected:
	std::string _type;

};

std::ostream & operator<<(std::ostream & o, WrongAnimal const & src);

#endif
