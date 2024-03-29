/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:47:46 by hefurrer          #+#    #+#             */
/*   Updated: 2024/01/10 11:47:49 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <iostream>

int main(void)
{
    std::string stringDEF = "HI THIS IS BRAIN";
    std::string *stringPTR = &stringDEF;
    std::string &stringREF = stringDEF;

    std::cout << "Adresse var : " << &stringDEF << std::endl;
    std::cout << "Adresse ptr : " << stringPTR << std::endl;
    std::cout << "Adresse ref : " << &stringREF << std::endl;

    std::cout << "Contenu var : " << stringDEF << std::endl;
    std::cout << "Contenu ptr : " << *stringPTR << std::endl;
    std::cout << "Contenu ref : " << stringREF << std::endl;
    return (1);
}
