/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:02:20 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/09 22:04:44 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap joe(NULL);
    
    joe.attack("frank");
    joe.takeDamage(5);
    joe.beRepaired(3);
    return (0);
}