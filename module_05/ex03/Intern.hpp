/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 22:31:52 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/20 21:43:43 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _INTERN_
#define _INTERN_

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(Intern &asg);
        ~Intern();
        Intern &operator=(Intern &asg);
        Form *makeForm(std::string form, std::string target);
        class requestException : public std::exception
        {
            public:
                requestException(std::string error);
        };
};

#endif