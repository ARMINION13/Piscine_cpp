/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 22:34:24 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/20 22:56:49 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ITER_
#define _ITER_

#include <iostream>

template<typename T>
void func(T const & a)
{
    std::cout << a << std::endl;
}

template<typename T>
void iter(T *array, int const _size, void (*func)(T const &))
{
    for (int i = 0; i < _size; i++)
        func(array[i]);
}

#endif