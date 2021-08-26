#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <algorithm>

template<typename T>
class MutantStack : public std::stack<T> {
public:
	MutantStack() : std::stack<T>() {}
	MutantStack(MutantStack const & src) : std::stack<T>(src) {}
	virtual ~MutantStack() {}
	MutantStack & operator=(const T& src) {
		return std::stack<T>::operator=(src);
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

	iterator begin(void) {return std::stack<T>::c.begin();}
	iterator end(void) {return std::stack<T>::c.end();}
	reverse_iterator rbegin(void) {return std::stack<T>::c.rbegin();}
	reverse_iterator rend(void) {return std::stack<T>::c.rend();}
};

#endif
