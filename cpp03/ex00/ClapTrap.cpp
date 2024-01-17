#include "includes/ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "Constructor has been called." << std::endl;
    this->_name = "Unknow";
    this->_attackDamage = 0;
    this->_energyPoints = 10;
    this->_hitPoints = 10;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    std::cout << "Naming constructor has been called." << std::endl;
    this->_attackDamage = 0;
    this->_energyPoints = 10;
    this->_hitPoints = 10;
}

ClapTrap::ClapTrap(ClapTrap &ref)
{
    std::cout << "Copy constructor has been called" << std::endl;
    *this = ref;
}

ClapTrap &ClapTrap::operator=(ClapTrap &ref)
{
    this->_name = ref._name;
    this->_attackDamage = ref._attackDamage;
    this->_energyPoints = ref._energyPoints;
    this->_hitPoints = ref._hitPoints;
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor has been called." << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << this->_name << " is been attacked!";
    this->_hitPoints -= amount;
    if (this->_hitPoints <= 0)
        std::cout << " And died as a result of his injuries}!" << std::endl;
    else
        std::cout << " And has taken " << amount << " of damage!" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints <= 0)
        std::cout << this->_name << " can't do anything, he has no HP left!" << std::endl;
    else if (this->_energyPoints <= 0)
        std::cout << this->_name << " can't do anything, he has no energy left!" << std::endl;
    else if (this->_energyPoints > 0)
    {
        std::cout << this->_name << " is repairing itself for " << amount << " HP!" << std::endl;
        if (amount + this->_hitPoints > 10)
            this->_hitPoints = 10;
        else
            this->_hitPoints += amount;
    }
}

void    ClapTrap::attack(const std::string &target)
{
    if (this->_hitPoints <= 0)
        std::cout << this->_name << " can't do anything, he has no HP left!" << std::endl;
    else if (this->_energyPoints <= 0)
        std::cout << this->_name << " can't do anything, he has no energy left!" << std::endl;
    else if (this->_energyPoints > 0)
        std::cout << this->_name << " attacks " << target << " for " << this->_attackDamage \
        << " of damage!" << std::endl;
}