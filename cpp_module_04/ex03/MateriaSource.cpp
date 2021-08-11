#include "MateriaSource.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		_materia_source[i] = NULL;
	std::cout << "MateriaSource created with default constructor" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & src) {
	for (int i = 0; i < 4; i++) {
		if (src._materia_source[i] == NULL)
			_materia_source[i] = NULL;
		else
			_materia_source[i] = src._materia_source[i]->clone();
	}
	std::cout << "MateriaSource created with src" << std::endl;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		if (_materia_source[i] != NULL)
			delete _materia_source[i];
	std::cout << "MateriaSource destructed" << std::endl;
}

/* -------------------------------------------------- */
/* -------------------- OPERATOR -------------------- */
/* -------------------------------------------------- */


MateriaSource & MateriaSource::operator=(MateriaSource const & rhs) {
	for (int i = 0; i < 4; i++)
		if (_materia_source[i] != NULL)
			delete _materia_source[i];
	for (int i = 0; i < 4; i++) {
		if (rhs._materia_source[i] == NULL)
			_materia_source[i] = NULL;
		else
			_materia_source[i] = rhs._materia_source[i]->clone();
	}
	return *this;
}

/* -------------------------------------------------- */
/* --------------- GETTERS / SETTERS ---------------- */
/* -------------------------------------------------- */

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */

void MateriaSource::learnMateria(AMateria* m) {
	int index_to_equip = - 1;
	for (int i = 0; i < 4; i++) {
		if (_materia_source[i] == NULL)
			if (index_to_equip == -1)
					index_to_equip = i;
	}
	if (index_to_equip == -1) {
		std::cout << "MateriaSource inventory full, equip not possible" << std::endl;
		return ;
	}
	_materia_source[index_to_equip] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (_materia_source[i] != NULL && _materia_source[i]->getType() == type) {
			return (_materia_source[i]);
		}
	}
	std::cout << "Materia type not found" << std::endl;
	return NULL;
}
