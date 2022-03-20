/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 20:26:47 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/20 21:41:37 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
    
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
    _target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &asg)
{
    *this = asg;   
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

std::string PresidentialPardonForm::getTarget() const
{
    return (_target);
}


PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &asg)
{
    _target = asg.getTarget();
    return (*this);
}

void PresidentialPardonForm::execute(Bureacrat const & executor) const
{
    if (getSign())
    {
        if (5 < executor.getGrade())
            throw GradeTooLowException(executor.getName() + " cant execute PresidentialPardonForm");
        else
            std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
    }
    else
        throw GradeTooLowException("Form not signed");
}