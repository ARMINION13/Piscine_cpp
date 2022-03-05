/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:08:56 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/05 19:04:25 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_LIB_
#define _ZOMBIE_LIB_

#include <iostream>

class Zombie
{
    private:
        std::string _name;

    public:
        Zombie(std::string name);
        Zombie();
        ~Zombie();
        void    announce(void);
        void    set_name(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif