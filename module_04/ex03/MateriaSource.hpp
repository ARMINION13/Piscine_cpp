/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:48:43 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/15 21:21:40 by rgirondo         ###   ########.fr       */
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
        MateriaSource(MateriaSource &asg);
        ~MateriaSource();
        void operator=(MateriaSource &asg);
        virtual void learnMateria(AMateria *m);
        virtual AMateria* createMateria(std::string const & type);  
};

#endif