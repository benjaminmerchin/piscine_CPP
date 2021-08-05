#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"

class Dog : public AAnimal {
public:
	Dog();
	Dog(Dog const & src);
	Dog & operator=(Dog const & rhs);
	virtual ~Dog();

	virtual void makeSound() const;
	Brain* getBrain() const;

private:
	Brain* _dog_brain;

};

std::ostream & operator<<(std::ostream & o, Dog const & src);

#endif