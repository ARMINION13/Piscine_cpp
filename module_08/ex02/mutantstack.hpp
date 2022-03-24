/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:27:51 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/24 17:18:30 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MUTANT_
#define _MUTANT_

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator riterator;
        typedef typename std::stack<T>::container_type::const_iterator citerator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator criterator;

        MutantStack()
        {
            
        }
        MutantStack(const MutantStack &asg)
        {
            *this = asg;
        }
        ~MutantStack()
        {
            
        }
        MutantStack<T> &operator=(const MutantStack &asg)
        {
            std::stack<T>::operator=(asg);
            return (*this);
        }
        iterator begin()
        {
            return (this->c.begin());
        }
        iterator end()
        {
            return (this->c.end());
        }
        citerator cbegin()
        {
            return (this->c.cbegin());
        }
        citerator cend()
        {
            return (this->c.cend());
        }
        riterator rbegin()
        {
            return (this->c.rbegin());
        }
        riterator rend()
        {
            return (this->c.rend());
        }
        criterator crbegin()
        {
            return (this->c.crbegin());
        }
        criterator crend()
        {
            return (this->c.crend());
        }
};

#endif