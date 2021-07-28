#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>

class ScavTrap : public ClapTrap {
public:
	ScavTrap(void);
	ScavTrap(std::string const & name);
	ScavTrap(ScavTrap & src);
	ScavTrap & operator=(ScavTrap const & rhs);
	~ScavTrap(void);

private:

};

std::ostream & operator<<(std::ostream & o, ScavTrap const & src);

#endif
