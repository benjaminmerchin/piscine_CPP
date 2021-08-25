#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

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
	unsigned int shortestSpan();
	unsigned int longestSpan();

private:
	std::vector<int> _content;
	unsigned int _N;
};

#endif

//regarder vite fait les containers existants OK
//pour vector, regarder les fonctions existantes
//rajouter juste la fonction getnumber

//pour le 02, faire une class qui herite d'un autre container
//faire heriter directement dans la deff du container et dans les 2 constructeurs
//faire iterator et const_iterator begin et end pour le 02
//utiliser le container c qui est herite par le container stack
//tout peut se faire dans le .hpp et on peut laisser le .cpp vide
