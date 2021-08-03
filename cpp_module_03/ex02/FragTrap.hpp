#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap(void);
	FragTrap(std::string const & name);
	FragTrap(FragTrap const & src);
	FragTrap & operator=(FragTrap const & rhs);
	virtual ~FragTrap(void);

	void highFivesGuys(void);

};

#endif
