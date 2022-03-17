/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:43:03 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/16 20:24:25 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureacrat.hpp"

int main()
{
    std::cout << "-------------------------------" << std::endl;
    try
    {
        Bureacrat juan(151, "Juan");
        std::cout << juan << std::endl;
    }
    catch (std::exception & e)
    {   
    
    }
    std::cout << "-------------------------------" << std::endl;
    try
    {
        Bureacrat pepe(1, "Pepe");
        
        std::cout << pepe << std::endl;
        pepe.increment();
        std::cout << pepe << std::endl;
    }
    catch (std::exception & e)
    {   
    
    }
    std::cout << "-------------------------------" << std::endl;    
    try
    {
        Bureacrat luisa(150, "Luisa");
        
        std::cout << "" << luisa << std::endl;
        luisa.decrement();
        std::cout << luisa << std::endl;
    }
    catch (std::exception & e)
    {   
    
    }
    std::cout << "-------------------------------" << std::endl;    
    return (0);
}
