/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:48:50 by hefurrer          #+#    #+#             */
/*   Updated: 2024/01/10 11:48:52 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string type) : _type(type)
{

}

Weapon& Weapon::operator=(const Weapon& type)
{
    this->_type = type._type;
    return (*this);
}

Weapon::~Weapon()
{

}

void Weapon::setType(std::string type)
{
    this->_type = type;
}

std::string Weapon::getType(void) const
{
    return (this->_type);
}
