/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:34:38 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/12 18:45:07 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog()
{
    std::cout << "WrongDog constructor called" << std::endl;
    _type = "Dog";
}

WrongDog::~WrongDog()
{
    std::cout << "WrongDog constructor called" << std::endl;    
}

void WrongDog::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}