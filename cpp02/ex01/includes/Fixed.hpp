/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:52:42 by hefurrer          #+#    #+#             */
/*   Updated: 2024/01/17 11:52:44 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

#include    <string>
#include    <iostream>
#include    <cmath>

class Fixed
{
    public:
        Fixed(void);
        Fixed(const Fixed &ref);
        Fixed &operator=(const Fixed &ref);
        Fixed(const int num);
        Fixed(const float num);
        ~Fixed(void);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
    private:
        int                 _fixed_point;
        static const int    _fractionned = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &ref);

#endif
