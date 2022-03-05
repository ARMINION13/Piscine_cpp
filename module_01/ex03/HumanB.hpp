/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 20:06:14 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/05 21:10:04 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMAN_B_
#define _HUMAN_B_

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon  *_weapon;
    public:
        HumanB(std::string name);
        ~HumanB();
        void attack();
		void setWeapon(Weapon &club);
		std::string getName() const;
		void setName(std::string name);
};

#endif