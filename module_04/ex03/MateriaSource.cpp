/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:57:15 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/15 21:23:08 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    _mposition = 0;
}

MateriaSource::MateriaSource(MateriaSource & asg)
{
    *this = asg;
}

MateriaSource::~MateriaSource()
{
    
}

void MateriaSource::operator=(MateriaSource &asg)
{
    _materia[0] = asg._materia[0];
    _materia[1] = asg._materia[1];
    _materia[2] = asg._materia[2];
    _materia[3] = asg._materia[3];
    _mposition = asg._mposition;
}

void MateriaSource::learnMateria(AMateria *m)
{
    _materia[_mposition++] = m;
    if (_mposition >= 4)
        _mposition = 0;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i;
    
    i = 0;
    while (type != _materia[i]->getType() && i < 4)
        i++;
    return (_materia[i]->clone());
}