/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:19:51 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 17:03:08 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap named constructor" << std::endl;
    this->_hitpoints = 100;
    this->_attack_damage = 30;
    _name = name;
    _aux = name;
}

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor" << std::endl;
    _hitpoints = 100;
    _attack_damage = 30;
    _aux = _name;
}

FragTrap::FragTrap(FragTrap const &asg)
{
    std::cout << "FragTrap assignation constructor" << std::endl;
    *this = asg;
    this->_aux = _name;
}

FragTrap::~FragTrap()
{
       std::cout << "FragTrap destructor" << std::endl;
}

FragTrap   &FragTrap::operator=(FragTrap const &asg)
{
    _name = asg._name;
    _attack_damage = asg._attack_damage;
    _energy_points = asg._energy_points;
    _hitpoints = asg._hitpoints;
    return (*this);
}

void FragTrap::attack(std::string const & target)
{
    if (_energy_points)
        std::cout << "FragTrap : " << _aux << " uses 1 of it's " << _energy_points << " energy points and " << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
    _energy_points--;
}
        
void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap : " << _aux << " raise his hand with hope and no one notice!" << std::endl;
}