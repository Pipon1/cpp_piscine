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

Fixed::Fixed(const Fixed &ref)
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

Fixed::Fixed(const int num)
{
    this->_fixed_point = num << this->_fractionned;
    std::cout << "Int constructor has been called." << std::endl;
}

Fixed::Fixed(const float num)
{
    this->_fixed_point = round(num * float(1U << this->_fractionned)\
    + (num >= 0 ? 0.5 : -0.5));
    std::cout << "Float constructor has been called." << std::endl;
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

float	Fixed::toFloat(void) const
{
	return (this->_fixed_point / float(1U << this->_fractionned));
}

int	Fixed::toInt(void) const
{
	return (this->_fixed_point >> this->_fractionned);	
}

std::ostream &operator<<(std::ostream &out, const Fixed &ref)
{
	out << ref.toFloat();
	return (out);
}