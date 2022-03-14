/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:11:59 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/14 23:05:31 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    _type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat constructor called" << std::endl;    
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}