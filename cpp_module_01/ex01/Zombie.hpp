#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <maths.h>

class Zombie {
public:
	Zombie(std::string const & name);
	Zombie(); //Default constructor if there is no name in param
	~Zombie(void);
	void			announce( void );
	void			setName(std::string const & name);

private:
	std::string		_name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
