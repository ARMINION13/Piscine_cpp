/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:36:09 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 20:48:22 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (_type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "Animal sound!!" << std::endl;   
}

WrongAnimal::WrongAnimal(WrongAnimal &asg)
{
    *this = asg;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &asg)
{
    this->_type = asg.getType();
    return (*this);
}