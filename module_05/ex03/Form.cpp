/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:30:02 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/17 19:19:51 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() 
: _name("default"), _signed(false), _min_grade_to_sign(150), _min_grade_to_execute(150)
{

}

Form::Form(std::string name, int sign_grade, int exe_grade) 
: _name(name), _signed(false), _min_grade_to_sign(sign_grade), _min_grade_to_execute(exe_grade)
{
    if (_min_grade_to_execute > 150 || _min_grade_to_sign > 150)
        throw GradeTooLowException("grades passed to the form constructor too low");
    if (_min_grade_to_sign < 0 || _min_grade_to_execute < 0)
        throw GradeTooHighException("grades passed to the form constructor too high");
}

Form::Form(Form &asg)
: _name("default"), _signed(false), _min_grade_to_sign(150), _min_grade_to_execute(150)
{
    *this = asg;
}

Form::~Form()
{
    
}

void Form::operator=(Form &asg)
{
    _signed = asg.getSign();
}

std::string Form::getName() const
{
    return (_name);
}

bool Form::getSign() const
{
    return (_signed);
}

void Form::beSigned(Bureacrat &bureacrat)
{
    if (_min_grade_to_sign < bureacrat.getGrade())
        throw GradeTooLowException(bureacrat.getName() + " cannot sign " + getName() + " because grade too low");
    else
        _signed = true;
}

std::ostream&    operator<<(std::ostream &o, Form const &form)
{
    if (form.getSign())
        o << form.getName() << ", signed";
    else
        o << form.getName() << ", unsigned";
    return o;
}

Form::GradeTooHighException::GradeTooHighException(std::string error)
{
	std::cout << error << std::endl;
}

Form::GradeTooLowException::GradeTooLowException(std::string error)
{
	std::cout << error << std::endl;
}