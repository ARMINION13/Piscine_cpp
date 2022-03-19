/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:48:00 by rgirondo          #+#    #+#             */
/*   Updated: 2022/03/19 20:54:50 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_
#define _BRAIN_

#include <iostream>

class Brain
{
    public:
        std::string _ideas[100];
        Brain();
        Brain(const Brain &asg);
        Brain &operator=(const Brain &asg);
        ~Brain();  
};

#endif