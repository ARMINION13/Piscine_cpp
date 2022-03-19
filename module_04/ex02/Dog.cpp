/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:06:59 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 20:56:16 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    _type = "Dog";
    _brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog constructor called" << std::endl;    
    delete _brain;
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}

Dog::Dog(const Dog &asg)
{
    _brain = new Brain();
    *this = asg;
}

Dog &Dog::operator=(const Dog &asg)
{
    this->_type = asg.getType();
    *(this->_brain) = *(asg._brain);
    return (*this);
}