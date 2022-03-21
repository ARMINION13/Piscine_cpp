/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:02:35 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/21 13:37:35 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAY_
#define _ARRAY_

#include <iostream>

template<typename T>
class Array
{
    public:
        Array();
        Array(unsigned int n);
        Array(Array<T> const &asg);
        ~Array();
        T& operator[](unsigned int index);
        Array<T> &operator=(Array<T> const &asg);
        T const *getArray() const;
        unsigned int getSize() const;
    private:
        T *_array;
        unsigned int _size;
};
template<typename T>
Array<T>::Array() : _array(NULL) , _size(0)
{

}
template<typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]) , _size(n)
{
    
}
template<typename T>
T const *Array<T>::getArray() const
{
    return (_array);
}
template<typename T>
unsigned int Array<T>::getSize() const
{
    return (_size);
}
template<typename T>
Array<T>::~Array()
{
    if (_array)
        delete _array;
}
template<typename T>
Array<T>::Array(Array<T> const &asg)
{
    *this = asg;
}
template<typename T>
Array<T> &Array<T>::operator=(Array<T> const &asg)
{
    _array = new T[asg.getSize()];
    _size = asg.getSize();
    T const *tmp;
    tmp = asg.getArray();
    for (unsigned int i = 0; i < _size; i++)
        _array[i] = tmp[i];
    return (*this);
}
template<typename T>
T &Array<T>::operator[](unsigned int index)
{
    if (index >= _size) {
        throw (std::exception());
    }
    return _array[index];
}

#endif