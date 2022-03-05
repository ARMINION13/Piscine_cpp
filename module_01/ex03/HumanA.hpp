/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 20:06:14 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/05 21:02:04 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMAN_A_
#define _HUMAN_A_

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon  &_weapon;
    public:
        HumanA(std::string name, Weapon &club);
        ~HumanA();
        void attack();
		std::string getName() const;
		void setName(std::string name);
};

#endif