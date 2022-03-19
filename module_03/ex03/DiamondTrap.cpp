/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 19:00:58 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 17:05:21 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
{
    std::cout << "DiamondTrap named constructor" << std::endl;
    _name = name;
    ClapTrap::_name = name + "_clap_name";
    ScavTrap::_aux = this->_name;
    FragTrap::_aux = this->_name;
}

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap default constructor" << std::endl;
    _name = "Default";
    ClapTrap::_name = _name + "_clap_name";
    ScavTrap::_aux = this->_name;
    FragTrap::_aux = this->_name;
}

DiamondTrap::DiamondTrap(DiamondTrap const &asg)
{
    std::cout << "DiamondTrap assignation constructor" << std::endl;
    *this = asg;
    ClapTrap::_name = _name + "_clap_name";
    ScavTrap::_aux = this->_name;
    FragTrap::_aux = this->_name;
}

DiamondTrap::~DiamondTrap()
{
       std::cout << "DiamondTrap destructor" << std::endl;
}

DiamondTrap   &DiamondTrap::operator=(DiamondTrap const &asg)
{
    _name = asg._name;
    _attack_damage = asg._attack_damage;
    _energy_points = asg._energy_points;
    _hitpoints = asg._hitpoints;
    return (*this);
}

void DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout  << "DiamondTrap : my name is " << _name << " and my grandpa's " << ClapTrap::_name << std::endl;
}

void DiamondTrap::myStats()
{
    std::cout << "DiamondTrap : my energy = " << _energy_points;
    std::cout << ", my name = " << _name;
    std::cout << ", my hitpoints = " << _hitpoints;
    std::cout << ", my attack damage = " << _attack_damage << std::endl;
}
