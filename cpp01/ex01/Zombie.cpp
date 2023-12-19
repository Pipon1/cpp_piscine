#include    "includes/Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "a human got infected !" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " died" << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}