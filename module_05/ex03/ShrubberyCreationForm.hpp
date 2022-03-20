/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 20:27:16 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/20 21:42:36 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SHRUBBERY_FORM_
#define _SHRUBBERY_FORM_

#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    private:
        std::string _target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string _target);
        ShrubberyCreationForm(ShrubberyCreationForm &asg);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(ShrubberyCreationForm &asg);
        std::string getTarget() const;
        void execute(Bureacrat const & executor) const;
};

#endif