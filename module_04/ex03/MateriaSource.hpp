/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:48:43 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 21:08:30 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MATERIA_SOURCE_
#define _MATERIA_SOURCE_

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    protected:
        AMateria *_materia[4];
        int _mposition;
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &asg);
        ~MateriaSource();
        MateriaSource &operator=(const MateriaSource &asg);
        virtual void learnMateria(AMateria *m);
        virtual AMateria* createMateria(std::string const & type);  
};

#endif