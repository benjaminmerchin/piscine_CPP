#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void function(T & a) {
	a-=1;
}

template<typename T>
void iter(T x[], int const & l, void function(T & elem)) {
	for (int i = 0; i < l; i++)
		function(x[i]);
}

#endif
