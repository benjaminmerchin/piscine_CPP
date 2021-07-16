#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
public:
	Weapon(std::string name);
	Weapon();
	~Weapon();
	const std::string& getType( void );
	void	setType(std::string name);

private:
	std::string		_name;
};

#endif