#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA {
public:
	HumanA(std::string const & name, Weapon weapon);
	~HumanA();
	const std::string& getName( void );
	void	setName(std::string const & name);
	void	attack( void );

private:
	Weapon	_weapon_id;
	std::string		_name;
};

#endif
