/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:55:36 by hefurrer          #+#    #+#             */
/*   Updated: 2024/01/10 11:55:37 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Harl.hpp"

int main(void)
{
	Harl american_dude;

	american_dude.complain("DEBUG");
	american_dude.complain("INFO");
	american_dude.complain("WARNING");
	american_dude.complain("ERROR");
	return (0);
}
