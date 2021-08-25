#include "span.hpp"

int main()
{
	Span sp = Span(10);

	try {
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(9);
	sp.addNumber(9);
	sp.addNumber(9);
	sp.addNumber(9);
	sp.addNumber(19);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try {
		sp.addNumber(5);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}
