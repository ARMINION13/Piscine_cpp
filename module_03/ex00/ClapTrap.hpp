/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:02:10 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 16:30:37 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAP_TRAP_
#define _CLAP_TRAP_

#include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        int _hitpoints;
        int _energy_points;
        int _attack_damage;
    public:
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &asg);
        ClapTrap();
        ~ClapTrap();
        ClapTrap &operator=(ClapTrap const &asg);
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif