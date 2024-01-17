/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:49:14 by hefurrer          #+#    #+#             */
/*   Updated: 2024/01/10 11:49:16 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	public:
	HumanB(std::string name);
	~HumanB();
	void	setWeapon(Weapon &type);
	void	attack(void) const;
	private:
	std::string _name;
	Weapon *_weaponptr;
};

#endif
