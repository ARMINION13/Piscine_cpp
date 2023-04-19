/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:36:15 by rgirondo          #+#    #+#             */
/*   Updated: 2023/04/19 17:49:26 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

// void leaks()
// {
//     system ("leaks RPN");
// }

int main(int argc, char **argv)
{
    // atexit(leaks);
    RPN oper;

    if (argc < 2)
    {
        std::cout << "Error: no arguments" << std::endl;
        return (-1);
    }
    if (oper.check_RPN(std::string(argv[1])) == false)
    {
        std::cout << "Error: not valid RPN input" << std::endl;
        return (-1);
    }
    std::cout << oper.do_RPN() << std::endl;
    return 0;
}