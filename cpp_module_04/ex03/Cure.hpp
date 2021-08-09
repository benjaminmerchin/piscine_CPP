#ifndef CURE_HPP
# define CURE_HPP

# include "Character.hpp"
# include "MateriaSource.hpp"

class Cure : public AMateria/*, public Character, public MateriaSource */{
public:
	Cure();
	Cure(Cure const & rhs);
	Cure & operator=(Cure const & rhs);
	~Cure();

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif