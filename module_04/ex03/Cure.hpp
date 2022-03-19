/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:19:44 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 21:59:24 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CURE_
#define _CURE_

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure &asg);
        virtual ~Cure();
        Cure &operator=(const Cure &asg);
        AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif