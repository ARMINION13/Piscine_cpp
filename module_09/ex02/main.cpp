/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:05:54 by rgirondo          #+#    #+#             */
/*   Updated: 2023/05/05 16:45:45 by rgirondo         ###   ########.fr       */
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
            if (PM.sort() == true) 
                std::cout << "SUCCESS" << std::endl;
            else
                std::cout << "FAILURE" << std::endl;
        }
        else
            std::cout << "Error: no possitive numbers" << std::endl;
    }
    return (0);
}