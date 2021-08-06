#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	const Cat *i = new Cat();
	const Animal* j = new Dog();
	Cat k;
	std::cout << std::endl;

	k = *i;
	delete i;
	k.makeSound();
	j->makeSound();
	std::cout << std::endl;

	delete j;
	std::cout << std::endl;

	std::cout << "/*===============================*/\n\n";

	/*{
		Dog a;
		Dog b;
		Dog c(a);

		b = a;

		std::cout << a.getBrain() << std::endl;
		std::cout << b.getBrain() << std::endl;
		std::cout << c.getBrain() << std::endl;
	}
	std::cout << std::endl;*/

	std::cout << "/*===============================*/\n\n";

	/*int size = 8;
	Animal* Snoopy[size];
	for (int i=0; i < size; i++) {
		if (i%2==0)
			Snoopy[i] = new Cat();
		else
			Snoopy[i] = new Dog();
	}
	std::cout << std::endl;

	for (int i=0; i < size; i++)
		Snoopy[i]->makeSound();
	std::cout << std::endl;

	for (int i=0; i < size; i++)
		delete Snoopy[i];
	*/
}
