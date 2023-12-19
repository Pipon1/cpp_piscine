#include "includes/Zombie.hpp"

int	main()
{
	std::string bob = "bob the new zombie";
	std::string loud_guy = "loud guy";
	Zombie *ptr = newZombie(bob);
	ptr->announce();
	delete ptr;
	randomChump(loud_guy);
	return 0;
}