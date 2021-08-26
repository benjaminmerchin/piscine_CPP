#include "mutantstack.hpp"

int main(void) {
	MutantStack<int> mstack;
	MutantStack<int> mstack_2;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	mstack.push(100);

	mstack_2 = mstack;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	MutantStack<int>::iterator it_2 = mstack_2.begin();
	MutantStack<int>::iterator ite_2 = mstack_2.end();
	++it;
	--it;
	while (it != ite && it_2 != ite_2) {
		std::cout << *it << '\t' << *it_2 << std::endl;
		++it;
		++it_2;
	}
	std::stack<int> s(mstack);
	return 0;
}
