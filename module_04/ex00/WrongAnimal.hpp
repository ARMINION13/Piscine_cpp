/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:01:31 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/12 18:42:38 by rgirondo         ###   ########.fr       */
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
        virtual ~WrongAnimal();
        virtual void makeSound() const;
        
};

#endif