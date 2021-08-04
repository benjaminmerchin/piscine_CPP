#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(Cat const & src);
	Cat & operator=(Cat const & rhs);
	virtual ~Cat();

	virtual void makeSound() const;

private:
	Brain* _cat_brain;

};

std::ostream & operator<<(std::ostream & o, Cat const & src);

#endif
