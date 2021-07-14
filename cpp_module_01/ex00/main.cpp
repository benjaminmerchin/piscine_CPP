#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie Bob = Zombie(name);
	Zombie* Bob2 = &Bob;
	return (Bob2);
	/*Zombie* Luc(name);
	return ;*/
}

int main(void)
{
	Zombie Tom("TomTom"); //on the stack
	//Zombie Tom = Zombie("TomTom"); //Same
	Tom.announce();

	Zombie* Bob;
	Bob = newZombie("BobBob"); //on the stack we can declare later
	Bob->announce();

	Zombie*	Jon = new Zombie("JonJon"); //on the heap
	Jon->announce();
	delete Jon;

	return (0);
}
