#include <iostream>
#include "Zombie.hpp"

void randomChump( std::string name ) {
	Zombie Chump(name); //on the stack
	Chump.announce();
}
