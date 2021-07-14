#include <iostream>
#include "Zombie.hpp"

void randomChump( std::string name ) {
	Zombie*	Jon = new Zombie(name); //on the heap
	Jon->announce();
}
