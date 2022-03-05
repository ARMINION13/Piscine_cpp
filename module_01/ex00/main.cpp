/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:06:30 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/05 17:56:15 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zombie;
    Zombie *zombie1;
    Zombie zombie2("Juan");

    zombie1 = newZombie("Pedro");
    zombie.announce();
    zombie1->announce();
    zombie2.announce();
    randomChump("Random");    
    delete zombie1;
    return (0);
}