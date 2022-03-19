/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:04:27 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 20:15:21 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONG_DOG_
#define _WRONG_DOG_

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
    public:
        WrongDog();
        ~WrongDog();
        WrongDog(WrongDog &asg);
        WrongDog &operator=(WrongDog &asg); 
        void makeSound() const;
};

#endif