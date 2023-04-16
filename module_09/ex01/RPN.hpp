/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:44:59 by rgirondo          #+#    #+#             */
/*   Updated: 2023/04/16 17:47:29 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _RPN_
#define _RPN_

#include <iostream>
#include <stack>
#include <fstream>
#include <sstream>
#include <string>

class RPN
{
    public:
        typedef std::stack<std::string> stack_type;
 
    private:
        stack_type  _stack;

    public:
        RPN();
        ~RPN();
        RPN(RPN &asg);
        RPN(stack_type &asg);
        RPN &operator=(RPN &asg);
        
        bool check_RPN(std::string str);
        int do_RPN();
};

#endif