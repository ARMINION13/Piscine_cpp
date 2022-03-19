/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:04:11 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 17:03:12 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAG_TRAP_
#define _FRAG_TRAP_

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{  
    protected:
        std::string _aux;
    public:
        FragTrap();
        FragTrap(FragTrap const &asg);
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap &operator=(FragTrap const &asg);
        void attack(std::string const & target);
        void highFivesGuys();
};

#endif