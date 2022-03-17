/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:43:03 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/17 18:59:22 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureacrat.hpp"

int main()
{
    std::cout << "-------------------------------" << std::endl;
    try
    {
        Bureacrat juan(140, "Juan");
        std::cout << juan << std::endl;
        Form    admission("Admission", 140, 140);
        std::cout << admission << std::endl;
        juan.signForm(admission);
        std::cout << admission << std::endl;
    }
    catch (std::exception & e)
    {   
    
    }
    std::cout << "-------------------------------" << std::endl;    
    return (0);
}
