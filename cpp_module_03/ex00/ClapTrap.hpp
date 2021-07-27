#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
public:
	ClapTrap(void);
	ClapTrap(ClapTrap & src);
	ClapTrap & operator=(ClapTrap const & rhs);
	~ClapTrap(void);

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

private:
	std::string _name;
	int	_hitPoints;
	int _energyPoints;
	int _attackDamage;

};

std::ostream & operator<<(std::ostream & o, ClapTrap const & src);

#endif
