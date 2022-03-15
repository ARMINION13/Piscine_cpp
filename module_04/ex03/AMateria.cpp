/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:08:11 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/15 21:18:06 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
    
}

AMateria::AMateria(AMateria &asg)
{
    *this = asg;
}

AMateria::AMateria(std::string const & type)
{
    _type = type;
}

AMateria::~AMateria()
{
    
}

void AMateria::operator=(AMateria &asg)
{
    this->_type = asg._type;
}

std::string const & AMateria::getType() const
{
    return (_type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}