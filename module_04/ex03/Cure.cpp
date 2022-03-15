/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:14:08 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/15 21:25:47 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    _type = "cure";  
}

Cure::Cure(Cure &asg)
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

void Cure::use(ICharacter& target)
{
    std::cout << " uses " << _type << " to " << target.getName() << std::endl;
}