/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:26:26 by hefurrer          #+#    #+#             */
/*   Updated: 2024/01/17 11:26:27 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "includes/Fixed.hpp"

Fixed::Fixed(void)
{
    this->_fixed_point = 0;
    std::cout << "Constructor has been called." << std::endl;
}

Fixed::Fixed(Fixed &ref)
{
    *this = ref;
    std::cout << "Copy constructor has been called." << std::endl;
}

Fixed &Fixed::operator=(const Fixed &ref)
{
    this->_fixed_point =  ref.getRawBits();
    std::cout << "Copy assignement operator has been called." << std::endl;
    return (*this);
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor has been called." << std::endl;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function has been called." << std::endl;
    return (this->_fixed_point);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function has been called." << std::endl;
    this->_fixed_point = raw;
}
