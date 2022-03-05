/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 19:59:07 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/05 20:34:29 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    _type = type;
}

Weapon::Weapon()
{

}

Weapon::~Weapon()
{
    
}

const std::string &Weapon::getType()
{
    return ((const std::string &)_type);
}

void Weapon::setType(std::string type)
{
    _type = type;
}