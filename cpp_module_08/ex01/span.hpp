#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <cstdlib>

class Span {
public:

	class StorageFullException: public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("The storage is full");
			}
	};

	class NoSpanToFindException: public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("There is not enough numbers in the storage to have a span");
			}
	};

	Span();
	Span(unsigned int N);
	Span(Span const & src);
	~Span();
	Span & operator=(Span const & src);

	void addNumber(int a);
	void addRangeNumber(int a, int b);
	unsigned int shortestSpan();
	unsigned int longestSpan();

private:
	std::vector<int> _content;
	unsigned int _N;
};

#endif
