/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_book.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:21:13 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/02 21:08:27 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_BOOK
# define CONTACT_BOOK

#include "contact.hpp"

class phonebook
{
    public:
        contact cont[8];
        phonebook();
        ~phonebook();
        void move_current();
        int  get_current();
    private:
        int current;
        int contact_nbr;
};

#endif