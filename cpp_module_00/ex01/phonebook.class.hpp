#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include "directory.class.hpp"

class Phonebook {
public:
	Directory contact[8];

	Phonebook(void);
	~Phonebook(void);
	int launchPhonebook(void);

private:
};

#endif