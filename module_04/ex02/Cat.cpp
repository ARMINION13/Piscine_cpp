/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:11:59 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 20:44:44 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    _type = "Cat";
    _brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;    
    delete _brain;
}
void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}

Cat::Cat(const Cat &asg)
{
    _brain = new Brain();
    *this = asg;
}

Cat &Cat::operator=(const Cat &asg)
{
    this->_type = asg.getType();
    *(this->_brain) = *(asg._brain);
    return (*this);
}