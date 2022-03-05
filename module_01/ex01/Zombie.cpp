/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:08:46 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/05 19:05:55 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce( void )
{
    std::cout << _name  << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie (std::string name)
{
    set_name(name);
}

Zombie::Zombie ()
{
    this->_name = "Default";
}

Zombie::~Zombie ()
{
    std::cout << _name << " has died" << std::endl;
}

void    Zombie::set_name(std::string name)
{
    this->_name = name;
}
