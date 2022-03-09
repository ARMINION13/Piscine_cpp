/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:02:15 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/09 22:04:15 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)  : _hitpoints(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "ClapTrap constructor" << std::endl;
    _name = name;
}

ClapTrap::ClapTrap(void *name)  : _hitpoints(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "ClapTrap constructor" << std::endl;
    _name = "Default";
    (void)name;
}

ClapTrap::~ClapTrap()
{
       std::cout << "ClapTrap destructor" << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
    if (_energy_points)
        std::cout << "ClapTrap : " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount)
        std::cout << "ClapTrap : " << _name << " takes damage equivalent to -" << amount << " of it's hitpoints!" << std::endl;
    _hitpoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (amount)
        std::cout << "ClapTrap : " << _name << " repairs the equivalent to +" << amount << " of it's hitpoints!" << std::endl;
    _hitpoints += amount;
}