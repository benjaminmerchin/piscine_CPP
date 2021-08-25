#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <list>

class Span {
public:
	Span();
	Span(unsigned int N);
	Span(Span const & src);
	~Span();
	Span & operator=(Span const & src);

private:
};

#endif