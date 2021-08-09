#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

class Ice : public AMateria {
public:
	Ice();
	Ice(Ice const & rhs);
	Ice & operator=(Ice const & rhs);
	~Ice();

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif