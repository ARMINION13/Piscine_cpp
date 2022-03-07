/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:28:30 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/07 18:54:05 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _KAREN_
 #define _KAREN_

#include <iostream>

class Karen
{
    public:
        Karen();
        ~Karen();
        void complain(std::string level);
    private:
        void debug();
        void info();
        void warning();
        void error();
};

#endif