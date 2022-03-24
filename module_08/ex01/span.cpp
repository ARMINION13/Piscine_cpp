/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:55:23 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/24 16:43:05 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span()
{

}

Span::Span(unsigned int N)
{
    _N = N;
}

Span::Span(const Span &asg)
{
    *this = asg;
}

Span::~Span()
{
    
}

Span &Span::operator=(const Span &asg)
{
    _v = asg.getContainer();
    _N = asg.getLimit();
    return (*this);
}

std::vector<int> Span::getContainer() const
{
    return (_v);
}

unsigned int Span::getLimit() const
{
    return (_N);
}

void Span::addNumber(int i)
{
    if (_v.size() == _N)
        throw SpanLimitException();
    _v.push_back(i);
}

void Span::multiAdd(int i, unsigned int times)
{
    for(unsigned int it = 0; it < times; it++)
    {
        if (_v.size() == _N)
            throw SpanLimitException();
        _v.push_back(i);
    }
}

int  Span::shortestSpan()
{
    if (_v.size() <= 1)
        throw SpanLimitException();
    std::vector<int> v2;
    v2 = _v; 
    sort(v2.begin(), v2.end());
    int tmp = 0;
    int shortest = (*v2.begin() - *(v2.begin() + 1));
    if (shortest < 0)
        shortest *= -1;
    for (std::vector<int>::iterator it = v2.begin(); it < (v2.end() - 1); it++)
    {
        tmp = (*it - *(it + 1));
        if (tmp < 0)
            tmp *= -1;
        if (tmp < shortest)
            shortest = tmp;
    }
    return (shortest);
}

int  Span::longestSpan()                
{
    if (_v.size() <= 1)    
        throw SpanLimitException();
    std::vector<int> v2;
    v2 = _v; 
    sort(v2.begin(), v2.end());
    int longest = (*v2.begin() - *(v2.end() - 1));
    if (longest < 0)
        longest *= -1;
    return (longest);
}

const char *Span::SpanLimitException::what() const throw ()
{
    return ("Span::exception");
}
