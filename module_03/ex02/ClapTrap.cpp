/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:02:15 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 16:39:25 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)  : _hitpoints(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "ClapTrap named constructor" << std::endl;
    _name = name;
}

ClapTrap::ClapTrap(ClapTrap const &asg)
{
    std::cout << "ClapTrap assignation constructor" << std::endl;
    *this = asg;
}

ClapTrap::ClapTrap() : _hitpoints(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "ClapTrap default constructor" << std::endl;
    _name = "Default";
}

ClapTrap::~ClapTrap()
{
       std::cout << "ClapTrap destructor" << std::endl;
}

ClapTrap   &ClapTrap::operator=(ClapTrap const &asg)
{
    _name = asg._name;
    _attack_damage = asg._attack_damage;
    _energy_points = asg._energy_points;
    _hitpoints = asg._hitpoints;
    return (*this);
}

void ClapTrap::attack(std::string const &target)
{
    if (_energy_points)
        std::cout << "ClapTrap : " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount)
        std::cout << "ClapTrap  : " << _name << " takes damage equivalent to -" << amount << " of it's hitpoints!" << std::endl;
    _hitpoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (amount)
        std::cout << "ClapTrap  : " << _name << " repairs the equivalent to +" << amount << " of it's hitpoints!" << std::endl;
    _hitpoints += amount;
}