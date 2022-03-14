/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:49:35 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/14 17:19:47 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <math.h>

// [constructores y destructores]

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

// [funciones miembro de utilidad]

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

// [sobrecarga de asignacion]

void   Fixed::operator=(Fixed const &asg)
{
    this->setRawBits(asg.getRawBits());
}

// [sobrecarga de stream]

std::ostream&    operator<<(std::ostream &o, Fixed const &fixed)
{
    o << fixed.toFloat();
    return o;
}

// [comparadores]

bool    Fixed::operator>(Fixed const &var)
{
    if (this->_val > var._val)
        return (true);
    else
        return (false);
}

bool    Fixed::operator<(Fixed const &var)
{
    if (this->_val < var._val)
        return (true);
    else
        return (false);
}

bool    Fixed::operator>=(Fixed const &var)
{
    if (this->_val >= var._val)
        return (true);
    else
        return (false);
}

bool    Fixed::operator<=(Fixed const &var)
{
    if (this->_val <= var._val)
        return (true);
    else
        return (false);
}

bool    Fixed::operator==(Fixed const &var)
{
    if (this->_val == var._val)
        return (true);
    else
        return (false);
}

bool    Fixed::operator!=(Fixed const &var)
{
    if (this->_val != var._val)
        return (true);
    else
        return (false);
}

// [+ , -, *, /]

Fixed Fixed::operator+(Fixed const &var) const
{
    Fixed tmp;
    
    tmp._val = (this->_val + var._val) / 256;
    return tmp;
}

Fixed Fixed::operator-(Fixed const &var) const
{
    Fixed tmp;
    
    tmp._val = (this->_val - var._val) / 256;
    return tmp;
}

Fixed Fixed::operator*(Fixed const &var) const
{
    Fixed tmp;
    
    tmp._val = (this->_val * var._val) / 256;
    return tmp;
}

Fixed Fixed::operator/(Fixed const &var) const
{
    Fixed tmp;
    
    tmp._val = (this->_val / var._val) / 256;
    return tmp;
}

// [incrementos y decrementos]

Fixed& Fixed::operator--()
{
    _val -= 1;
    return (*this);
}

Fixed& Fixed::operator++()
{
    _val += 1;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    
    _val += 1;
    return tmp;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    
    _val -= 1;
    return tmp;
}

// [min & max]

Fixed &Fixed::min(Fixed &nbr1, Fixed &nbr2)
{
    if (nbr1._val < nbr2._val)
        return (nbr1);
    else
        return (nbr2);
}

Fixed &Fixed::max(Fixed &nbr1, Fixed &nbr2)
{
    if (nbr1._val > nbr2._val)
        return (nbr1);
    else
        return (nbr2);
}

const Fixed &Fixed::min(const Fixed &nbr1, const Fixed &nbr2)
{
    if (nbr1._val < nbr2._val)
        return (nbr1);
    else
        return (nbr2);
}

const Fixed &Fixed::max(const Fixed &nbr1, const Fixed &nbr2)
{
    if (nbr1._val > nbr2._val)
        return (nbr1);
    else
        return (nbr2);
}