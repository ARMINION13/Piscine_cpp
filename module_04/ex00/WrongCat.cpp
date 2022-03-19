/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:11:59 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/12 17:32:43 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor called" << std::endl;
    _type = "Cat";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat constructor called" << std::endl;    
}

void WrongCat::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}

WrongCat::WrongCat(WrongCat &asg)
{
    *this = asg;
}

WrongCat &WrongCat::operator=(WrongCat &asg)
{
    this->_type = asg.getType();
    return (*this);
}