#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	std::cout << "===========================================\n";
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("random");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	std::cout << "===========================================\n";
	me->use(0, *bob);
	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(0);
	me->use(0, *bob);
	me->use(2, *bob);
	std::cout << "===========================================\n";
	Character a("A");
	Character b("B");
	a.equip(src->createMateria("ice"));
	b = a;
	a.equip(src->createMateria("cure"));
	a.use(1, *bob);
	b.use(1, *bob);
	std::cout << "===========================================\n";
	delete bob;
	delete me;
	delete src;
	return 0;
}

/*
There is an AMateria class. (represent a Materia)
Cure (heal) and Ice (an attack) inherit from AMateria.

There is also Character and ICharacter.
Character is like a personage and inherit up to 4 Materia.
Character inherit from ICharacter.

Then the last element are MateriaSource and IMateriaSource.
It is like a memory that can store up to 4 Materia
It can return one of the Materia that have been stored
*/
