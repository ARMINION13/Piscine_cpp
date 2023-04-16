/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:52:55 by rgirondo          #+#    #+#             */
/*   Updated: 2023/04/16 18:57:57 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool is_unsigned_int(std::string str)
{
    if (str[0] < '0' || str[0] > '9')
        return false;
    for (std::string::iterator it = str.begin(); it != str.end(); it++)
    {
        if (*it < '0' || *it > '9')
            return false;
    }
    return true;
}

bool is_operator(std::string str)
{
    if (str[0] != '+' && str[0] != '-' && str[0] != '*' && str[0] != '/')
        return false;
    for (std::string::iterator it = str.begin(); it != str.end(); it++)
    {
        if (*it != '+' && *it != '-' && *it != '*' && *it != '/')
            return false;
    }
    return true;
}

bool RPN::check_RPN(std::string str)
{
    std::stringstream aux1(str);
    std::string aux2;
    stack_type aux3;
    int op = 0;

    while(getline(aux1, aux2, ' '))
    {
        if (aux2[0] != '\0')
        {
            if (aux2.size() != 1 || (is_unsigned_int(aux2) == false && is_operator(aux2) == false))
                return false;
            if (is_unsigned_int(aux2) == true)
                op++;
            if (is_operator(aux2) == true)
                op--;
            if (op < 1)
                return false;
            aux3.push(aux2);
        }
    }
    if (is_operator(aux3.top()) == false || op < 1)
        return false;
    while (!aux3.empty())
    {
        _stack.push(aux3.top());
        aux3.pop();
    }
    return true;
}

int RPN::do_RPN()
{
    std::stack<std::string> oper;
    std::stack<int> aux;
    int result = 0;

    if (_stack.empty())
        return 0;   
    while (!_stack.empty())
    { 
        
    }
    return result;
}

RPN::RPN(RPN &asg)
{
    *this = asg;
}

RPN::RPN(RPN::stack_type &asg)
{
    _stack = asg;
}

RPN::RPN()
{

}

RPN::~RPN()
{

}

RPN &RPN::operator=(RPN &asg)
{
    _stack = asg._stack;
    return *this;
}