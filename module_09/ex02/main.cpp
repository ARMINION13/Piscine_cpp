/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:05:54 by rgirondo          #+#    #+#             */
/*   Updated: 2023/05/01 20:10:50 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    PmergeMe PM;

    if (argc < 2)
    {
        std::cout << "Error: no arguments provided" << std::endl;
        return (-1);
    }
    if (argc == 2)
        return (0);
    else
    {
        if (PM.initialize(argv) == true)
        {
            PmergeMe::vector_type vct = PM.getVector();
            PmergeMe::deque_type dqe = PM.getDeque();

            std::cout << "VCT Before : ";
            for(PmergeMe::vector_type::iterator it = vct.begin(); it != vct.end(); it++)
                std::cout << *it << " ";
            std::cout << std::endl;

            std::cout << "DQE Before : ";
            for(PmergeMe::deque_type::iterator it = dqe.begin(); it != dqe.end(); it++)
                std::cout << *it << " ";
            std::cout << std::endl;
            PM.sort();
        }
        else
            std::cout << "Error: args duplicated or not possitive numbers" << std::endl;
    }
    return (0);
}