#include <iostream>
#include "Zombie.hpp"

int main(void)
{
	Zombie* Bob = newZombie("BobBob"); //on the heap
	Bob->announce();
	delete Bob;

	randomChump("TinTin"); //on the stack

	Zombie*	Jon = new Zombie("JonJon"); //on the heap
	Jon->announce();
	delete Jon;

	Zombie Tom("TomTom"); //on the stack
	//Zombie Tom = Zombie("TomTom"); //Same
	Tom.announce();

	return (0);
}
