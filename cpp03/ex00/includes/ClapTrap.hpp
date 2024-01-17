#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP

#include    <iostream>
#include    <string>

class ClapTrap
{
    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(ClapTrap &ref);
        ClapTrap &operator=(ClapTrap &ref);
        ~ClapTrap(void);
        void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

    private:
        std::string _name;
        int         _hitPoints;
        int         _energyPoints;
        int         _attackDamage;
};

#endif