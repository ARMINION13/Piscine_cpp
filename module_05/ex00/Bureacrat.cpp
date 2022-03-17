/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureacrat.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:10:38 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/16 20:25:33 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureacrat.hpp"

Bureacrat::Bureacrat() : _name("default")
{
    _grade = 75;
}

Bureacrat::Bureacrat(int grade, std::string name) : _name(name)
{
    _grade = grade;
    if (_grade > 150)
        throw GradeTooLowException();
    if (_grade < 1)
        throw GradeTooHighException();
}

Bureacrat::Bureacrat(Bureacrat &asg)
{
    *this = asg;
}

Bureacrat::~Bureacrat()
{
    
}

void Bureacrat::operator=(Bureacrat &asg)
{
    _grade = asg._grade;
}

std::string Bureacrat::getName() const
{
    return (_name);
}

int Bureacrat::getGrade() const
{
    return (_grade);
}

void Bureacrat::increment()
{
    _grade--;
    if (_grade < 1)
        throw GradeTooHighException();
}

void Bureacrat::decrement()
{
    _grade++;
    if (_grade > 150)
        throw GradeTooLowException();
}

std::ostream&    operator<<(std::ostream &o, Bureacrat const &bureacrat)
{
    o << bureacrat.getName() << ", bureacrat grade " << bureacrat.getGrade();
    return o;
}

Bureacrat::GradeTooHighException::GradeTooHighException()
{
	std::cout << "Grade too high" << std::endl;
}

Bureacrat::GradeTooLowException::GradeTooLowException()
{
	std::cout << "Grade too low" << std::endl;
}