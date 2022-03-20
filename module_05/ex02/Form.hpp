/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:14:17 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/20 21:47:36 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_
#define _FORM_

#include <iostream>
#include "Bureacrat.hpp"
#include <fstream>
#include <cstdlib>

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
		virtual ~Form();
		Form &operator=(Form &asg);
        std::string getName() const;
		bool getSign() const;
		int getMinSign() const; 
		int getMinExecute() const;
		void beSigned(Bureacrat &bureacrat);
		virtual void execute(Bureacrat const &bureacrat) const = 0;
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