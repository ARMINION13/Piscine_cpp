/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:02:20 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/11 20:50:12 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap joe("joe");
    
    joe.myStats();
    joe.attack("frank");
    joe.highFivesGuys();
    joe.guardGate();
    joe.takeDamage(5);
    joe.beRepaired(10);
    joe.whoAmI();
    return (0);
}