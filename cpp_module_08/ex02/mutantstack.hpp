#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <algorithm>

//I found this function on the ft_containers main

template<typename T>
class MutantStack : public std::stack<T> {
public:
	MutantStack() {}
	MutantStack(const MutantStack<T>& src) { *this = src; }
	~MutantStack() {}
	MutantStack<T>& operator=(const MutantStack<T>& rhs) {
		this->c = rhs.c;
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }
};

#endif
