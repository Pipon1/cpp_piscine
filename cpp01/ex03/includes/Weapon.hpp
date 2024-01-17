/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:49:21 by hefurrer          #+#    #+#             */
/*   Updated: 2024/01/10 11:49:23 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include    <iostream>

class Weapon
{
    public:
        Weapon(void);
        Weapon(std::string type);
        Weapon &operator=(const Weapon& type);
        ~Weapon();
        void setType(std::string type);
        std::string getType(void) const;
    private:
        std::string _type;
};

#endif
