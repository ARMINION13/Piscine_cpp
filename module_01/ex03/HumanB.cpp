/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 20:11:33 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/09 18:34:14 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    _name = name;
}

HumanB::~HumanB()
{

}

void HumanB::setName(std::string name)
{
    _name = name;
}

std::string HumanB::getName() const
{
    return (_name);
}

void HumanB::setWeapon(Weapon &club)
{
    _weapon = &club;
}

void HumanB::attack()
{
    if (_weapon)
        std::cout << getName() << " attack with his " << _weapon->getType() << std::endl;
    else
        std::cout << getName() << " attack with no weapon" << std::endl;        
}
