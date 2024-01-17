/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:49:06 by hefurrer          #+#    #+#             */
/*   Updated: 2024/01/10 11:49:08 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
	public:
	HumanA(std::string name, Weapon &w_name);
	~HumanA();
	void	attack(void) const;
	private:
	std::string _name;
	Weapon& _weaponref;
};


#endif
