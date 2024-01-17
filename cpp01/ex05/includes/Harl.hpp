/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:55:48 by hefurrer          #+#    #+#             */
/*   Updated: 2024/01/10 11:55:50 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
    public:
        Harl(void);
        ~Harl(void);
        void complain( std::string level );
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};

#endif
