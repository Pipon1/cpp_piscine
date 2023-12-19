#include "includes/Zombie.hpp"
#include <stdlib.h>

int	main(int ac, char **av)
{
	std::string zom = "zombie horde goons";
	int	count;
	if (ac != 2)
	{
		std::cout << "pls input the amount of zombie desiered" << std::endl;
		return 1;
	}
	count = atoi(av[1]);
	zombieHorde(count, zom);
	return 0;
}