/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 20:26:50 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/17 22:19:10 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
    
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
    _target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &asg)
{
    *this = asg;   
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

// RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &asg)
// {
//     *this = asg;
//     return (*this);
// }

void RobotomyRequestForm::execute(Bureacrat const & executor) const
{
    if (getSign())
    {
        if (45 < executor.getGrade())
            throw GradeTooLowException(executor.getName() + " cant execute RobotomyRequestForm");
        else
        {
            std::cout <<"AWDaAFAWfwadada...!!" << std::endl;
            if ((rand() % 100) < 50)
                std::cout << _target << " has been robotomized successfully" << std::endl;
            else
                std::cout << _target << " robotimize failed" << std::endl;
                
        }
    }
    else
        throw GradeTooLowException("Form not signed");
}