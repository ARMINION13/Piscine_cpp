/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:19:51 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/11 21:16:20 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) 
{
    std::cout << "ScavTrap named constructor" << std::endl;
    _name = name;
    this->_energy_points = 50;
}

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor" << std::endl;
    _energy_points = 50;
}

ScavTrap::ScavTrap(ScavTrap const &asg)
{
    std::cout << "ScavTrap assignation constructor" << std::endl;
    *this = asg;
}

ScavTrap::~ScavTrap()
{
       std::cout << "ScavTrap destructor" << std::endl;
}

void   ScavTrap::operator=(ScavTrap const &asg)
{
    _name = asg._name;
    _attack_damage = asg._attack_damage;
    _energy_points = asg._energy_points;
    _hitpoints = asg._hitpoints;
}

void ScavTrap::attack(std::string const & target)
{
    if (_energy_points)
        std::cout << "ScavTrap : " << _name << " uses 1 of it's " << _energy_points << " energy points and " << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
    _energy_points--;
}
        
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap : " << _name << " has enterred in Gate keeper mode!" << std::endl;
}