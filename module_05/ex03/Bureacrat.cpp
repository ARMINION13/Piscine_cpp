/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureacrat.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:10:38 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/17 22:27:40 by rgirondo         ###   ########.fr       */
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
        throw GradeTooLowException("Bureacrat constructor grade too low");
    if (_grade < 1)
        throw GradeTooHighException("Bureacrat constructor grade too high");
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
    _grade = asg.getGrade();
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
        throw GradeTooHighException("Grade too high to be incremented");
}

void Bureacrat::decrement()
{
    _grade++;
    if (_grade > 150)
        throw GradeTooLowException("Grade too low to be decremented");
}

void Bureacrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << getName() << " signs " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        
    }
}

void Bureacrat::executeForm(Form const &form)
{
    try
    {
        std::cout << getName() << " executes " << form.getName() << std::endl;
        form.execute(*this);
    }
    catch (std::exception &e)
    {
        
    }
}

std::ostream&    operator<<(std::ostream &o, Bureacrat const &bureacrat)
{
    o << bureacrat.getName() << ", bureacrat grade " << bureacrat.getGrade();
    return o;
}

Bureacrat::GradeTooHighException::GradeTooHighException(std::string error)
{
	std::cout << error << std::endl;
}

Bureacrat::GradeTooLowException::GradeTooLowException(std::string error)
{
	std::cout << error << std::endl;
}