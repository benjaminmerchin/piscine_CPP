#include "easyfind.hpp"

//https://www.cplusplus.com/reference/algorithm/find/

int main(void) {
	std::vector<int> myvector;
	myvector.push_back(1);
	myvector.push_back(2);
	myvector.push_back(9);
	myvector.push_back(3);
	myvector.push_back(5);
	std::vector<int>::iterator it;

	it = easyfind(myvector, 10);
	if (it != myvector.end())
		std::cout << "Element found in myvector: " << *it << '\n';
	else
		std::cout << "Element not found in myvector\n";

	it = easyfind(myvector, 9);
	if (it != myvector.end())
		std::cout << "Element found in myvector: " << *it << '\n';
	else
		std::cout << "Element not found in myvector\n";

	std::cout << "============================\n";

	std::list<int> mylist;
	mylist.push_back(1);
	mylist.push_back(2);
	mylist.push_back(9);
	mylist.push_back(3);
	mylist.push_back(5);
	std::list<int>::iterator lit;

	lit = easyfind(mylist, 10);
	if (lit != mylist.end())
		std::cout << "Element found in mylist: " << *lit << '\n';
	else
		std::cout << "Element not found in mylist\n";

	lit = easyfind(mylist, 9);
	if (lit != mylist.end())
		std::cout << "Element found in mylist: " << *lit << '\n';
	else
		std::cout << "Element not found in mylist\n";

	return 0;
} 
