/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:02:20 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/11 18:14:46 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap pedro("pedro");
    ClapTrap joe;

    joe = pedro;
    
    joe.attack("frank");
    joe.takeDamage(5);
    joe.beRepaired(3);
    return (0);
}