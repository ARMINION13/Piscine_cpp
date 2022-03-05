/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 20:11:33 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/05 21:02:30 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &club) : _weapon(club)
{
    _name = name;
}

HumanA::~HumanA()
{

}

void HumanA::setName(std::string name)
{
    _name = name;
}

std::string HumanA::getName() const
{
    return (_name);
}

void HumanA::attack()
{
    std::cout << getName() << " attack with his " << _weapon.getType() << std::endl;
}
