/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:48:16 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/23 21:08:42 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_
#define _SPAN_

#include <iostream>
#include <vector>

class Span
{
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &asg);
        ~Span();
        Span &operator=(const Span &asg);
        std::vector<int> getContainer() const;
        unsigned int getLimit() const;
        void addNumber(int i);
        void multiAdd(int i, unsigned int times);
        int  shortestSpan();
        int  longestSpan();
        template<typename T>
        void addNumber(T &it, T &ite)
        {
            while (it != ite)
            {
                addNumber(*it);
                it++;
            }
        }
        class SpanLimitException : public std::exception
        {
            public:
                const char *what() const throw ();
        };
    private:
        std::vector<int> _v;
        unsigned int _N;
};

#endif