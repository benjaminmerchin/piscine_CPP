#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	const WrongAnimal* wrongI = new WrongCat();
	std::cout << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	wrongI->makeSound();
	wrongMeta->makeSound();
	std::cout << std::endl;

	//...
	delete meta;
	delete wrongMeta;
	delete wrongI;
	delete i;
	delete j;
}
