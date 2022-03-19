/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:04:27 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 20:09:34 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_
#define _CAT_

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(Cat &asg);
        Cat &operator=(Cat &asg);
        void makeSound() const;
        ~Cat();
};

#endif