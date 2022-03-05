/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:06:30 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/05 19:14:00 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *horde;
    int i;

    i = 0;
    horde = zombieHorde(10, "Juan");
    while (i < 10)
    {
        horde[i++].announce();
    }
    delete [] horde;
    return (0);
}