/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:48:30 by hefurrer          #+#    #+#             */
/*   Updated: 2024/01/10 11:48:31 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w_name) : _name(name), _weaponref(w_name)
{
	// this->_weaponref = w_name;
}

HumanA::~HumanA(void)
{

}

void	HumanA::attack() const
{
	std::cout << this->_name << " attacks with their " << this->_weaponref.getType() << std::endl;
}
