/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 20:26:43 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/17 22:19:50 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PRESIDENT_FORM_
#define _PRESIDENT_FORM_

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string _target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm &asg);
        PresidentialPardonForm(std::string target);
		virtual ~PresidentialPardonForm();
		//PresidentialPardonForm &operator=(PresidentialPardonForm &asg);
        void execute(Bureacrat const & executor) const;
};

#endif