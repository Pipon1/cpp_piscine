/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:45:08 by hefurrer          #+#    #+#             */
/*   Updated: 2024/01/10 11:45:10 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "includes/Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	return (new Zombie(name));
}
