/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureacrat.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:31:41 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/20 20:17:06 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREACRAT_
#define _BUREACRAT_

#include <iostream>

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
		Bureacrat &operator=(Bureacrat &asg);
		std::string getName() const;
		int getGrade() const;
		void increment();
		void decrement();
		class GradeTooHighException : public std::exception 
		{
			public:
				GradeTooHighException();
		};
		class GradeTooLowException  : public std::exception 
		{
			public:
				GradeTooLowException();
		};
};

std::ostream&    operator<<(std::ostream &o, Bureacrat const &bureacrat);

#endif