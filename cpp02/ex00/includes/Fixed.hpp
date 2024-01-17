/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:26:32 by hefurrer          #+#    #+#             */
/*   Updated: 2024/01/17 11:26:34 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

#include    <string>
#include    <iostream>

class Fixed
{
    public:
        Fixed(void);
        Fixed(Fixed &ref);
        Fixed &operator=(const Fixed &ref);
        ~Fixed(void);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
    private:
        int                 _fixed_point;
        static const int    _fractionned = 8;
};

#endif
