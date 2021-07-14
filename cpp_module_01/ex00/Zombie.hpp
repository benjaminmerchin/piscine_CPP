#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie {
public:
	Zombie(std::string const & name);
	~Zombie(void);
	void			announce( void );

private:
	std::string		_name;
};

void randomChump( std::string name );

#endif