#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
public:
	Span();
	Span(unsigned int N);
	Span(Span const & src);
	~Span();
	Span & operator=(Span const & src);

private:
	std::vector<int> _content;
};

#endif

//regarder vite fait les containers existants
//pour vector, regarder les fonctions existantes
//rajouter juste la fonction getnumber

//pour le 02, faire une class qui herite d'un autre container
//faire heriter directement dans la deff du container et dans les 2 constructeurs
//faire iterator et const_iterator begin et end pour le 02
//utiliser le container c qui est herite par le container stack
//tout peut se faire dans le .hpp et on peut laisser le .cpp vide