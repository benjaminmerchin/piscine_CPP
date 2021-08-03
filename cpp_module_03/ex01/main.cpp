#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void ft_attack(ClapTrap & entity, std::string enemy) {
	entity.attack(enemy);
}

int main(void)
{
	ScavTrap Tin("TinTin");
	ClapTrap Jon("JonJon");
	std::cout << std::endl;

	std::cout << "We created a ScavTrap and a ClapTrap" << std::endl;
	std::cout << Tin << std::endl;
	std::cout << std::endl;

	std::cout << Tin.getName() << " can attack:" << std::endl;
	ft_attack(Tin, "JonJon");
	ft_attack(Jon, "JonJon");
	std::cout << std::endl;

	std::cout << Tin.getName() << " can take damage:" << std::endl;
	Tin.takeDamage(10);
	std::cout << std::endl;

	std::cout << Tin.getName() << " can be repaired:" << std::endl;
	Tin.beRepaired(5);
	std::cout << std::endl;

	std::cout << Tin.getName() << " can guard:" << std::endl;
	std::cout << Tin.getName() << " is currently: ";
	std::cout << (Tin.getGuardGate() == true ? "guarding" : "not guarding") << std::endl;
	Tin.guardGate();
	std::cout << Tin.getName() << " is currently: ";
	std::cout << (Tin.getGuardGate() == true ? "guarding" : "not guarding") << std::endl;
	std::cout << std::endl;
	
	return (0);
}
