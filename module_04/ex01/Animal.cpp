/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:57:33 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 20:53:56 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return (_type);
}

void Animal::makeSound() const
{

}

Animal::Animal(const Animal &asg)
{
    *this = asg;
}

Animal &Animal::operator=(const Animal &asg)
{
    this->_type = asg.getType();
    return (*this);
}