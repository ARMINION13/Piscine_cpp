/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:36:15 by rgirondo          #+#    #+#             */
/*   Updated: 2023/04/16 15:59:28 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    RPN oper;

    if (argc < 2)
    {
        std::cout << "Error: no arguments" << std::endl;
        return (-1);
    }
    if (oper.check_RPN(std::string(argv[1])) == false)
    {
        std::cout << "Error: not valid RPN" << std::endl;
        return (-1);
    }
}