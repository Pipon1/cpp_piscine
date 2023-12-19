#include    "includes/Zombie.hpp"

Zombie	*new_Zombie(std::string name)
{
	Zombie *bob = new Zombie();
	bob->set_name(name);
	return bob;
}

void	zombieHorde( int N, std::string name)
{
	Zombie	**Horde = new Zombie*[N];
	for (int i = 0; i < N; i++)
	{
		Horde[i] = new_Zombie(name);
		Horde[i]->announce();
	}
	for (int i = 0; i < N; i++)
		delete Horde[i];
	delete[] Horde;
}