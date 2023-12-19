/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:51:48 by hefurrer          #+#    #+#             */
/*   Updated: 2023/12/19 14:19:57 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (i = 1; av[i]; i++)
			for (j = 0; av[i][j]; j++)
				std::cout << char(toupper(av[i][j]));
		std::cout << std::endl;
	}
	return (1);
}
