/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:01:31 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 20:53:38 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_
#define _ANIMAL_

#include <iostream>
#include "Brain.hpp"

class Animal
{
    protected:
        std::string _type;
    public:
        std::string getType() const;
        Animal();
        Animal(const Animal &asg);
        Animal &operator=(const Animal &asg);
        virtual ~Animal();
        virtual void makeSound() const;   
};

#endif