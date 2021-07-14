#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie*  Luc = new Zombie(name);
	return Luc;
}