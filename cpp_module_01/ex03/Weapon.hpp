#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
public:
	Weapon(std::string name);
	std::string& getType(void);
	void	setType(std::string name);
private:
	std::string	_weapon_name;
};

#endif
