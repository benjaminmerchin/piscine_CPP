#include <iostream>
#include "Zombie.hpp"

void	Zombie::announce(void){
	std::cout << "<" << _name << ">";
	std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string const & name) : _name(name){
	return ;
}

Zombie::~Zombie(void) {
	std::cout << "<" << _name << ">";
	std::cout << " ... I'm dead" << std::endl;
	return;
}
