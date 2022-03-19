/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:06:59 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 20:10:20 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    _type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog constructor called" << std::endl;    
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}

Dog::Dog(Dog &asg)
{
    *this = asg;
}

Dog &Dog::operator=(Dog &asg)
{
    this->_type = asg.getType();
    return (*this);
}