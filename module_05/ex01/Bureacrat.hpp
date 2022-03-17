/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureacrat.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:31:41 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/17 18:43:28 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREACRAT_
#define _BUREACRAT_

#include <iostream>
#include "Form.hpp"

class Form;;

class Bureacrat
{
	private:
		std::string const _name;
		int _grade;
	public:
		Bureacrat();
		Bureacrat(int grade, std::string name);
		Bureacrat(Bureacrat &asg);
		~Bureacrat();
		void operator=(Bureacrat &asg);
		std::string getName() const;
		int getGrade() const;
		void increment();
		void decrement();
		void signForm(Form &form);
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

std::ostream&    operator<<(std::ostream &o, Bureacrat const &bureacrat);

#endif