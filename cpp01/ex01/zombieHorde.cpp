/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:46:36 by hefurrer          #+#    #+#             */
/*   Updated: 2024/01/10 11:46:38 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "includes/Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*z = new Zombie[N];

	for (int i = 0; i < N; i++)
		z[i].setname(name);
	return (z);
}
