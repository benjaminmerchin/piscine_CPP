#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array {
public:
	Array() : _size(0) {_elem = NULL;}
	Array(unsigned int n) : _size(n) {_elem = new (T * _size);}
	Array(Array const & src) {
		_size = src._size;
		_elem = new T[_size*T];
		for (int i =0; i < _size; i++)
			_elem[i] = src._elem[i];
	}
	~Array() {delete _elem;}
	Array & operator=(Array const & src) {
		_size = src._size;
		for (int i =0; i < _size; i++)
			_elem[i] = src._elem[i];
	}

private:
	T * _elem;
	int _size;
};

#endif
