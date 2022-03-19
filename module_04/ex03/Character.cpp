/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:32:58 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 21:41:24 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    _materia[0] = NULL;
    _materia[1] = NULL;
    _materia[2] = NULL;
    _materia[3] = NULL;_mposition = 0;
    _name = "default";
}

Character::Character(const Character &asg)
{
    *this = asg;
}

Character::Character(std::string name)
{
    _materia[0] = NULL;
    _materia[1] = NULL;
    _materia[2] = NULL;
    _materia[3] = NULL;
    _mposition = 0;
    _name = name;
}

Character::~Character()
{
    
}

Character &Character::operator=(const Character &asg)
{
    _materia[0] = asg._materia[0];
    _materia[1] = asg._materia[1];
    _materia[2] = asg._materia[2];
    _materia[3] = asg._materia[3];
    _name = asg._name;
    _mposition = asg._mposition;
    return (*this);
}

std::string const & Character::getName() const
{
    return (_name);
}

void Character::equip(AMateria *m)
{
    if (!m)
        return ;
    _materia[_mposition++] = m;
    if (_mposition == 4)
        _mposition = 0;
}

void Character::unequip(int idx)
{
    if (idx >= 4)
        return ;
    _materia[idx] = NULL;
    while (idx < 4)
    {
        _materia[idx] = _materia[idx + 1];
        _materia[idx + 1] = NULL;
        idx++;
    }
}

void Character::use(int idx, ICharacter& target)
{
    std::cout << _name;
    if ( idx < 4 && _materia[idx])
        _materia[idx]->use(target);
    else
        std::cout << " uses no materia" << std::endl;
}