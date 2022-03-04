/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_book.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:25:27 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/02 21:08:28 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact_book.hpp"

phonebook::phonebook()
{
    this->contact_nbr = 8;
    this->current = 0;
}

phonebook::~phonebook()
{
    this->contact_nbr = 0;
}

void    phonebook::move_current()
{
    this->current++;
    if (this->current == 8)
        this->current = 0;
}

int phonebook::get_current()
{
    return (this->current);
}