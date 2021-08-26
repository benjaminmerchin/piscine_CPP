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
//8+25+0+7+4+17+3+6+0+2+9+12+3+9+1 = 7.06 personnes qui ont fait des correc
//7+13+14+9+5+11+1-3+2+6+0+6+9+4+1 = 5.66 personnes de ma promo top 51->65
//3+2+5+1+25+6+1+6+4+3+6+18+5+10+1 = 6.4 personnes de ma promo top 66->80
//6+4+0+5+4+17+0+5+6+5+1+11+9+5+9+8+6+0+6+7 = 5.7 personnes de ma promo top 81->100
//3+4+6+15+0+3+8+2+11+1+1+11+4+6+3+6+3+3+3+5 = 4.9 personnes de ma promo top 101->120