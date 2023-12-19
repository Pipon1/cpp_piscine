#include <iostream>
#include "includes/main.hpp"


int	main(int ac, char **av)
{
	(void) ac;
	(void) av;
	std::string line;
	PhoneBook repertory;
	while (true)
	{
		std::cout << "<$ ";
		line = safe_getline();
		if (line == "ADD")
		{
			repertory.add_users();
		}
		if (line == "SEARCH")
		{
			repertory.show_users();
			repertory.search_users(repertory);// a coder
		}
		if (line == "EXIT")
			break ;
	}
	return 0;
}