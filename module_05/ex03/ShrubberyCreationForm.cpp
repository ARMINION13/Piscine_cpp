/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 20:27:13 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/17 22:17:17 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137)
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
    _target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &asg)
{
    *this = asg;   
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

// ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &asg)
// {
//     *this = asg;
//     return (*this);
// }

void ShrubberyCreationForm::execute(Bureacrat const & executor) const
{
    if (getSign())
    {
        if (137 < executor.getGrade())
            throw GradeTooLowException(executor.getName() + " cant execute ShrubberyCreationForm");
        else
        {
            std::ofstream ofs(_target + "_shrubbery");
            ofs << "      |" << std::endl;
			ofs << "    \\|/|/" << std::endl;
			ofs << "  \\|\\|//|/" << std::endl;
			ofs << "   \\|\\|/|/" << std::endl;
			ofs << "    \\|//" << std::endl;
			ofs << "     \\|/" << std::endl;
			ofs << "     \\|/" << std::endl;
			ofs << "      |" << std::endl;
			ofs << "_\\|/__|_\\|/____\\|/_" << std::endl;
            std::cout << "Tree success" << std::endl;
        }
    }
    else
        throw GradeTooLowException("Form not signed");
}