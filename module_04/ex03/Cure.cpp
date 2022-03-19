/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:14:08 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 21:51:08 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    _type = "cure";  
}

Cure::Cure(const Cure &asg)
{
    *this = asg;
}

Cure::~Cure()
{
    
}

AMateria* Cure::clone() const
{
    AMateria *tmp;

    tmp = new Cure();
    return (tmp);
}

Cure &Cure::operator=(const Cure &asg)
{
    this->_type = asg._type;
    return (*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << " uses " << _type << " to " << target.getName() << std::endl;
}