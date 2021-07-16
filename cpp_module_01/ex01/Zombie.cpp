#include "Zombie.hpp"

void	Zombie::announce(void){
	std::cout << "<" << _name << ">";
	std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string const & name) {
	Zombie::_name = name;
}

Zombie::Zombie(std::string const & name) {
	Zombie::setName(name);
	return ;
}

Zombie::Zombie() {
	return ;
}

Zombie::~Zombie(void) {
	std::cout << "<" << Zombie::_name << ">";
	std::cout << " ... I'm dead" << std::endl;
	return ;
}
