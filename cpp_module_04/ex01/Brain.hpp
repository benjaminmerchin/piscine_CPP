#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {

public:
	Brain();
	Brain(Brain const & src);
	Brain & operator=(Brain const & rhs);
	virtual ~Brain();

protected:
	std::string _ideas[100];

};

#endif
