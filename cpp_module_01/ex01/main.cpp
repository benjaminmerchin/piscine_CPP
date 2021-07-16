#include "Zombie.hpp"

int main(void)
{
	Zombie* zombie_group;
	zombie_group = zombieHorde(5, "BobBob");
	for (int i = 0; i < 5; i++)
		zombie_group[i].announce();
	delete [] zombie_group;
	return (0);
}
