/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:49:35 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/08 19:28:35 by rgirondo         ###   ########.fr       */
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

Fixed::Fixed(Fixed &asg)
{
    std::cout << "Copy constructor called" << std::endl;
    operator=(asg);
}

int Fixed::getRawBits() const
{
    std::cout << "GetRawBits member function called" << std::endl;
    return (this->_val);
}

void Fixed::setRawBits(int const raw)
{
    this->_val = raw;
}

void   Fixed::operator=(Fixed &asg)
{
    std::cout << "Assignation operator called" << std::endl;
    this->setRawBits(asg.getRawBits());
}