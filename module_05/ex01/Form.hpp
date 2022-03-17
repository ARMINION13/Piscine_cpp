/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:14:17 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/17 18:51:03 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_
#define _FORM_

#include <iostream>
#include "Bureacrat.hpp"

class Bureacrat;

class Form
{
    private:
        std::string const _name;
        bool _signed;
        int const _min_grade_to_sign;
        int const _min_grade_to_execute;
    public:
        Form();
		Form(std::string name, int _min_grade_to_sign, int _min_grade_to_execute);
		Form(Form &asg);
		~Form();
		void operator=(Form &asg);
        std::string getName() const;
		bool getSign() const;
		void beSigned(Bureacrat &bureacrat);
		class GradeTooHighException : public std::exception 
		{
			public:
				GradeTooHighException(std::string error);
		};
		class GradeTooLowException  : public std::exception 
		{
			public:
				GradeTooLowException(std::string error);
		};
};

std::ostream&    operator<<(std::ostream &o, Form const &form);

#endif