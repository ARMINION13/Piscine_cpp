/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:04:11 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/11 18:50:35 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAG_TRAP_
#define _FRAG_TRAP_

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(FragTrap const &asg);
        FragTrap(std::string name);
        ~FragTrap();
        void operator=(FragTrap const &asg);
        void attack(std::string const & target);
        void highFivesGuys();

};

#endif