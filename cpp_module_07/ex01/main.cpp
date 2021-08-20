#include "iter.hpp"

int  main(void) {
	int tab[3] = {1, 2, 3};
	std::string str = "Uijt!jt!b!tfdsfu!fodpefe!nfttbhf\"";
	char * writable = new char[str.size() + 1];
	std::copy(str.begin(), str.end(), writable);
	writable[str.size()] = '\0';

	std::cout << "tab[3] Before operation:\n";
	for (int i = 0; i < 3; i++)
		std::cout << tab[i] << ' ';
	iter(tab, 3, function);
	std::cout << "\nAfter operation:\n";
	for (int i = 0; i < 3; i++)
		std::cout << tab[i] << ' ';

	std::cout << "\n\nstr Before operation:   ";
	std::cout << writable << std::endl;
	iter(writable, str.length(), function);
	std::cout << "str after operation:    ";
	std::cout << writable << std::endl;
	
	delete[] writable;
}