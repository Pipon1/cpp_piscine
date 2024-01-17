/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:48:41 by hefurrer          #+#    #+#             */
/*   Updated: 2024/01/10 11:48:43 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	
}

HumanB::~HumanB(void)
{

}

void	HumanB::setWeapon(Weapon &type)
{
	this->_weaponptr = &type;
}

void	HumanB::attack() const
{
	std::cout << this->_name << " attacks with their " << this->_weaponptr->getType() << std::endl;
}
