#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap(void);
	ScavTrap(std::string const & name);
	ScavTrap(ScavTrap const & src);
	ScavTrap & operator=(ScavTrap const & rhs);
	virtual ~ScavTrap(void);

	virtual void attack(std::string const & target);
	void guardGate(void);
	void switchGuardGate(void);

	bool getGuardGate(void) const;
	void setGuardGate(bool const status);

private:
	bool	_guard;
};

#endif
