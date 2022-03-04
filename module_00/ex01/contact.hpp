/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:02:46 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/02 19:43:07 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT
# define CONTACT

#include <iostream>
#include <iomanip>

class contact
{
    public:
        contact();
        ~contact();
        void set_name(std::string name);
        void set_last_name(std::string name);
        void set_nick(std::string name);
        void set_phone(std::string name);
        void set_dark_secret(std::string name);
        std::string get_name();
        std::string get_last_name();
        std::string get_nick();
        std::string get_phone();
        std::string get_dark_secret();
    private:
        std::string _name;
        std::string _last_name;
        std::string _nick;
        std::string _phone;
        std::string _darkest_secret;
};

#endif