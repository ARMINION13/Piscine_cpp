/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:43:03 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/17 23:07:15 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureacrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

// void leak()
// {
//     system("leaks Execute");
// }

int main()
{
    Intern random;
    
    std::cout << "-------------------------------" << std::endl;
    try
    {
        Bureacrat juan(45, "Juan");
        std::cout << juan << std::endl;
        Form    *frm = random.makeForm("Robotomy request", "Pepe");
        std::cout << *frm << std::endl;
        juan.signForm(*frm);
        juan.executeForm(*frm);
        juan.executeForm(*frm);
        juan.executeForm(*frm);
        std::cout << *frm << std::endl;
        delete frm;
    }
    catch (std::exception & e)
    {   
    
    }
    std::cout << "-------------------------------" << std::endl;    
    try
    {
        Bureacrat juan1(5, "Juan");
        std::cout << juan1 << std::endl;
        Form    *frm1 = random.makeForm("President request", "Pepe");
        std::cout << *frm1 << std::endl;
        juan1.signForm(*frm1);
        juan1.executeForm(*frm1);
        std::cout << *frm1 << std::endl;
        delete frm1;
    }
    catch (std::exception & e)
    {   
    
    }
    std::cout << "-------------------------------" << std::endl;
    try
    {
        Bureacrat juan2(137, "Juan");
        std::cout << juan2 << std::endl;
        Form    *frm2 = random.makeForm("Shrubbery request", "Pepe");
        std::cout << *frm2 << std::endl;
        juan2.signForm(*frm2);
        juan2.executeForm(*frm2);
        std::cout << *frm2 << std::endl;
        delete frm2;
    }
    catch (std::exception & e)
    {   
    
    }
    std::cout << "-------------------------------" << std::endl;   
    return (0);
}
