#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array {
public:
	class OutOfRangeException: public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("Element is out of range");
			}
	};

	Array() : _arr(NULL), _size(0) {}
	Array(unsigned int n) : _arr(new T[n]), _size(n) {}
	Array(Array const & src) {
		_size = src._size;
		_arr = new T[_size];
		for (int i =0; i < _size; i++)
			_arr[i] = src._arr[i];
	}
	~Array() {delete [] _arr;}
	Array & operator=(Array const & src) {
		if (_size != 0 && _size != src._size)
			delete [] _arr;
		_size = src._size;
		_arr = new T[_size];
		for (unsigned int i =0; i < _size; i++)
			_arr[i] = src._arr[i];
		return *this;
	}
	T & operator[](unsigned int const & index) {
		if (index >= _size)
			throw OutOfRangeException();
		else
			return _arr[index];
	}

private:
	T * _arr;
	unsigned int _size;
};

#endif
