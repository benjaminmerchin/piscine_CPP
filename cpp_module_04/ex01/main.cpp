#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;
	/*int size = 10;
	Animal* Snoopy[size];
	for (int i; i < size; i++) {
		if (i%2==0)
			Snoopy[i] = new Cat();
		else
			Snoopy[i] = new Dog();
	}









	for (int i; i < size; i++) {
		delete Snoopy[i];
	}*/
}
