/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:01:31 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 20:49:48 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONG_ANIMAL_
#define _WRONG_ANIMAL_

#include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        std::string getType() const;
        WrongAnimal();
        WrongAnimal(WrongAnimal &asg);
        WrongAnimal &operator=(WrongAnimal &asg);
        virtual ~WrongAnimal();
        void makeSound() const;
        
};

#endif