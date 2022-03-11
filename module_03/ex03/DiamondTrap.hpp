/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 19:00:43 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/11 21:09:56 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DIAMOND_TRAP_
#define _DIAMOND_TRAP_

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    protected:
        std::string _name;
    public:
        DiamondTrap();
        DiamondTrap(DiamondTrap const &asg);
        DiamondTrap(std::string name);
        ~DiamondTrap();
        void operator=(DiamondTrap const &asg);
        void attack(std::string const & target);
        void whoAmI();
        void myStats();
};

#endif