/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:04:27 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 20:35:49 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_
#define _CAT_

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &asg);
        Cat &operator=(const Cat &asg);
        void makeSound() const;
        virtual ~Cat();
    private:
        Brain *_brain;
};

#endif