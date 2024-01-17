#include "includes/ClapTrap.hpp"

int main(void) 
{
    // Test default constructor
    ClapTrap defaultTrap;
    defaultTrap.attack("target");
    defaultTrap.takeDamage(5);
    defaultTrap.beRepaired(5);

    // Test parameterized constructor
    ClapTrap namedTrap("TestTrap");
    namedTrap.attack("target");
    namedTrap.takeDamage(5);
    namedTrap.beRepaired(5);

    // Test copy constructor
    ClapTrap copyTrap = namedTrap;
    copyTrap.attack("target");
    copyTrap.takeDamage(5);
    copyTrap.beRepaired(5);

    return 0;
}