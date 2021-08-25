#include "easyfind.hpp"

//https://www.cplusplus.com/reference/algorithm/find/

template <typename T>
void testor() {
	T myvector;
	myvector.push_back(1);
	myvector.push_back(2);
	myvector.push_back(9);
	myvector.push_back(3);
	myvector.push_back(5);
	typename T::iterator it;

	it = easyfind(myvector, 10);
	if (it != myvector.end())
		std::cout << "Element found: " << *it << '\n';
	else
		std::cout << "Element not found\n";

	it = easyfind(myvector, 5);
	if (it != myvector.end())
		std::cout << "Element found: " << *it << '\n';
	else
		std::cout << "Element not found\n";
}

int main(void) {
	testor<std::vector<int> >();
	std::cout << "=================\n";
	testor<std::list<unsigned int> >();
	std::cout << "=================\n";
	testor<std::list<float> >();
	return 0;
} 
