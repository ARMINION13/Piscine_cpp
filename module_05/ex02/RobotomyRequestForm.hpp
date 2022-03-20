/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 20:26:53 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/20 21:49:53 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ROBOT_FORM_
#define _ROBOT_FORM_

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm &asg);
        RobotomyRequestForm(std::string target);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm &operator=(RobotomyRequestForm &asg);
        std::string getTarget() const;
        void execute(Bureacrat const & executor) const;
};

#endif