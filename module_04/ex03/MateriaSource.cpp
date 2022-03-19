/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:57:15 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 23:03:35 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    _mposition = 0;
}

MateriaSource::MateriaSource(const MateriaSource & asg)
{
    *this = asg;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < _mposition ; i++)
        delete _materia[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &asg)
{
    _materia[0] = asg._materia[0];
    _materia[1] = asg._materia[1];
    _materia[2] = asg._materia[2];
    _materia[3] = asg._materia[3];
    _mposition = asg._mposition;
    return (*this);
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
    while (i < 4)
    {
        if (type == _materia[i]->getType())
            break;
        i++;
    }
    if (i == 4)
        return (NULL);
    return (_materia[i]->clone());
}