#include <iostream>
#include <stdlib.h>
#include <ctime>

class Base {
public:
	virtual ~Base(){}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

//instancie de facon aléatoire A, B ou C et retourne un pointeur de l’instance Base
Base * generate(void) {
	std::srand(std::time(NULL));
	int random_variable = std::rand();
	Base * b;

	if (random_variable % 3 == 0)
		b = new A;
	else if (random_variable % 3 == 1)
		b = new B;
	else
		b = new C;
	return b;
}

//affiche "A", "B" ou "C" selon le type réel de p.
void identify_from_pointer(Base * p) {
	A * a = dynamic_cast<A *>(p);
	B * b = dynamic_cast<B *>(p);
	C * c = dynamic_cast<C *>(p);
	if (a != NULL)
		std::cout << 'A';
	if (b != NULL)
		std::cout << 'B';
	if (c != NULL)
		std::cout << 'C';
}

//affiche "A", "B" ou "C" selon le type réel de p.
void identify_from_reference( Base & p) {
	try {
		A & a = dynamic_cast<A &>(p);
		std::cout << 'A';
		(void)a;
	}
	catch (...){;}

	try {
		B & b = dynamic_cast<B &>(p);
		std::cout << 'B';
		(void)b;
	}
	catch (...){;}

	try {
		C & c = dynamic_cast<C &>(p);
		std::cout << 'C';
		(void)c;
	}
	catch (...){;}
}

int main(void) {
	Base * example = generate();
	std::cout << "identify_from_pointer:   ";
	identify_from_pointer(example);
	std::cout << std::endl;

	std::cout << "identify_from_reference: ";
	identify_from_pointer(example);
	std::cout << std::endl;

	delete example;
}
