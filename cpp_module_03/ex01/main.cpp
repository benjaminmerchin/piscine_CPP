#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap Tin("TinTin");

	std::cout << "We created a ClapTrap" << std::endl;
	std::cout << Tin << std::endl;
	std::cout << std::endl;

	std::cout << Tin.getName() << " can attack:" << std::endl;
	Tin.attack("JonJon");
	std::cout << std::endl;

	std::cout << Tin.getName() << " can take damage:" << std::endl;
	Tin.takeDamage(10);
	std::cout << std::endl;

	std::cout << Tin.getName() << " can be repaired:" << std::endl;
	Tin.beRepaired(5);

	return (0);
}
