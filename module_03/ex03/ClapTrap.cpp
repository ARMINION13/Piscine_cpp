/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:02:15 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/11 20:53:35 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)  : _hitpoints(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "ClapTrap named constructor" << std::endl;
    _name = name;
    std::cout<<_name<<std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &asg)
{
    std::cout << "ClapTrap assignation constructor" << std::endl;
    _name = asg._name;
    _attack_damage = asg._attack_damage;
    _energy_points = asg._energy_points;
    _hitpoints = asg._hitpoints;
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

void   ClapTrap::operator=(ClapTrap const &asg)
{
    _name = asg._name;
    _attack_damage = asg._attack_damage;
    _energy_points = asg._energy_points;
    _hitpoints = asg._hitpoints;
}

void ClapTrap::attack(std::string const &target)
{
    if (_energy_points)
        std::cout << "ClapTrap : " << _name << " uses 1 of it's " << _energy_points << " energy points and " << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
    _energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount)
        std::cout << "ClapTrap  : " << _name << " takes damage equivalent to -" << amount << " of it's " << _hitpoints << " hitpoints!" << std::endl;
    _hitpoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (amount)
        std::cout << "ClapTrap  : " << _name << " uses 1 of it's " << _energy_points << " energy points and" << " repairs the equivalent to +" << amount << " of it's " << _hitpoints << " hitpoints!" << std::endl;
    _hitpoints += amount;
    _energy_points--;
}