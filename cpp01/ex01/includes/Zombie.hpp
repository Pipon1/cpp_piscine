/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:46:43 by hefurrer          #+#    #+#             */
/*   Updated: 2024/01/10 11:46:45 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	public:
		void	annonce(void) const;
		void	setname(std::string name);

		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
	private:
		std::string	_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
