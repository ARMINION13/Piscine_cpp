/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:04:27 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 20:11:15 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_
#define _DOG_

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(Dog &asg);
        Dog &operator=(Dog &asg);
        void makeSound() const;
        ~Dog();
};

#endif