/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 20:11:33 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/05 21:11:38 by rgirondo         ###   ########.fr       */
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
    std::cout << getName() << " attack with his " << _weapon->getType() << std::endl;
}
