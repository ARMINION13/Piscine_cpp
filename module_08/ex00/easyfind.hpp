/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:28:36 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/23 21:33:36 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASY_FIND_
#define _EASY_FIND_

#include <iostream>

class FindException : public std::exception
{
    public:
        const char *what () const throw ()
        {
            return "easyFind::exception";
        } 
};

template<typename T>
typename T::iterator easyfind(T cont, int i)
{
    typename T::iterator it;
    
    it = find(cont.begin(), cont.end(), i);
    if (*it == i)
        return(it);
    else
        throw FindException();
}

#endif