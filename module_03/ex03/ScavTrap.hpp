/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:04:11 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/11 21:10:40 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAV_TRAP_
#define _SCAV_TRAP_

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(ScavTrap const &asg);
        ScavTrap(std::string name);
        ~ScavTrap();
        void operator=(ScavTrap const &asg);
        void attack(std::string const & target);
        void guardGate();
};

#endif