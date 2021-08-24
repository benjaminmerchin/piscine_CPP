#include "easyfind.hpp"

int main(void) {
	std::vector<int> tab;
	tab.push_back(1);
	tab.push_back(2);
	tab.push_back(4);

	for(int i = 0; i < tab.size(); i++)
		std::cout << tab[i] << std::endl;

	tab.clear();

	return 0;
} 