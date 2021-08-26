#include "span.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

Span::Span() : _N(0) {}

Span::Span(unsigned int N) : _N(N) {}

Span::Span(Span const & src) {
	_N = src._N;
	_content = src._content;
}

Span::~Span() {}

/* -------------------------------------------------- */
/* -------------------- OPERATOR -------------------- */
/* -------------------------------------------------- */

Span & Span::operator=(Span const & src) {
	_N = src._N;
	_content = src._content;
	return *this;
}

/* -------------------------------------------------- */
/* --------------- GETTERS / SETTERS ---------------- */
/* -------------------------------------------------- */

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */

void Span::addNumber(int a) {
	if (_content.size() >= _N)
		throw Span::StorageFullException();
	_content.push_back(a);
}

void Span::addRangeNumber(int a, int b) {
	long size = b - a;
	if (_content.size() + abs(size) >= _N)
		throw Span::StorageFullException();
	for (int i = a; i <= b; i++)
		_content.push_back(i);
}

unsigned int Span::shortestSpan() {
	if (_content.size() <= 1)
		throw Span::NoSpanToFindException();
	long span = abs(_content[0] - _content[1]);
	for (unsigned long i = 0; i < _content.size(); i++) {
		for (unsigned long j = i + 1; j < _content.size(); j++) {
			if (span > static_cast<long>(abs(_content[i] - _content[j])))
				span = static_cast<long>(abs(_content[i] - _content[j]));
		}
	}
	return static_cast<unsigned int>(span);
}

unsigned int Span::longestSpan() {
	if (_content.size() <= 1)
		throw Span::NoSpanToFindException();
	int max = _content[0];
	int min = _content[0];
	for (unsigned long i = 0; i < _content.size(); i++) {
		if (_content[i] > max)
			max = _content[i];
		if (_content[i] < min)
			min = _content[i];
	}
	return static_cast<unsigned int>(max - min);
}
