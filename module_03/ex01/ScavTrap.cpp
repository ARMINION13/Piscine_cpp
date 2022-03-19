/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:19:51 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 16:37:49 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap named constructor" << std::endl;
    this->_hitpoints = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    this->_name = name;
}

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor" << std::endl;
    _hitpoints = 100;
    _energy_points = 50;
    _attack_damage = 20;
    _name = "Default";
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

ScavTrap   &ScavTrap::operator=(ScavTrap const &asg)
{
    _name = asg._name;
    _attack_damage = asg._attack_damage;
    _energy_points = asg._energy_points;
    _hitpoints = asg._hitpoints;
    return (*this);
}

void ScavTrap::attack(std::string const & target)
{
    if (_energy_points)
        std::cout << "ScavTrap : " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}
        
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap : " << _name << " has enterred in Gate keeper mode!" << std::endl;
}