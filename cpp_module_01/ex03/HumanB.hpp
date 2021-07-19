#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB {
public:
	HumanB(std::string const & name);
	~HumanB();
	const std::string& getName( void );
	void	setName(std::string const & name);
	void	setWeapon(Weapon &weapon);
	void	attack( void );

private:
	Weapon	*_weapon_id;
	std::string		_name;
};

#endif
