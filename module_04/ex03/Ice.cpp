/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:14:08 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 21:49:37 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    _type = "ice";
}

Ice::Ice(const Ice &asg)
{
    *this = asg;
}

Ice::~Ice()
{
    
}

AMateria* Ice::clone() const
{
    AMateria *tmp;

    tmp = new Ice();
    return (tmp);
}

Ice &Ice::operator=(const Ice &asg)
{
    this->_type = asg._type;
    return (*this);
}


void Ice::use(ICharacter& target)
{
    std::cout << " uses " << _type << " against " << target.getName() << std::endl;
}