#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie
{
private:
	std::string _name;
public:
	Zombie();
	~Zombie();
	void	announce(void) const;
	void	set_name(std::string name);
};

void	zombieHorde(int number, std::string name);

#endif