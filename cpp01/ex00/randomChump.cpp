#include "includes/Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	loud_guy(name);
	loud_guy.announce();
}