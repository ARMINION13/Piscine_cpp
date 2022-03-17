/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 22:38:37 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/17 23:08:47 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    
}

Intern::Intern(Intern &asg)
{
    *this = asg;
}

Intern::~Intern()
{
    
}

void Intern::operator=(Intern &asg)
{
    (void)asg;
}

Form *Intern::makeForm(std::string form, std::string target)
{
    std::string options[3] = {"President request", "Robotomy request", "Shrubbery request"};
    int i = 0;
    
    while (form != options[i] && i < 3)
        i++;
    switch (i)
    {
        case 0:
            std::cout << "Intern create " << target << std::endl;
            return (new PresidentialPardonForm(target));
        case 1:
            std::cout << "Intern create " << target << std::endl;
            return (new RobotomyRequestForm(target));
        case 2:
            std::cout << "Intern create " << target << std::endl;
            return (new ShrubberyCreationForm(target));
        default:
            throw requestException(form + " type invalid");
    }
}

Intern::requestException::requestException(std::string error)
{
    std::cout << error << std::endl;
}