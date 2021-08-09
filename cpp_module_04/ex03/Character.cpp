#include "Character.hpp"

/* -------------------------------------------------- */
/* ------------ CONSTRUCTOR / DESTRUCTOR ------------ */
/* -------------------------------------------------- */

Character::Character() {
    _name = "noName";
    for (int i = 0; i < 4; i++)
        _materia[i] = NULL;
	std::cout << "Character " << getName() << " created with default constructor" << std::endl;
}

Character::Character(std::string const name) {
	_name = name;
    for (int i = 0; i < 4; i++)
        _materia[i] = NULL;
	std::cout << "Character " << getName() << " created with name" << std::endl;
}

Character::Character(Character const & src) {
	_name = src.getName();
    for (int i = 0; i < 4; i++)
        _materia[i] = src._materia[i];
	std::cout << "Character " << getName() << " created with src" << std::endl;
}

Character::~Character() {
	std::cout << "Character " << getName() << " destructed" << std::endl;
}

/* -------------------------------------------------- */
/* -------------------- OPERATOR -------------------- */
/* -------------------------------------------------- */

Character & Character::operator=(Character const & rhs) {
	_name = rhs.getName();
    for (int i = 0; i < 4; i++)
        _materia[i] = rhs._materia[i];
	return *this;
}

/* -------------------------------------------------- */
/* --------------- GETTERS / SETTERS ---------------- */
/* -------------------------------------------------- */

std::string const & Character::getName() const {
    return _name;
}

/* -------------------------------------------------- */
/* ---------------- MEMBER FUNCTIONS ---------------- */
/* -------------------------------------------------- */

void Character::use(int idx, ICharacter& target) {
    if (idx < 0 || idx > 3 || _materia[idx] == NULL) {
        std::cout << "No Materia in this index" << std::endl;
        return ;
    }
	std::cout << "* shoots an ice bolt at NAME *" << std::endl;
}

void Character::equip(AMateria* m) {
    int index_to_equip = - 1;
    for (int i = 0; i < 4; i++) {
        if (_materia[i] != NULL)
            if (index_to_equip != -1)
                index_to_equip = i;
    }
    if (index_to_equip == -1) {
        std::cout << "Inventory full, equip not possible" << std::endl;
        return ;
    }
    _materia[index_to_equip] = m;
}

void Character::unequip(int idx) {
    if (idx < 0 || idx > 3) {
        std::cout << "Invalide index, unequip not possible" << std::endl;
        return ;
    }
    _materia[idx] = NULL;
}
