/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:08:11 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 21:04:34 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
    
}

AMateria::AMateria(const AMateria &asg)
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

AMateria &AMateria::operator=(const AMateria &asg)
{
    this->_type = asg._type;
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (_type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}