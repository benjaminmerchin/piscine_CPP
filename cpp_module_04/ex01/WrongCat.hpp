#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(WrongCat const & src);
	WrongCat & operator=(WrongCat const & rhs);
	virtual ~WrongCat();

	void makeSound() const;

private:

};

std::ostream & operator<<(std::ostream & o, WrongCat const & src);

#endif
