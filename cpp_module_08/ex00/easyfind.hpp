#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>

template<typename T>
typename T::iterator easyfind(T & a, int n) {
	return std::find (a.begin(), a.end(), n);
}

#endif
