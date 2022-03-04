/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:31:24 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/02 20:02:43 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact()
{

}

contact::~contact()
{

}

void    contact::set_name(std::string name)
{
    this->_name = name;
}

void    contact::set_last_name(std::string name)
{
    this->_last_name = name;
}

void    contact::set_nick(std::string name)
{
    this->_nick = name;
}

void    contact::set_phone(std::string name)
{
    this->_phone = name;
}

void    contact::set_dark_secret(std::string name)
{
    this->_darkest_secret = name;
}

std::string contact::get_name()
{
    return(this->_name);
}

std::string contact::get_last_name()
{
    return(this->_last_name);
}

std::string contact::get_nick()
{
    return(this->_nick);
}

std::string contact::get_phone()
{
    return(this->_phone);
}

std::string contact::get_dark_secret()
{
    return(this->_darkest_secret);
}