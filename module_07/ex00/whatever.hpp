/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:08:39 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/20 19:12:06 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WHATEVER_
#define _WHATEVER_

#include <iostream>

template <typename T>
void swap(T & a, T & b)
{
    T c;
    c = a;
    a = b;
    b = c;
}
template <typename T>
T min(T const & a, T const & b)
{
    if (a == b)
        return (b);
    if (a < b)
        return (a);
    else
        return (b);
}
template <typename T>
T max(T const & a, T const & b)
{
    if (a == b)
        return (b);
    if (a > b)
        return (a);
    else
        return (b);
}

#endif