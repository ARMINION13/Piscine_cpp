/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:49:35 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/14 22:49:31 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _val(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &asg)
{
    std::cout << "Copy constructor called" << std::endl;
    operator=(asg);
}

Fixed::Fixed(const int nbr)
{
    std::cout << "Int constructor called" << std::endl;
    setRawBits(nbr * 256);
}

Fixed::Fixed(const float nbr)
{
    std::cout << "Float constructor called" << std::endl;
    this->_val = roundf(256 * nbr);
}

int Fixed::toInt() const
{
    return (_val / 256);
}

float Fixed::toFloat() const
{
    return ((float)_val / 256);
}

int Fixed::getRawBits() const
{
    return (this->_val);
}

void Fixed::setRawBits(int const raw)
{
    this->_val = raw;
}

void   Fixed::operator=(Fixed const &asg)
{
    std::cout << "Assignation operator called" << std::endl;
    this->setRawBits(asg.getRawBits());
}

std::ostream&    operator<<(std::ostream &o, Fixed const &fixed)
{
    o << fixed.toFloat();
    return o;
}