/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:02:20 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/11 18:57:30 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap joe("joe");
    
    joe.attack("frank");
    joe.highFivesGuys();
    joe.takeDamage(5);
    return (0);
}