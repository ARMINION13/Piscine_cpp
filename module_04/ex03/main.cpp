/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:27:31 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 23:13:24 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");
    
    AMateria* tmp;
    AMateria* tmp2;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    tmp2 = src->createMateria("cure");
    me->equip(tmp2);
    me->use(1, *bob);
  
    delete tmp2;
    delete tmp;
    delete bob;
    delete me;
    delete src;
    return 0;
}