#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

void ft_attack(ClapTrap & entity, std::string enemy) {
	entity.attack(enemy);
}

int main(void)
{
	ScavTrap Tin("TinTin");
	ClapTrap Jon("JonJon");
	FragTrap Luc("LucLuc");
	DiamondTrap Dia("DiaDia");
	DiamondTrap Dim;
	std::cout << std::endl;

	std::cout << "We created a ScavTrap and a ClapTrap" << std::endl;
	std::cout << Tin << std::endl;
	std::cout << std::endl;

	std::cout << "We created a FragTrap and a ClapTrap" << std::endl;
	std::cout << Luc << std::endl;
	std::cout << std::endl;

	std::cout << "We created a DiamondTrap" << std::endl;
	std::cout << Dia << std::endl;
	std::cout << std::endl;

	std::cout << "They can attack:" << std::endl;
	ft_attack(Tin, "MaxMax");
	ft_attack(Jon, "MaxMax");
	ft_attack(Dia, "MaxMax");
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

	Luc.highFivesGuys();
	Dia.highFivesGuys();
	std::cout << std::endl;

	Dia.guardGate();
	Dia.whoAmI();
	std::cout << std::endl;
	return (0);
}
